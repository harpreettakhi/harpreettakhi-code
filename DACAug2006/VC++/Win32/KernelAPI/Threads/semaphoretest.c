#include <stdio.h>
#define UNICODE
#include <windows.h>

HANDLE g_hSP;

VOID Countdown(int tno)
{
	int i;

	WaitForSingleObject(g_hSP, INFINITE);
	for(i = 1000; i > 0; i--)
		wprintf(L"%d : %d\n", i, tno);
	ReleaseSemaphore(g_hSP, 1, NULL);
}

DWORD WINAPI ThreadProc(LPVOID lpParam)
{
	Countdown((int) lpParam);
	return 0;
}

int wmain()
{
	HANDLE hThreads[5];
	int i;

	g_hSP = CreateSemaphore(NULL, 3, 3, NULL);
	for(i = 0; i < 5; i++)
		hThreads[i] = CreateThread(NULL, 0, ThreadProc, (LPVOID) (i + 1), 0, NULL);
	WaitForMultipleObjects(5, hThreads, TRUE, INFINITE);
	for(i = 0; i < 5; i++)
		CloseHandle(hThreads[i]);
	CloseHandle(g_hSP);
}







