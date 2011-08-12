#include "euclid.h"
#include <stdio.h>
#include <stdlib.h>
#define UNICODE
#include <windows.h>

DWORD WINAPI ThreadProc(LPVOID lpParam)
{
	wprintf(L"Thread<%d> ready\n", GetCurrentThreadId());
	wprintf(L"Thread<%d> exiting\n", GetCurrentThreadId());
	return 0;
}


int wmain(int argc, wchar_t** argv)
{
	int m, n;
	HANDLE hThread;
	
	if(argc < 3)
		return wprintf(L"Usage : %s num1 num2\n", argv[0]);

	hThread = CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);

	m = _wtoi(argv[1]);
	n = _wtoi(argv[2]);
	wprintf(L"G.C.D = %d and L.C.M = %d\n", GreatestDivisor(m, n), LeastMultiple(m, n));
	WaitForSingleObject(hThread, INFINITE);
	CloseHandle(hThread);
}








