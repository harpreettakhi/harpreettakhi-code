#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define UNICODE
#include <windows.h>

#pragma comment(lib, "user32")

int wmain(int argc, wchar_t** argv)
{
	DWORD dwUIThId;
	CHAR c;

	if(argc < 2)
		return wprintf(L"Usage : %s UIThreadID\n", argv[0]);
	
	dwUIThId = _wtoi(argv[1]);
	wprintf(L"Current Thread ID is %d. Posting messages to Thread<%d>\n", GetCurrentThreadId(), dwUIThId);
	while((c = _getch()) != '\r')
	{
		if(c != 26)
			PostThreadMessage(dwUIThId, WM_APP + 1, c, GetCurrentThreadId());
		else
			PostThreadMessage(dwUIThId, WM_QUIT, 0, 0);
	}
}








