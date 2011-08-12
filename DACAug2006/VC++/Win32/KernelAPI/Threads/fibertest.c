#include <stdio.h>
#define UNICODE
#define _WIN32_WINNT 0x0400
#include <windows.h>

VOID CALLBACK FiberProc(LPVOID lpParam)
{
	int i;
	for(i = 1; i <= 10; i++)
	{
		wprintf(L"Hello %d\n", i);
		Sleep(200);
	}
	SwitchToFiber(lpParam);
	for(i = 10; i > 0; i--)
	{
		wprintf(L"Goodbye %d\n", i);
		Sleep(200);
	}
	SwitchToFiber(lpParam);
}

int wmain()
{
	LPVOID lpFib1 = ConvertThreadToFiber(NULL);
	LPVOID lpFib2 = CreateFiber(0, FiberProc, lpFib1);
	wprintf(L"Hello Phase - BEGIN\n");
	SwitchToFiber(lpFib2);
	wprintf(L"Hello Phase - END\n");
	wprintf(L"Goodbye Phase - BEGIN\n");
	SwitchToFiber(lpFib2);
	wprintf(L"Goodbye Phase - END\n");	
	DeleteFiber(lpFib2);
}





