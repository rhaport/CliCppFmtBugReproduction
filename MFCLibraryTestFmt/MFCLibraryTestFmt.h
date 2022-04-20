// MFCLibraryTestFmt.h : main header file for the MFCLibraryTestFmt DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFCLibraryTestFmtApp
// See MFCLibraryTestFmt.cpp for the implementation of this class
//

class CMFCLibraryTestFmtApp : public CWinApp
{
public:
	CMFCLibraryTestFmtApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
