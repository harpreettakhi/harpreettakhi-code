#define UNICODE
#include <windows.h>

#define WM_ERRKEY WM_USER+50

WNDPROC g_lpfnEditProc;

LRESULT CALLBACK NewEditProc(HWND hEdt, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if(uMsg == WM_CHAR && wParam >= '0' && wParam <= '9')
	{
		HWND hParent = (HWND) GetWindowLong(hEdt, GWL_HWNDPARENT);
		return SendMessage(hParent, WM_ERRKEY, wParam, lParam);
	}
	return CallWindowProc(g_lpfnEditProc, hEdt, uMsg, wParam, lParam);
}

LRESULT CALLBACK MainWindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{	
	static HWND hEdit;

	switch(uMsg)
	{
		case WM_CREATE:
			hEdit = CreateWindow(L"EDIT", L"", WS_CHILD | WS_VISIBLE | WS_BORDER, 10, 10, 370, 20, hWnd, NULL, NULL, NULL);
			g_lpfnEditProc = (WNDPROC) SetWindowLong(hEdit, GWL_WNDPROC, (LONG) NewEditProc);
			break;

		case WM_ERRKEY:
			MessageBox(hWnd, L"Bad Key Pressed", L"WinTest", MB_ICONEXCLAMATION);
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











