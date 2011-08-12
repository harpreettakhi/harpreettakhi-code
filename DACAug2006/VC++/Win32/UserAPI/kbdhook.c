#define UNICODE
#include <windows.h>

#pragma comment(lib, "kernel32")
#pragma comment(lib, "user32")
#pragma comment(linker, "/entry:DllMain")

#pragma data_seg(".kbdhk")
HHOOK g_hkKeyboard = NULL;
LONG g_nKeyCount = 0;
#pragma data_seg()

HINSTANCE g_hInstance;

LRESULT CALLBACK KeyboardHookProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	if(nCode == HC_ACTION && lParam > 0)
	{
		g_nKeyCount++;
		MessageBeep(0);
	}
	return CallNextHookEx(g_hkKeyboard, nCode, wParam, lParam);
}

BOOL WINAPI InstallHook(DWORD dwThreadId)
{
	if(g_hkKeyboard == NULL)
	{
		g_nKeyCount = 0;
		g_hkKeyboard = SetWindowsHookEx(WH_KEYBOARD, KeyboardHookProc, g_hInstance, dwThreadId);
	}
	return g_hkKeyboard != NULL;
}

VOID WINAPI UninstallHook()
{
	if(g_hkKeyboard)
	{
		UnhookWindowsHookEx(g_hkKeyboard);
		g_hkKeyboard = NULL;
	}
}

LONG WINAPI GetKeyCount()
{
	return g_hkKeyboard ? g_nKeyCount : -1;
}

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	if(dwReason == DLL_PROCESS_ATTACH)
	{
		g_hInstance = hInstance;
		DisableThreadLibraryCalls(hInstance);
	}
	return TRUE;
}












