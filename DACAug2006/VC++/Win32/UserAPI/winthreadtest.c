#define UNICODE
#include <windows.h>

HANDLE g_hThread;
HWND hWnd;

DWORD WINAPI ThreadProc(LPVOID lpParam)
{
	int i;
	WCHAR caption[40];

	for(i = 500; i > 0; i--)
	{
		wsprintf(caption, L"WinTest : %d", i);
		PostMessage(hWnd, WM_USER + 1, i, (LPARAM) caption);
		Sleep(100);
	}
	SendMessage(hWnd, WM_USER + 1, 0, 0);
	return 0;
}

LRESULT CALLBACK MainWindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{	
	PAINTSTRUCT ps;
	WCHAR text[40];
	SYSTEMTIME now;
	int i;
	
	switch(uMsg)
	{
		case WM_CREATE:
			SetTimer(hWnd, 101, 1000, NULL);
			break;

		case WM_PAINT:
			BeginPaint(hWnd, &ps);
			GetLocalTime(&now);
			wsprintf(text, L"%02d:%02d:%02d", now.wHour, now.wMinute, now.wSecond);
			Rectangle(ps.hdc, 30, 30, 110, 65);
			TextOut(ps.hdc, 40, 40, text, lstrlen(text));
			EndPaint(hWnd, &ps);
			break;

		case WM_TIMER:
			InvalidateRect(hWnd, NULL, TRUE);
			break;

		case WM_LBUTTONDOWN:
			if(g_hThread == NULL)
				g_hThread = CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
			break;

		case WM_USER+1:
			if(wParam)
				SetWindowText(hWnd, (LPWSTR) lParam);
			else
			{
				SetWindowText(hWnd, L"WinTest");
				CloseHandle(g_hThread);
				g_hThread = NULL;
			}
			break;
		
		case WM_DESTROY:
			PostQuitMessage(0);
			break;
	}

	return DefWindowProc(hWnd, uMsg, wParam, lParam);		
}


int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPWSTR lpCmdLine, int nCmdShow)
{
	MSG msg;
	WNDCLASSEX wc = {sizeof(WNDCLASSEX)};
	wc.lpszClassName = L"MainWindowClass";
	wc.lpfnWndProc = MainWindowProc;
	wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH) (COLOR_WINDOW + 1);

	RegisterClassEx(&wc);
	hWnd = CreateWindowEx(0, L"MainWindowClass", L"WinTest", WS_OVERLAPPEDWINDOW, 100, 100, 400, 400, NULL, NULL, hInstance, NULL);
	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	while(GetMessage(&msg, NULL, 0, 0) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	
	return msg.wParam;
}











