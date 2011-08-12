#define UNICODE
#include <windows.h>

#pragma comment(lib, "kernel32")
#pragma comment(linker, "/entry:DllMain")

#ifdef _TESTING
#define ECHO(X) Print(X)
#else
#define ECHO(X)
#endif

VOID Print(LPCWSTR lpszText)
{
	WriteConsole(GetStdHandle(STD_ERROR_HANDLE), lpszText, lstrlen(lpszText), NULL, NULL);
}

__declspec(dllexport) int __stdcall GreatestDivisor(int first, int second)
{
	if(second == 0) return first;
	return GreatestDivisor(second, first % second);	
}

__declspec(dllexport) int __stdcall LeastMultiple(int first, int second)
{
	int gcd = GreatestDivisor(first, second);
	if(gcd == 0) return 0;
	return first * second / gcd;
}

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	switch(dwReason)
	{
		case DLL_PROCESS_ATTACH:
			DisableThreadLibraryCalls(hInstance);
			ECHO(L"-- euclid.dll attached to a process\n");
			break;

		case DLL_THREAD_ATTACH:
			ECHO(L"-- euclid.dll attached to a thread\n");
			break;

		case DLL_THREAD_DETACH:
			ECHO(L"-- euclid.dll detached from a thread\n");
			break;

		case DLL_PROCESS_DETACH:
			ECHO(L"-- euclid.dll detached from a process\n");
			break;
	}
	return TRUE;
}









