#define UNICODE
#include <windows.h>

__declspec(dllimport) BOOL WINAPI InstallHook(DWORD);
__declspec(dllimport) VOID WINAPI UninstallHook();
__declspec(dllimport) LONG WINAPI GetKeyCount();

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPWSTR lpCmdLine, int nCmdShow)
{
	WCHAR text[80];
	DWORD dwThId = 0;

	if(lstrlen(lpCmdLine))
	{
		HWND hWnd = FindWindow(NULL, lpCmdLine);
		if(hWnd == NULL)
			return MessageBox(NULL, L"No such window", L"KBDHookMgr", MB_ICONERROR);
		dwThId = GetWindowThreadProcessId(hWnd, NULL);		
	}

	if(!InstallHook(dwThId))
		return MessageBox(NULL, L"KBDHook installation failed", L"KBDHookMgr", MB_ICONERROR);

	MessageBox(NULL, L"KBDHook installed, press OK to remove.", L"KBDHookMgr", MB_ICONEXCLAMATION);
	wsprintf(text, L"Number of keys pressed : %d", GetKeyCount());
	UninstallHook();
	return MessageBox(NULL, text, L"KBDHookMgr", MB_ICONINFORMATION);	
}












