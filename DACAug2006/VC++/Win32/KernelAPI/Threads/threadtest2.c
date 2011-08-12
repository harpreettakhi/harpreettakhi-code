#include <stdio.h>
#define UNICODE
#include <windows.h>

DWORD WINAPI ThreadProc(LPVOID lpParam)
{
	int i;
	int n = (int) lpParam;

	for(i = 1; i <= 1000 * (n + 1); i++)
		wprintf(L"Hello %d from thread with ID %d\n", i, GetCurrentThreadId());
	return 0;
}

int wmain()
{
	int i;
	HANDLE hThreads[4];
	
	for(i = 0; i < 4; i++)
		hThreads[i] = CreateThread(NULL, 0, ThreadProc, (LPVOID) i, 0, NULL);
	for(i = 1; i < 2001; i++)
		wprintf(L"Welcome %d from thread with ID %d\n", i, GetCurrentThreadId());
	WaitForMultipleObjects(4, hThreads, TRUE, INFINITE);
	for(i = 0; i < 4; i++)
		CloseHandle(hThreads[i]);
}








