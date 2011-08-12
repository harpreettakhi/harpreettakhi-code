#define UNICODE
#include <windows.h>

VOID DoMessages()
{
	MSG msg;
	
	if(PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
	{
		if(msg.message == WM_QUIT) ExitProcess(0);
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
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
			for(i = 500; i > 0; i--)
			{
				wsprintf(text, L"WinTest : %d", i);
				SetWindowText(hWnd, text);
				//DoMessages();
				Sleep(100);
			}
			SetWindowText(hWnd, L"WinTest");
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











