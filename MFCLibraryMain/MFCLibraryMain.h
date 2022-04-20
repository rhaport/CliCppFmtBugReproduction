// MFCLibraryMain.h : main header file for the MFCLibraryMain DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFCLibraryMainApp
// See MFCLibraryMain.cpp for the implementation of this class
//

class CMFCLibraryMainApp : public CWinApp
{
public:
	CMFCLibraryMainApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
