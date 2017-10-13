///-----------------------------------------------------------------
///
/// @file      ProPruebaFrm.cpp
/// @author    ChamHerz
/// Created:   13/10/2017 6:24:01 p. m.
/// @section   DESCRIPTION
///            ProPruebaFrm class implementation
///
///------------------------------------------------------------------

#include "ProPruebaFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// ProPruebaFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(ProPruebaFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(ProPruebaFrm::OnClose)
END_EVENT_TABLE()
////Event Table End

ProPruebaFrm::ProPruebaFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

ProPruebaFrm::~ProPruebaFrm()
{
}

void ProPruebaFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("WxButton1"), wxPoint(69, 106), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton1"));

	SetTitle(_("ProPrueba"));
	SetIcon(wxNullIcon);
	SetSize(8,8,320,334);
	Center();
	
	////GUI Items Creation End
}

void ProPruebaFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}
