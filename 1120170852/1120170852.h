
// 1120170852.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMy1120170852App:
// See 1120170852.cpp for the implementation of this class
//

class CMy1120170852App : public CWinApp
{
public:
	CMy1120170852App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMy1120170852App theApp;
