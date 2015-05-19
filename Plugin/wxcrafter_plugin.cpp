//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter_plugin.h"
#include "codelite_exports.h"


// Declare the bitmap loading function
extern void wxC9D6CInitBitmapResources();

static bool bBitmapLoaded = false;


EditDlgBase::EditDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    boxSizer2 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer2);
    
    m_stc10 = new wxStyledTextCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    m_stc10->SetFocus();
    // Configure the fold margin
    m_stc10->SetMarginType     (4, wxSTC_MARGIN_SYMBOL);
    m_stc10->SetMarginMask     (4, wxSTC_MASK_FOLDERS);
    m_stc10->SetMarginSensitive(4, true);
    m_stc10->SetMarginWidth    (4, 0);
    
    // Configure the tracker margin
    m_stc10->SetMarginWidth(1, 0);
    
    // Configure the symbol margin
    m_stc10->SetMarginType (2, wxSTC_MARGIN_SYMBOL);
    m_stc10->SetMarginMask (2, ~(wxSTC_MASK_FOLDERS));
    m_stc10->SetMarginWidth(2, 0);
    m_stc10->SetMarginSensitive(2, true);
    
    // Configure the line numbers margin
    m_stc10->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stc10->SetMarginWidth(0,0);
    
    // Configure the line symbol margin
    m_stc10->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stc10->SetMarginMask(3, 0);
    m_stc10->SetMarginWidth(3,0);
    // Select the lexer
    m_stc10->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stc10->StyleClearAll();
    m_stc10->SetWrapMode(0);
    m_stc10->SetIndentationGuides(0);
    m_stc10->SetKeyWords(0, wxT(""));
    m_stc10->SetKeyWords(1, wxT(""));
    m_stc10->SetKeyWords(2, wxT(""));
    m_stc10->SetKeyWords(3, wxT(""));
    m_stc10->SetKeyWords(4, wxT(""));
    
    boxSizer2->Add(m_stc10, 1, wxALL|wxEXPAND, 5);
    
    boxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer2->Add(boxSizer4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_button6 = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_button6->SetDefault();
    
    boxSizer4->Add(m_button6, 0, wxALL, 5);
    
    m_button8 = new wxButton(this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer4->Add(m_button8, 0, wxALL, 5);
    
    SetName(wxT("EditDlgBase"));
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
}

EditDlgBase::~EditDlgBase()
{
}

DiffSideBySidePanelBase::DiffSideBySidePanelBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    boxSizer13 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer13);
    
    m_ribbonBar = new wxRibbonBar(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxRIBBON_BAR_DEFAULT_STYLE);
    m_ribbonBar->SetArtProvider(new wxRibbonDefaultArtProvider);
    
    boxSizer13->Add(m_ribbonBar, 0, wxALL|wxEXPAND, 2);
    
    m_ribbonPage43 = new wxRibbonPage(m_ribbonBar, wxID_ANY, _("Text Files Comparison"), wxNullBitmap, 0);
    m_ribbonBar->SetActivePage( m_ribbonPage43 );
    
    m_ribbonPanel47 = new wxRibbonPanel(m_ribbonPage43, wxID_ANY, _("Comparison"), wxNullBitmap, wxDefaultPosition, wxSize(-1,-1), wxRIBBON_PANEL_DEFAULT_STYLE);
    
    m_ribbonButtonBar49 = new wxRibbonButtonBar(m_ribbonPanel47, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    
    m_ribbonButtonBar49->AddButton(wxID_REFRESH, _("Refresh"), wxXmlResource::Get()->LoadBitmap(wxT("diff-refresh")), _("Refresh View"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBar49->AddButton(wxID_DOWN, _("Next"), wxXmlResource::Get()->LoadBitmap(wxT("diff-next")), _("Next Diff"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBar49->AddButton(wxID_UP, _("Previous"), wxXmlResource::Get()->LoadBitmap(wxT("diff-prev")), _("Previous Diff"), wxRIBBON_BUTTON_NORMAL);
    m_ribbonButtonBar49->Realize();
    
    m_ribbonPanel83 = new wxRibbonPanel(m_ribbonPage43, wxID_ANY, _("Edit"), wxNullBitmap, wxDefaultPosition, wxSize(-1,-1), wxRIBBON_PANEL_DEFAULT_STYLE);
    
    m_ribbonButtonBar85 = new wxRibbonButtonBar(m_ribbonPanel83, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    
    m_ribbonButtonBar85->AddButton(ID_TOOL_COPY_DIFF_LEFT_TO_RIGHT, _(" Copy"), wxXmlResource::Get()->LoadBitmap(wxT("diff-copy-left-to-right")), _("Copy current diff sequence from the left side to the right side"), wxRIBBON_BUTTON_HYBRID);
    
    m_ribbonButtonBar85->AddButton(ID_TOOL_COPY_DIFF_RIGHT_TO_LEFT, _(" Copy"), wxXmlResource::Get()->LoadBitmap(wxT("diff-copy-right-to-left")), _("Copy current diff sequence from the right side to the left side"), wxRIBBON_BUTTON_HYBRID);
    
    m_ribbonButtonBar85->AddButton(ID_TOOL_COPY_FILE_LEFT_TO_RIGHT, _("All Left"), wxXmlResource::Get()->LoadBitmap(wxT("diff-copy-file-left-to-right")), _("Copy the content of the left file to the right file"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBar85->AddButton(ID_TOOL_COPY_FILE_RIGHT_TO_LEFT, _("All Right"), wxXmlResource::Get()->LoadBitmap(wxT("diff-copy-file-right-to-left")), _("Copy file from right to left"), wxRIBBON_BUTTON_NORMAL);
    
    m_ribbonButtonBar85->AddButton(ID_TOOL_SAVE, _("Save"), wxXmlResource::Get()->LoadBitmap(wxT("diff-save")), _("Save changes and refresh the diff view"), wxRIBBON_BUTTON_NORMAL);
    m_ribbonButtonBar85->Realize();
    
    m_ribbonPanel121 = new wxRibbonPanel(m_ribbonPage43, wxID_ANY, _("View"), wxNullBitmap, wxDefaultPosition, wxSize(-1,-1), wxRIBBON_PANEL_DEFAULT_STYLE);
    
    m_ribbonButtonBar123 = new wxRibbonButtonBar(m_ribbonPanel121, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    
    m_ribbonButtonBar123->AddButton(ID_VIEW_VRTICAL, _("Vertical"), wxXmlResource::Get()->LoadBitmap(wxT("tile_horizontal")), _("Vertical panes"), wxRIBBON_BUTTON_TOGGLE);
    
    m_ribbonButtonBar123->AddButton(ID_VIEW_HORIZONTAL, _("Horizontal"), wxXmlResource::Get()->LoadBitmap(wxT("tile_vertical")), _("Horizontal panes"), wxRIBBON_BUTTON_TOGGLE);
    
    m_ribbonButtonBar123->AddButton(ID_VIEW_SINGLE, _("Single"), wxXmlResource::Get()->LoadBitmap(wxT("tile_single")), _("Single view"), wxRIBBON_BUTTON_TOGGLE);
    m_ribbonButtonBar123->Realize();
    m_ribbonBar->Realize();
    m_splitter = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxSP_LIVE_UPDATE|wxSP_PERMIT_UNSPLIT|wxSP_NO_XP_THEME|wxSP_3DSASH);
    m_splitter->SetSashGravity(0.5);
    m_splitter->SetMinimumPaneSize(10);
    
    boxSizer13->Add(m_splitter, 1, wxALL|wxEXPAND, 2);
    
    m_splitterPageLeft = new wxPanel(m_splitter, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    boxSizer111 = new wxBoxSizer(wxVERTICAL);
    m_splitterPageLeft->SetSizer(boxSizer111);
    
    m_filePickerLeft = new wxFilePickerCtrl(m_splitterPageLeft, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*"), wxDefaultPosition, wxSize(-1,-1), wxFLP_DEFAULT_STYLE|wxFLP_USE_TEXTCTRL|wxFLP_SMALL);
    
    boxSizer111->Add(m_filePickerLeft, 0, wxALL|wxEXPAND, 2);
    
    m_stcLeft = new wxStyledTextCtrl(m_splitterPageLeft, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    m_stcLeft->SetFocus();
    // Configure the fold margin
    m_stcLeft->SetMarginType     (4, wxSTC_MARGIN_SYMBOL);
    m_stcLeft->SetMarginMask     (4, wxSTC_MASK_FOLDERS);
    m_stcLeft->SetMarginSensitive(4, true);
    m_stcLeft->SetMarginWidth    (4, 0);
    
    // Configure the tracker margin
    m_stcLeft->SetMarginWidth(1, 0);
    
    // Configure the symbol margin
    m_stcLeft->SetMarginType (2, wxSTC_MARGIN_SYMBOL);
    m_stcLeft->SetMarginMask (2, ~(wxSTC_MASK_FOLDERS));
    m_stcLeft->SetMarginWidth(2, 16);
    m_stcLeft->SetMarginSensitive(2, true);
    
    // Configure the line numbers margin
    m_stcLeft->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcLeft->SetMarginWidth(0,0);
    
    // Configure the line symbol margin
    m_stcLeft->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcLeft->SetMarginMask(3, 0);
    m_stcLeft->SetMarginWidth(3,0);
    // Select the lexer
    m_stcLeft->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcLeft->StyleClearAll();
    m_stcLeft->SetWrapMode(0);
    m_stcLeft->SetIndentationGuides(0);
    m_stcLeft->SetKeyWords(0, wxT(""));
    m_stcLeft->SetKeyWords(1, wxT(""));
    m_stcLeft->SetKeyWords(2, wxT(""));
    m_stcLeft->SetKeyWords(3, wxT(""));
    m_stcLeft->SetKeyWords(4, wxT(""));
    
    boxSizer111->Add(m_stcLeft, 1, wxALL|wxEXPAND, 2);
    
    m_staticTextLeft = new wxStaticText(m_splitterPageLeft, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    wxFont m_staticTextLeftFont = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_staticTextLeftFont.SetWeight(wxFONTWEIGHT_BOLD);
    m_staticTextLeft->SetFont(m_staticTextLeftFont);
    
    boxSizer111->Add(m_staticTextLeft, 0, wxALL|wxALIGN_LEFT, 2);
    
    m_splitterPageRight = new wxPanel(m_splitter, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_splitter->SplitVertically(m_splitterPageLeft, m_splitterPageRight, 0);
    
    boxSizer113 = new wxBoxSizer(wxVERTICAL);
    m_splitterPageRight->SetSizer(boxSizer113);
    
    m_filePickerRight = new wxFilePickerCtrl(m_splitterPageRight, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*"), wxDefaultPosition, wxSize(-1,-1), wxFLP_DEFAULT_STYLE|wxFLP_USE_TEXTCTRL|wxFLP_SMALL);
    
    boxSizer113->Add(m_filePickerRight, 0, wxALL|wxEXPAND, 2);
    
    m_stcRight = new wxStyledTextCtrl(m_splitterPageRight, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    // Configure the fold margin
    m_stcRight->SetMarginType     (4, wxSTC_MARGIN_SYMBOL);
    m_stcRight->SetMarginMask     (4, wxSTC_MASK_FOLDERS);
    m_stcRight->SetMarginSensitive(4, true);
    m_stcRight->SetMarginWidth    (4, 0);
    
    // Configure the tracker margin
    m_stcRight->SetMarginWidth(1, 0);
    
    // Configure the symbol margin
    m_stcRight->SetMarginType (2, wxSTC_MARGIN_SYMBOL);
    m_stcRight->SetMarginMask (2, ~(wxSTC_MASK_FOLDERS));
    m_stcRight->SetMarginWidth(2, 16);
    m_stcRight->SetMarginSensitive(2, true);
    
    // Configure the line numbers margin
    m_stcRight->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcRight->SetMarginWidth(0,0);
    
    // Configure the line symbol margin
    m_stcRight->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcRight->SetMarginMask(3, 0);
    m_stcRight->SetMarginWidth(3,0);
    // Select the lexer
    m_stcRight->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcRight->StyleClearAll();
    m_stcRight->SetWrapMode(0);
    m_stcRight->SetIndentationGuides(0);
    m_stcRight->SetKeyWords(0, wxT(""));
    m_stcRight->SetKeyWords(1, wxT(""));
    m_stcRight->SetKeyWords(2, wxT(""));
    m_stcRight->SetKeyWords(3, wxT(""));
    m_stcRight->SetKeyWords(4, wxT(""));
    
    boxSizer113->Add(m_stcRight, 1, wxALL|wxEXPAND, 2);
    
    m_staticTextRight = new wxStaticText(m_splitterPageRight, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    wxFont m_staticTextRightFont = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_staticTextRightFont.SetWeight(wxFONTWEIGHT_BOLD);
    m_staticTextRight->SetFont(m_staticTextRightFont);
    
    boxSizer113->Add(m_staticTextRight, 0, wxALL|wxALIGN_LEFT, 2);
    
    SetName(wxT("DiffSideBySidePanelBase"));
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
    // Connect events
    m_ribbonButtonBar49->Connect(wxID_REFRESH, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnRefreshDiff), NULL, this);
    m_ribbonButtonBar49->Connect(wxID_REFRESH, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnRefreshDiffUI), NULL, this);
    m_ribbonButtonBar49->Connect(wxID_DOWN, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnNextDiffSequence), NULL, this);
    m_ribbonButtonBar49->Connect(wxID_DOWN, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnNextDiffUI), NULL, this);
    m_ribbonButtonBar49->Connect(wxID_UP, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnPrevDiffSequence), NULL, this);
    m_ribbonButtonBar49->Connect(wxID_UP, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnPrevDiffUI), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_DIFF_LEFT_TO_RIGHT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyLeftToRightUI), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_DIFF_LEFT_TO_RIGHT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyLeftToRight), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_DIFF_LEFT_TO_RIGHT, wxEVT_COMMAND_RIBBONBUTTON_DROPDOWN_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyLeftToRightMenu), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_DIFF_RIGHT_TO_LEFT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyRightToLeftUI), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_DIFF_RIGHT_TO_LEFT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyRightToLeft), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_DIFF_RIGHT_TO_LEFT, wxEVT_COMMAND_RIBBONBUTTON_DROPDOWN_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyRightToLeftMenu), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_FILE_LEFT_TO_RIGHT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyFileLeftToRight), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_FILE_LEFT_TO_RIGHT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyLeftToRightUI), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_FILE_RIGHT_TO_LEFT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyFileFromRight), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_COPY_FILE_RIGHT_TO_LEFT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyRightToLeftUI), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_SAVE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnSaveChanges), NULL, this);
    m_ribbonButtonBar85->Connect(ID_TOOL_SAVE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnSaveChangesUI), NULL, this);
    m_ribbonButtonBar123->Connect(ID_VIEW_VRTICAL, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnVertical), NULL, this);
    m_ribbonButtonBar123->Connect(ID_VIEW_VRTICAL, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnVerticalUI), NULL, this);
    m_ribbonButtonBar123->Connect(ID_VIEW_HORIZONTAL, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnHorizontal), NULL, this);
    m_ribbonButtonBar123->Connect(ID_VIEW_HORIZONTAL, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnHorizontalUI), NULL, this);
    m_ribbonButtonBar123->Connect(ID_VIEW_SINGLE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnSingleView), NULL, this);
    m_ribbonButtonBar123->Connect(ID_VIEW_SINGLE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnSingleUI), NULL, this);
    m_filePickerLeft->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnLeftPickerUI), NULL, this);
    m_stcLeft->Connect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnLeftStcPainted), NULL, this);
    m_filePickerRight->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnRightPickerUI), NULL, this);
    m_stcRight->Connect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnRightStcPainted), NULL, this);
    
}

DiffSideBySidePanelBase::~DiffSideBySidePanelBase()
{
    m_ribbonButtonBar49->Disconnect(wxID_REFRESH, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnRefreshDiff), NULL, this);
    m_ribbonButtonBar49->Disconnect(wxID_REFRESH, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnRefreshDiffUI), NULL, this);
    m_ribbonButtonBar49->Disconnect(wxID_DOWN, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnNextDiffSequence), NULL, this);
    m_ribbonButtonBar49->Disconnect(wxID_DOWN, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnNextDiffUI), NULL, this);
    m_ribbonButtonBar49->Disconnect(wxID_UP, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnPrevDiffSequence), NULL, this);
    m_ribbonButtonBar49->Disconnect(wxID_UP, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnPrevDiffUI), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_DIFF_LEFT_TO_RIGHT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyLeftToRightUI), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_DIFF_LEFT_TO_RIGHT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyLeftToRight), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_DIFF_LEFT_TO_RIGHT, wxEVT_COMMAND_RIBBONBUTTON_DROPDOWN_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyLeftToRightMenu), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_DIFF_RIGHT_TO_LEFT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyRightToLeftUI), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_DIFF_RIGHT_TO_LEFT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyRightToLeft), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_DIFF_RIGHT_TO_LEFT, wxEVT_COMMAND_RIBBONBUTTON_DROPDOWN_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyRightToLeftMenu), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_FILE_LEFT_TO_RIGHT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyFileLeftToRight), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_FILE_LEFT_TO_RIGHT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyLeftToRightUI), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_FILE_RIGHT_TO_LEFT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnCopyFileFromRight), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_COPY_FILE_RIGHT_TO_LEFT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnCopyRightToLeftUI), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_SAVE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnSaveChanges), NULL, this);
    m_ribbonButtonBar85->Disconnect(ID_TOOL_SAVE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnSaveChangesUI), NULL, this);
    m_ribbonButtonBar123->Disconnect(ID_VIEW_VRTICAL, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnVertical), NULL, this);
    m_ribbonButtonBar123->Disconnect(ID_VIEW_VRTICAL, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnVerticalUI), NULL, this);
    m_ribbonButtonBar123->Disconnect(ID_VIEW_HORIZONTAL, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnHorizontal), NULL, this);
    m_ribbonButtonBar123->Disconnect(ID_VIEW_HORIZONTAL, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnHorizontalUI), NULL, this);
    m_ribbonButtonBar123->Disconnect(ID_VIEW_SINGLE, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler(DiffSideBySidePanelBase::OnSingleView), NULL, this);
    m_ribbonButtonBar123->Disconnect(ID_VIEW_SINGLE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnSingleUI), NULL, this);
    m_filePickerLeft->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnLeftPickerUI), NULL, this);
    m_stcLeft->Disconnect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnLeftStcPainted), NULL, this);
    m_filePickerRight->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnRightPickerUI), NULL, this);
    m_stcRight->Disconnect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnRightStcPainted), NULL, this);
    
}

clGetTextFromUserBaseDialog::clGetTextFromUserBaseDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    boxSizer135 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer135);
    
    m_staticTextCaption = new wxStaticText(this, wxID_ANY, _("Caption"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer135->Add(m_staticTextCaption, 0, wxALL, 5);
    
    m_textCtrl = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    m_textCtrl->SetFocus();
    #if wxVERSION_NUMBER >= 3000
    m_textCtrl->SetHint(wxT(""));
    #endif
    
    boxSizer135->Add(m_textCtrl, 0, wxALL|wxEXPAND, 5);
    
    boxSizer135->Add(0, 0, 1, wxALL, 5);
    
    m_stdBtnSizer137 = new wxStdDialogButtonSizer();
    
    boxSizer135->Add(m_stdBtnSizer137, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer137->AddButton(m_buttonCancel);
    
    m_buttonOK = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOK->SetDefault();
    m_stdBtnSizer137->AddButton(m_buttonOK);
    m_stdBtnSizer137->Realize();
    
    SetName(wxT("clGetTextFromUserBaseDialog"));
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
}

clGetTextFromUserBaseDialog::~clGetTextFromUserBaseDialog()
{
}

clTreeCtrlPanelBase::clTreeCtrlPanelBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    boxSizer151 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer151);
    
    m_treeCtrl = new clFileViewerTreeCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTR_DEFAULT_STYLE|wxTR_MULTIPLE|wxTR_HIDE_ROOT|wxTR_FULL_ROW_HIGHLIGHT|wxTR_NO_LINES|wxBORDER_STATIC);
    
    boxSizer151->Add(m_treeCtrl, 1, wxALL|wxEXPAND, 0);
    
    SetName(wxT("clTreeCtrlPanelBase"));
    SetSizeHints(500,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
    // Connect events
    m_treeCtrl->Connect(wxEVT_COMMAND_TREE_ITEM_EXPANDING, wxTreeEventHandler(clTreeCtrlPanelBase::OnItemExpanding), NULL, this);
    m_treeCtrl->Connect(wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler(clTreeCtrlPanelBase::OnItemActivated), NULL, this);
    m_treeCtrl->Connect(wxEVT_COMMAND_TREE_ITEM_MENU, wxTreeEventHandler(clTreeCtrlPanelBase::OnContextMenu), NULL, this);
    
}

clTreeCtrlPanelBase::~clTreeCtrlPanelBase()
{
    m_treeCtrl->Disconnect(wxEVT_COMMAND_TREE_ITEM_EXPANDING, wxTreeEventHandler(clTreeCtrlPanelBase::OnItemExpanding), NULL, this);
    m_treeCtrl->Disconnect(wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler(clTreeCtrlPanelBase::OnItemActivated), NULL, this);
    m_treeCtrl->Disconnect(wxEVT_COMMAND_TREE_ITEM_MENU, wxTreeEventHandler(clTreeCtrlPanelBase::OnContextMenu), NULL, this);
    
}
