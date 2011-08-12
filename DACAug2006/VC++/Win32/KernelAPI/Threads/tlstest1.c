#include <stdio.h>
#define UNICODE
#include <windows.h>

DWORD g_iSlot;

VOID SetCode(DWORD dwValue)
{
	TlsSetValue(g_iSlot, (LPVOID) dwValue);
}

DWORD GetCode()
{
	return (DWORD) TlsGetValue(g_iSlot); 
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
	g_iSlot = TlsAlloc();
	hThread = CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
	SetCode(8888);
	LoopPrintCode();
	WaitForSingleObject(hThread, INFINITE);
	CloseHandle(hThread);
	TlsFree(g_iSlot);
}












