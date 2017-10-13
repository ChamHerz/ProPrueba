//---------------------------------------------------------------------------
//
// Name:        ProPruebaApp.cpp
// Author:      ChamHerz
// Created:     13/10/2017 6:24:01 p. m.
// Description: 
//
//---------------------------------------------------------------------------

#include "ProPruebaApp.h"
#include "ProPruebaFrm.h"

IMPLEMENT_APP(ProPruebaFrmApp)

bool ProPruebaFrmApp::OnInit()
{
    ProPruebaFrm* frame = new ProPruebaFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int ProPruebaFrmApp::OnExit()
{
	return 0;
}
