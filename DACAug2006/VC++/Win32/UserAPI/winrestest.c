#include "winrestest.h"

#pragma comment(lib, "user32")
#pragma comment(lib, "gdi32")

COLORREF g_clrPoint;

BOOL CALLBACK CustDialogProc(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	WORD red, green, blue;

	switch(uMsg)
	{
		case WM_INITDIALOG:
			SetDlgItemInt(hDlg, ID_RED, g_clrPoint & 0xFF, FALSE);
			SetDlgItemInt(hDlg, ID_GREEN, (g_clrPoint >> 8) & 0xFF, FALSE);
			SetDlgItemInt(hDlg, ID_BLUE, (g_clrPoint >> 16) & 0xFF, FALSE);
			return TRUE;

		case WM_COMMAND:
			switch(wParam)
			{
				case IDOK:
					red = GetDlgItemInt(hDlg, ID_RED, NULL, FALSE);
					green = GetDlgItemInt(hDlg, ID_GREEN, NULL, FALSE);
					blue = GetDlgItemInt(hDlg, ID_BLUE, NULL, FALSE);
					g_clrPoint = RGB(red, green, blue);
				case IDCANCEL:
					EndDialog(hDlg, wParam);
			}
			break;
	}

	return FALSE;
}

LRESULT CALLBACK MainWindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{	
	WCHAR text[80];
	HDC hdc;
	POINTS pt;
	PAINTSTRUCT ps;
	static HDC hdcOffScr;
	static HBITMAP hbmOffScr;

	switch(uMsg)
	{
		case WM_CREATE:
			hdc = GetDC(hWnd);
			hdcOffScr = CreateCompatibleDC(hdc);
			hbmOffScr = CreateCompatibleBitmap(hdc, 400, 400);
			SelectObject(hdcOffScr, hbmOffScr);
			ReleaseDC(hWnd, hdc);
			PatBlt(hdcOffScr, 0, 0, 400, 400, PATCOPY);
			break;

		case WM_COMMAND:
			switch(LOWORD(wParam))
			{
				case ID_RED:
					g_clrPoint = RGB(255, 0, 0);
					break;

				case ID_GREEN:
					g_clrPoint = RGB(0, 255, 0);
					break;

				case ID_BLUE:
					g_clrPoint = RGB(0, 0, 255);
					break;

				case ID_CLEAR:
					PatBlt(hdcOffScr, 0, 0, 400, 400, PATCOPY);
					InvalidateRect(hWnd, NULL, TRUE);
					break;

				case ID_CUST:
					DialogBox(GetModuleHandle(NULL), MAKEINTRESOURCE(IDD_CUST_DIALOG), hWnd, CustDialogProc);
					break;
			}
			break;

		case WM_MOUSEMOVE:
			pt = MAKEPOINTS(lParam);
			wsprintf(text, L"WinTest - (%d, %d)", pt.x, pt.y);
			SetWindowText(hWnd, text);
			if(lParam & MK_LBUTTON)
			{
				hdc = GetDC(hWnd);
				SetPixel(hdc, pt.x, pt.y, g_clrPoint);
				SetPixel(hdc, 400 - pt.x, pt.y, g_clrPoint);
				SetPixel(hdcOffScr, pt.x, pt.y, g_clrPoint);
				SetPixel(hdcOffScr, 400 - pt.x, pt.y, g_clrPoint);
				ReleaseDC(hWnd, hdc);
			}
			break;

		case WM_PAINT:
			BeginPaint(hWnd, &ps);
			BitBlt(ps.hdc, 0, 0, 400, 400, hdcOffScr, 0, 0, SRCCOPY);
			EndPaint(hWnd, &ps);
			break;

		case WM_CLOSE:
			LoadString(GetModuleHandle(NULL), IDS_PROMPT, text, 80);
			if(MessageBox(hWnd, text, L"WinTest", MB_YESNO | MB_ICONQUESTION) == IDYES)
			{
				if(OpenClipboard(hWnd))
				{
					EmptyClipboard();
					SetClipboardData(CF_BITMAP, hbmOffScr);
					CloseClipboard();
				}
			}
			DeleteDC(hdcOffScr);
			DeleteObject(hbmOffScr);
			break;
	
		case WM_DESTROY:
			PostQuitMessage(0);
			break;
	}

	return DefWindowProc(hWnd, uMsg, wParam, lParam);		
}


int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPWSTR lpCmdLine, int nCmdShow)
{
	HWND hWnd;
	MSG msg;
	WNDCLASSEX wc = {sizeof(WNDCLASSEX)};
	HMENU hMenu = LoadMenu(hInstance, MAKEINTRESOURCE(IDM_APP_MENU));
	HACCEL hAccel = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDR_APP_ACCEL));
	
	wc.lpszClassName = L"MainWindowClass";
	wc.lpfnWndProc = MainWindowProc;
	wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_APP_ICON));
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH) (COLOR_WINDOW + 1);
	
	RegisterClassEx(&wc);
	hWnd = CreateWindowEx(0, L"MainWindowClass", L"WinTest", WS_OVERLAPPED | WS_SYSMENU | WS_MINIMIZEBOX, 100, 100, 400, 400, NULL, hMenu, hInstance, NULL);
	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	while(GetMessage(&msg, NULL, 0, 0) > 0)
	{
		if(!TranslateAccelerator(hWnd, hAccel, &msg))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}
	
	return msg.wParam;
}











