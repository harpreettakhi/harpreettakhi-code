#include <stdio.h>
#define UNICODE
#include <windows.h>

int  wmain(int argc, wchar_t** argv)
{
	HANDLE hgMem;
	DWORD cbSize;
	LPBYTE lpData;

	if(argc < 2)
		return wprintf(L"Usage : %s text\n", argv[0]);
	
	cbSize = 2 * (lstrlen(argv[1]) + 1);
	hgMem = GlobalAlloc(GMEM_MOVEABLE, cbSize);
	lpData = GlobalLock(hgMem);
	CopyMemory(lpData, argv[1], cbSize);
	GlobalUnlock(hgMem);
	OpenClipboard(NULL);
	SetClipboardData(CF_UNICODETEXT, hgMem);
	CloseClipboard();
	GlobalFree(hgMem);
}







