// MFCDocViewTest.h : main header file for the MFCDocViewTest application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CMFCDocViewTestApp:
// See MFCDocViewTest.cpp for the implementation of this class
//

class CMFCDocViewTestApp : public CWinApp
{
public:
	CMFCDocViewTestApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCDocViewTestApp theApp;