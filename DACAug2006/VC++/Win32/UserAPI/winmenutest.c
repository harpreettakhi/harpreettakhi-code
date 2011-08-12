#define UNICODE
#include <windows.h>

#define ID_RED		101
#define ID_GREEN	102
#define ID_BLUE		103
#define ID_CLEAR	104

#pragma comment(lib, "user32")
#pragma comment(lib, "gdi32")

COLORREF g_clrPoint;

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
			if(MessageBox(hWnd, L"Do you want to copy?", L"WinTest", MB_YESNO | MB_ICONQUESTION) == IDYES)
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
	HMENU hMenu = CreateMenu();
	HMENU hPopup = CreatePopupMenu();
	ACCEL accel[] = {
				{FCONTROL | FVIRTKEY, 'R', ID_RED},
				{FCONTROL | FVIRTKEY, 'G', ID_GREEN},
				{FCONTROL | FVIRTKEY, 'B', ID_BLUE},
				{FVIRTKEY, VK_F3, ID_CLEAR}
			};
	HACCEL hAccel = CreateAcceleratorTable(accel, 4);
	
	wc.lpszClassName = L"MainWindowClass";
	wc.lpfnWndProc = MainWindowProc;
	wc.hInstance = hInstance;
	wc.hIcon = LoadImage(NULL, L"face.ico", IMAGE_ICON, 16, 16, LR_LOADFROMFILE);	   // LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH) (COLOR_WINDOW + 1);
	
	AppendMenu(hPopup, MF_STRING, ID_RED, L"&Red\tCtrl+R");
	AppendMenu(hPopup, MF_STRING, ID_GREEN, L"&Green\tCtrl+G");
	AppendMenu(hPopup, MF_STRING, ID_BLUE, L"&Blue\tCtrl+B");
	AppendMenu(hPopup, MF_SEPARATOR, 0, NULL);
	AppendMenu(hPopup, MF_STRING, ID_CLEAR, L"&Clear\tF3");
	AppendMenu(hMenu, MF_STRING | MF_POPUP, (UINT) hPopup, L"&Draw");

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
	
	DestroyAcceleratorTable(hAccel);

	return msg.wParam;
}











