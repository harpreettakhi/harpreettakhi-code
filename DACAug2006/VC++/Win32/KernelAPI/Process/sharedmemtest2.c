#include <stdio.h>
#define UNICODE
#include <windows.h>

int wmain(int argc, wchar_t** argv)
{
	HANDLE hMap, hEvent;
	LPVOID lpData;	
	
	if(argc < 2)
		return wprintf(L"Usage : %s text\n", argv[1]);

	hMap = OpenFileMapping(FILE_MAP_ALL_ACCESS, FALSE, L"shared.mem");
	if(!hMap)
		return wprintf(L"Cannot access shared memory\n");	
	hEvent = OpenEvent(EVENT_ALL_ACCESS, FALSE, L"shared.evt");
	lpData = MapViewOfFile(hMap, FILE_MAP_WRITE, 0, 0, 0);
	
	lstrcpy(lpData, argv[1]);
	SetEvent(hEvent);
	
	UnmapViewOfFile(lpData);
	CloseHandle(hEvent);
	CloseHandle(hMap);
}








