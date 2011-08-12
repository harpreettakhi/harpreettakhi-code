#include <stdio.h>
#define UNICODE
#include <windows.h>

int wmain()
{
	HANDLE hMap, hEvent;
	LPVOID lpData;

	hMap = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, 4096, L"shared.mem");
	hEvent = CreateEvent(NULL, FALSE, FALSE, L"shared.evt");
	lpData = MapViewOfFile(hMap, FILE_MAP_READ, 0, 0, 0);
	
	for(;;)
	{
		WaitForSingleObject(hEvent, INFINITE);
		if(lstrcmp(lpData, L"quit") == 0) break;
		wprintf(L"%s\n", lpData);
	}
	
	UnmapViewOfFile(lpData);
	CloseHandle(hEvent);
	CloseHandle(hMap);
}








