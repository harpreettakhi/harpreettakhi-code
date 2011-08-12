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
	static HWND hStc;	

	switch(uMsg)
	{
		case WM_CREATE:
			hStc = CreateWindow(L"STATIC", L"", WS_CHILD | WS_VISIBLE | WS_BORDER, 5, 5, 70, 20, hWnd, NULL, NULL, NULL);
			CreateWindow(L"BUTTON", L"Red", WS_CHILD | WS_VISIBLE, 85, 5, 60, 20, hWnd, (HMENU) ID_RED, NULL, NULL);
			CreateWindow(L"BUTTON", L"Green", WS_CHILD | WS_VISIBLE, 150, 5, 60, 20, hWnd, (HMENU) ID_GREEN, NULL, NULL);
			CreateWindow(L"BUTTON", L"Blue", WS_CHILD | WS_VISIBLE, 215, 5, 60, 20, hWnd, (HMENU) ID_BLUE, NULL, NULL);
			CreateWindow(L"BUTTON", L"Clear", WS_CHILD | WS_VISIBLE, 285, 5, 60, 20, hWnd, (HMENU) ID_CLEAR, NULL, NULL);
			hdc = GetDC(hWnd);
			hdcOffScr = CreateCompatibleDC(hdc);
			hbmOffScr = CreateCompatibleBitmap(hdc, 400, 400);
			SelectObject(hdcOffScr, hbmOffScr);
			ReleaseDC(hWnd, hdc);
			PatBlt(hdcOffScr, 0, 0, 400, 400, PATCOPY);
			break;

		case WM_COMMAND:
			switch(wParam)
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
			wsprintf(text, L"(%d, %d)", pt.x, pt.y);
			SetWindowText(hStc, text);
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
	wc.lpszClassName = L"MainWindowClass";
	wc.lpfnWndProc = MainWindowProc;
	wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH) (COLOR_WINDOW + 1);

	RegisterClassEx(&wc);
	hWnd = CreateWindowEx(0, L"MainWindowClass", L"WinTest", WS_OVERLAPPED | WS_SYSMENU | WS_MINIMIZEBOX, 100, 100, 400, 400, NULL, NULL, hInstance, NULL);
	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	while(GetMessage(&msg, NULL, 0, 0) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	
	return msg.wParam;
}











