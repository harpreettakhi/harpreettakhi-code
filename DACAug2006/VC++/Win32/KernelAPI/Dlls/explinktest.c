#include <stdio.h>
#include <stdlib.h>
#define UNICODE
#include <windows.h>

typedef int (__stdcall *GCD)(int, int);

int wmain(int argc, wchar_t** argv)
{
	int m, n;
	HINSTANCE hDll;
	GCD lpfnGCD;
	
	if(argc < 4)
		return wprintf(L"Usage : %s num1 num2 dll\n", argv[0]);

	m = _wtoi(argv[1]);
	n = _wtoi(argv[2]);

	hDll = LoadLibrary(argv[3]);
	if(!hDll)
		return wprintf(L"Cannot load %s\n", argv[3]);
	lpfnGCD = (GCD) GetProcAddress(hDll, "GreatestDivisor");
	if(lpfnGCD)	
		wprintf(L"G.C.D = %d\n", lpfnGCD(m, n));
	FreeLibrary(hDll);
}








