//-------------------------------------------------------------------------------------------------
//MAIN_APPLICATION_H
//-------------------------------------------------------------------------------------------------
#ifndef MAIN_APPLICATION_H
#define MAIN_APPLICATION_H
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//WIN32
//-------------------------------------------------------------------------------------------------
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//HEADERS
//-------------------------------------------------------------------------------------------------
#include <windows.h>
#include <windowsx.h>
#include <winsock2.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "resource.h"
#include "H02_MyServer.h"
#include "BugTrap/BugTrap.h"
#pragma comment(lib, "BugTrap/BugTrap.lib")
#include <direct.h>
#include <iostream>
#include <clocale>

//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//DEFINE_GLOBAL_MACRO
//-------------------------------------------------------------------------------------------------
#define MAIN_WINDOW_SIZE_X											300
#define MAIN_WINDOW_SIZE_Y											100
#define WM_NETWORK_MESSAGE_1										WM_USER + 1
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//SERVER_INFO
//-------------------------------------------------------------------------------------------------
typedef struct
{
	char mServerName[100];
	int mServerPort;
	int mWorldNumber;
	
	BOOL mCrmDBUse;
	char mDBCrmIP[16];
	int mDBCrmPort;
	char mDBCrmID[100];
	char mDBCrmPwd[100];
}
SERVER_INFO;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//CALLBACK_FUNCTION
//-------------------------------------------------------------------------------------------------
extern LRESULT CALLBACK WinMainProcedure( HWND hWnd, UINT nMss, WPARAM wPrm, LPARAM lPrm );
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//APPLICATION_FUNCTION
//-------------------------------------------------------------------------------------------------
extern BOOL ReadServerInfo( void );
extern BOOL ApplicationInit( void );
extern void ApplicationFree( void );
extern void BugTrapInit( void );
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//GLOBAL_VARIABLE
//-------------------------------------------------------------------------------------------------
extern HWND hMainWindow;
extern SERVER_INFO mSERVER_INFO;
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
#endif
//-------------------------------------------------------------------------------------------------
