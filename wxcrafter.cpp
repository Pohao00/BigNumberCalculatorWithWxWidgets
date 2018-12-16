//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter.h"

// Declare the bitmap loading function
extern void wxC9ED9InitBitmapResources();

static bool bBitmapLoaded = false;

MainFrameBaseClass::MainFrameBaseClass(wxWindow* parent,
    wxWindowID id,
    const wxString& title,
    const wxPoint& pos,
    const wxSize& size,
    long style)
    : wxFrame(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9InitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer1);

    wxBoxSizer* boxSizer11 = new wxBoxSizer(wxVERTICAL);

    boxSizer1->Add(boxSizer11, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer77 = new wxBoxSizer(wxHORIZONTAL);

    boxSizer11->Add(boxSizer77, 0, 0, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer81 = new wxBoxSizer(wxVERTICAL);

    boxSizer77->Add(boxSizer81, 0, wxALL, WXC_FROM_DIP(5));

    m_staticText19 =
        new wxStaticText(this, wxID_ANY, _("Screen"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer81->Add(m_staticText19, 0, wxALL, WXC_FROM_DIP(5));

    m_textCtrl21 = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(300, 60)), 0);
#if wxVERSION_NUMBER >= 3000
    m_textCtrl21->SetHint(wxT(""));
#endif

    boxSizer81->Add(m_textCtrl21, 0, wxALL | wxALIGN_LEFT, WXC_FROM_DIP(5));
    m_textCtrl21->SetMinSize(wxSize(300, 60));

    wxBoxSizer* boxSizer79 = new wxBoxSizer(wxVERTICAL);

    boxSizer77->Add(boxSizer79, 0, 0, WXC_FROM_DIP(5));

    m_textCtrl83 = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
#if wxVERSION_NUMBER >= 3000
    m_textCtrl83->SetHint(wxT(""));
#endif

    boxSizer79->Add(m_textCtrl83, 0, wxALL, WXC_FROM_DIP(5));
    m_textCtrl83->SetMinSize(wxSize(120, 90));

    wxBoxSizer* boxSizer31 = new wxBoxSizer(wxHORIZONTAL);

    boxSizer11->Add(boxSizer31, 0, wxALL, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer35 = new wxBoxSizer(wxVERTICAL);

    boxSizer31->Add(boxSizer35, 0, 0, WXC_FROM_DIP(5));

    m_button25 = new wxButton(this, wxID_ANY, _("7"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer35->Add(m_button25, 0, wxALL, WXC_FROM_DIP(5));

    m_button27 = new wxButton(this, wxID_ANY, _("4"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer35->Add(m_button27, 0, wxALL, WXC_FROM_DIP(5));

    m_button29 = new wxButton(this, wxID_ANY, _("1"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer35->Add(m_button29, 0, wxALL, WXC_FROM_DIP(5));

    m_button53 = new wxButton(this, wxID_ANY, _("0"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer35->Add(m_button53, 0, wxALL, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer37 = new wxBoxSizer(wxVERTICAL);

    boxSizer31->Add(boxSizer37, 0, 0, WXC_FROM_DIP(5));

    m_button39 = new wxButton(this, wxID_ANY, _("8"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer37->Add(m_button39, 0, wxALL, WXC_FROM_DIP(5));

    m_button41 = new wxButton(this, wxID_ANY, _("5"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer37->Add(m_button41, 0, wxALL, WXC_FROM_DIP(5));

    m_button43 = new wxButton(this, wxID_ANY, _("2"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer37->Add(m_button43, 0, wxALL, WXC_FROM_DIP(5));

    m_button55 = new wxButton(this, wxID_ANY, _("+"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer37->Add(m_button55, 0, wxALL, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer45 = new wxBoxSizer(wxVERTICAL);

    boxSizer31->Add(boxSizer45, 0, 0, WXC_FROM_DIP(5));

    m_button47 = new wxButton(this, wxID_ANY, _("9"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer45->Add(m_button47, 0, wxALL, WXC_FROM_DIP(5));

    m_button49 = new wxButton(this, wxID_ANY, _("6"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer45->Add(m_button49, 0, wxALL, WXC_FROM_DIP(5));

    m_button51 = new wxButton(this, wxID_ANY, _("3"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer45->Add(m_button51, 0, wxALL, WXC_FROM_DIP(5));

    m_button57 = new wxButton(this, wxID_ANY, _("-"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer45->Add(m_button57, 0, wxALL, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer59 = new wxBoxSizer(wxVERTICAL);

    boxSizer31->Add(boxSizer59, 0, 0, WXC_FROM_DIP(5));

    m_button61 = new wxButton(this, wxID_ANY, _("x"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer59->Add(m_button61, 0, wxALL, WXC_FROM_DIP(5));

    m_button63 = new wxButton(this, wxID_ANY, _("/"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer59->Add(m_button63, 0, wxALL, WXC_FROM_DIP(5));

    m_button65 = new wxButton(this, wxID_ANY, _("="), wxDefaultPosition, wxDLG_UNIT(this, wxSize(88, 65)), 0);

    boxSizer59->Add(m_button65, 0, wxALL, WXC_FROM_DIP(5));
    m_button65->SetMinSize(wxSize(88, 65));

    wxBoxSizer* boxSizer71 = new wxBoxSizer(wxVERTICAL);

    boxSizer31->Add(boxSizer71, 0, 0, WXC_FROM_DIP(5));

    m_button73 = new wxButton(this, wxID_ANY, _("C"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(40, 137)), 0);

    boxSizer71->Add(m_button73, 0, wxALL, WXC_FROM_DIP(5));
    m_button73->SetMinSize(wxSize(40, 137));

    m_menuBar = new wxMenuBar(0);
    this->SetMenuBar(m_menuBar);

    m_name6 = new wxMenu();
    m_menuBar->Append(m_name6, _("File"));

    m_menuItem7 = new wxMenuItem(m_name6, wxID_EXIT, _("Exit\tAlt-X"), _("Quit"), wxITEM_NORMAL);
    m_name6->Append(m_menuItem7);

    m_name8 = new wxMenu();
    m_menuBar->Append(m_name8, _("Help"));

    m_menuItem9 = new wxMenuItem(m_name8, wxID_ABOUT, _("About..."), wxT(""), wxITEM_NORMAL);
    m_name8->Append(m_menuItem9);

    SetName(wxT("MainFrameBaseClass"));
    SetSize(500, 330);
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_button25->Connect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonSeven), NULL, this);
    m_button27->Connect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonForth), NULL, this);
    m_button29->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonOne), NULL, this);
    m_button53->Connect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonZero), NULL, this);
    m_button39->Connect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonEight), NULL, this);
    m_button41->Connect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonFive), NULL, this);
    m_button43->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonTwo), NULL, this);
    m_button55->Connect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonPlus), NULL, this);
    m_button47->Connect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonNine), NULL, this);
    m_button49->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonSix), NULL, this);
    m_button51->Connect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonThree), NULL, this);
    m_button57->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonSub), NULL, this);
    m_button61->Connect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonMulti), NULL, this);
    m_button63->Connect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonDivide), NULL, this);
    m_button65->Connect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonEqual), NULL, this);
    m_button73->Connect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonClear), NULL, this);
    this->Connect(m_menuItem7->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnExit),
        NULL, this);
    this->Connect(m_menuItem9->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnAbout),
        NULL, this);
}

MainFrameBaseClass::~MainFrameBaseClass()
{
    m_button25->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonSeven), NULL, this);
    m_button27->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonForth), NULL, this);
    m_button29->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonOne), NULL, this);
    m_button53->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonZero), NULL, this);
    m_button39->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonEight), NULL, this);
    m_button41->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonFive), NULL, this);
    m_button43->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonTwo), NULL, this);
    m_button55->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonPlus), NULL, this);
    m_button47->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonNine), NULL, this);
    m_button49->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonSix), NULL, this);
    m_button51->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonThree), NULL, this);
    m_button57->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonSub), NULL, this);
    m_button61->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonMulti), NULL, this);
    m_button63->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonDivide), NULL, this);
    m_button65->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonEqual), NULL, this);
    m_button73->Disconnect(
        wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::buttonClear), NULL, this);
    this->Disconnect(m_menuItem7->GetId(), wxEVT_COMMAND_MENU_SELECTED,
        wxCommandEventHandler(MainFrameBaseClass::OnExit), NULL, this);
    this->Disconnect(m_menuItem9->GetId(), wxEVT_COMMAND_MENU_SELECTED,
        wxCommandEventHandler(MainFrameBaseClass::OnAbout), NULL, this);
}