#include <stdio.h>
#define UNICODE
#include <windows.h>

int wmain()
{
	HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
	DWORD dwResult;

	wprintf(L"Press any key to continue...\n");
	// dwResult = WaitForSingleObject(hIn, 5000);
	dwResult = WaitForMultipleObjects(1, &hIn, TRUE, 5000);
	if(dwResult == WAIT_TIMEOUT)
		wprintf(L"Timeout!\n");
}








