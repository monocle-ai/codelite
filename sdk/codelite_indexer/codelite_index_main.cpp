#include <stdio.h>
#include <stdlib.h>
#include "workerthread.h"

#include "equeue.h"
#include "network/named_pipe_client.h"
#include "network/np_connections_server.h"
#include "libctags/libctags.h"

#ifdef __WXMSW__
#ifdef __DEBUG
#define PIPE_NAME "\\\\.\\pipe\\codelite_indexer_%s_dbg"
#else
#define PIPE_NAME "\\\\.\\pipe\\codelite_indexer_%s"
#endif
#else
#define PIPE_NAME "/tmp/codelite_indexer.%s.sock"
#endif

static eQueue<clNamedPipe*> g_connectionQueue;

int main(int argc, char **argv)
{
	int  max_requests(1500);
	int  requests(0);
	bool check_parent(false);

	if(argc < 2){
		printf("Usage: %s <string> [--pid]\n", argv[0]);
		printf("   <string> - a unique string that identifies this indexer from other instances               \n");
		printf("   --pid    - when set, <string> is handled as process number and the indexer will            \n");
		printf("              check if this process alive. Incase it is down, the indexer will go down as well\n");
		return 1;
	}

	if ( argc == 3 && strcmp( argv[2], "--pid") == 0 ) {
		check_parent = true;
		printf("INFO: parent PID is set on %s\n", argv[1]);
	}

	// create the connection factory
	char channel_name[1024];
	sprintf(channel_name, PIPE_NAME, argv[1]);

	clNamedPipeConnectionsServer server(channel_name);

	// start the worker thread
	WorkerThread worker( &g_connectionQueue );
	worker.run();

	printf("INFO: codelite_indexer started\n");
	printf("INFO: listening on %s\n", channel_name);

	while (true) {
		clNamedPipe *conn = server.waitForNewConnection(-1);
		if (!conn) {
			fprintf(stderr, "ERROR: Failed to receive new connection: %d\n", server.getLastError());
			continue;
		}

		// add the request to the queue
		g_connectionQueue.put(conn);

		requests ++;
		if(requests == max_requests) {
			// stop the worker thread and exit
			printf("INFO: Max requests reached, going down\n");
			worker.requestStop();
			worker.wait(-1);
			break;
		}
	}

	// perform some cleanup
	ctags_shutdown();
	return 0;
}
