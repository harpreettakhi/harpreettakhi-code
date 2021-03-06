#include <stdio.h>
#define UNICODE
#include <windows.h>

int wmain(int argc, wchar_t** argv)
{
	HANDLE hFile, hHeap;
	DWORD cbSize, iByte;
	LPBYTE lpData;

	if(argc < 2)
		return wprintf(L"Usage : %s file\n", argv[0]);
	
	hFile = CreateFile(argv[1], GENERIC_READ, 0, NULL, OPEN_EXISTING, 0, NULL);
	if(hFile == INVALID_HANDLE_VALUE)
		return wprintf(L"Cannot open %s\n", argv[1]);
	cbSize = GetFileSize(hFile, NULL);
	
	hHeap = HeapCreate(HEAP_NO_SERIALIZE, 4096, 0);
	// hHeap = GetProcessHeap();
	lpData = HeapAlloc(hHeap, HEAP_ZERO_MEMORY, cbSize);	
	ReadFile(hFile, lpData, cbSize, &cbSize, NULL);
	CloseHandle(hFile);
	for(iByte = 0; iByte < cbSize; iByte++)
		lpData[iByte] ^= '#';
	hFile = CreateFile(argv[1], GENERIC_WRITE, 0, NULL, TRUNCATE_EXISTING, 0, NULL);
	WriteFile(hFile, lpData, cbSize, &cbSize, NULL);
	CloseHandle(hFile);
	HeapFree(hHeap, 0, lpData);
	HeapDestroy(hHeap);
}









