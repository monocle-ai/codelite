//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: filechecklistbase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef FILECHECKLISTBASE_BASE_CLASSES_H
#define FILECHECKLISTBASE_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/checklst.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/commandlinkbutton.h>
#include <wx/checkbox.h>

class FileCheckListBase : public wxDialog
{
protected:
    wxStaticText* m_caption;
    wxCheckListBox* m_fileCheckList;
    wxButton* m_clearAll;
    wxButton* m_checkAllButton;
    wxTextCtrl* m_selectedFilePath;
    wxStdDialogButtonSizer* m_stdBtnSizer2;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnClearAll(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCheckAll(wxCommandEvent& event) { event.Skip(); }

public:
    FileCheckListBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Select Files"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP|wxRESIZE_BORDER);
    virtual ~FileCheckListBase();
};


class FilesModifiedDlgBase : public wxDialog
{
protected:
    enum {
        ID_BUTTON_CHOOSE = 1001,
        ID_BUTTON_LOAD = 1002,
    };
protected:
    wxStaticText* m_staticText34;
    wxCommandLinkButton* m_cmdLnkBtn28;
    wxCommandLinkButton* m_cmdLnkBtn30;
    wxCheckBox* m_checkBoxRemember;

protected:
    virtual void OnChoose(wxCommandEvent& event) { event.Skip(); }
    virtual void OnLoad(wxCommandEvent& event) { event.Skip(); }

public:
    FilesModifiedDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Files were modified outside the editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~FilesModifiedDlgBase();
};

#endif
