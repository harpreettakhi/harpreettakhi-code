#include <stdio.h>
#define UNICODE
#include <windows.h>

DWORD WINAPI ThreadProc(LPVOID lpParam)
{
	int i;

	for(i = 1; i < 3001; i++)
		wprintf(L"Hello %d from thread with ID %d\n", i, GetCurrentThreadId());
	return 0;
}

int wmain()
{
	int i;
	HANDLE hThread = CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
	for(i = 1; i < 2001; i++)
		wprintf(L"Welcome %d from thread with ID %d\n", i, GetCurrentThreadId());
	WaitForSingleObject(hThread, INFINITE);
	CloseHandle(hThread);
}








