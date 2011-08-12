#define _WIN32_WINNT 0x0400
#define UNICODE
#include <afxwin.h>

class CHelloApp : public CWinApp
{
public:
	BOOL InitInstance()
	{
		CFrameWnd* pFrame = new CFrameWnd;
		pFrame->Create(NULL, L"Hello MFC");
		pFrame->ShowWindow(m_nCmdShow);
		pFrame->UpdateWindow();
		m_pMainWnd = pFrame;
		return TRUE;
	}
};

CHelloApp theApp;




// Static Linking -> cl /MT mfcmintest.cpp /link /entry:wWinMainCRTStartup /ignore:4089

// Dynamic Linking -> cl /MD /D_AFXDLL mfcmintest.cpp /link /entry:wWinMainCRTStartup /ignore:4089






