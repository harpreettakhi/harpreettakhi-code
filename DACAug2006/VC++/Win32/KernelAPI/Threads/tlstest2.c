#include <stdio.h>
#define UNICODE
#include <windows.h>

__declspec(thread) DWORD g_dwCode;

VOID SetCode(DWORD dwValue)
{
	g_dwCode = dwValue;
}

DWORD GetCode()
{
	return g_dwCode;
}

VOID LoopPrintCode()
{
	int i;
	for(i = 1; i < 1001; i++)
		wprintf(L"%d : Code of thread<%d> = %d\n", i, GetCurrentThreadId(), GetCode());
}

DWORD WINAPI ThreadProc(LPVOID lpParam)
{
	SetCode(4444);
	LoopPrintCode();
	return 0;
}

int wmain()
{
	HANDLE hThread;
	
	hThread = CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
	SetCode(8888);
	LoopPrintCode();
	WaitForSingleObject(hThread, INFINITE);
	CloseHandle(hThread);
}












