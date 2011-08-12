#include <stdio.h>
#define UNICODE
#include <windows.h>

HANDLE g_hEvent;

DWORD WINAPI ThreadProc(LPVOID lpParam)
{
	int i;

	for(i = 1; i < 2001; i++)
		wprintf(L"Hello %d from thread with ID %d\n", i, GetCurrentThreadId());
	WaitForSingleObject(g_hEvent, INFINITE);
	wprintf(L"*********************** G O O D B Y E ***********************\n");
	return 0;
}

int wmain()
{
	int i;
	HANDLE hThread;

	g_hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
	hThread = CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
	for(i = 1; i < 3001; i++)
		wprintf(L"Welcome %d from thread with ID %d\n", i, GetCurrentThreadId());
	SetEvent(g_hEvent);
	WaitForSingleObject(hThread, INFINITE);
	CloseHandle(hThread);
}








