#define UNICODE
#include <windows.h>

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPWSTR lpCmdLine, int nCmdShow)
{
	WCHAR text[80];
	
	wsprintf(text, L"hInstance = %X, lpCmdLine = '%s', nCmdShow = %d", hInstance, lpCmdLine, nCmdShow);	
	return MessageBox(NULL, text, L"WinMainTest", MB_ICONINFORMATION);
}


