//---------------------------------------------------------------------------
//
// Name:        ProPruebaApp.h
// Author:      ChamHerz
// Created:     13/10/2017 6:24:01 p. m.
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __PROPRUEBAFRMApp_h__
#define __PROPRUEBAFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class ProPruebaFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
