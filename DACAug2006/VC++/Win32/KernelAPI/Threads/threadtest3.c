#include <stdio.h>
#define UNICODE
#include <windows.h>

typedef struct{
	LPWSTR lpszGreet;
	DWORD nCount;
}THREAD_DATA;

DWORD WINAPI ThreadProc(LPVOID lpParam)
{
	int i;
	THREAD_DATA* pData = (THREAD_DATA*) lpParam;
	for(i = 1; i <= pData->nCount; i++)
		wprintf(L"%s %d from thread with ID %d\n", pData->lpszGreet, i, GetCurrentThreadId());
	return 0;
}

THREAD_DATA td = {L"Hello!", 4000};

int wmain()
{
	int i;
	HANDLE hThread = CreateThread(NULL, 0, ThreadProc, &td, 0, NULL);
	for(i = 1; i < 2001; i++)
		wprintf(L"Welcome %d from thread with ID %d\n", i, GetCurrentThreadId());
	WaitForSingleObject(hThread, INFINITE);
	CloseHandle(hThread);
}








