#define _WIN32_WINNT 0x0400
#define UNICODE
#include <afxwin.h>

class CHelloWnd : public CFrameWnd
{
public:
	void afx_msg OnPaint();
	void afx_msg OnSetFocus(CWnd*);
	void afx_msg OnKillFocus(CWnd*);
	void afx_msg OnTimer(UINT);
private:
	DECLARE_MESSAGE_MAP()
};

void CHelloWnd::OnPaint()
{
	CTime now = CTime::GetCurrentTime();
	CString text = now.Format(L"%d-%m-%y %H:%M:%S");
	CPaintDC dc(this);
	dc.Rectangle(30, 30, 165, 65);
	dc.TextOut(40, 40, text);
}

void CHelloWnd::OnSetFocus(CWnd*)
{
	SetTimer(1, 1000, NULL);
}

void CHelloWnd::OnKillFocus(CWnd*)
{
	KillTimer(1);
}

void CHelloWnd::OnTimer(UINT)
{
	Invalidate();
}

BEGIN_MESSAGE_MAP(CHelloWnd, CFrameWnd)
	ON_WM_PAINT()
	ON_WM_SETFOCUS()
	ON_WM_KILLFOCUS()
	ON_WM_TIMER()
END_MESSAGE_MAP()

class CHelloApp : public CWinApp
{
public:
	BOOL InitInstance()
	{
		CFrameWnd* pFrame = new CHelloWnd;
		pFrame->Create(NULL, L"Hello MFC");
		pFrame->ShowWindow(m_nCmdShow);
		pFrame->UpdateWindow();
		m_pMainWnd = pFrame;
		return TRUE;
	}
};

CHelloApp theApp;





// Static Linking -> cl /MT mfcmsgtest.cpp /link /entry:wWinMainCRTStartup /ignore:4089

// Dynamic Linking -> cl /MD /D_AFXDLL mfcmsgtest.cpp /link /entry:wWinMainCRTStartup /ignore:4089






