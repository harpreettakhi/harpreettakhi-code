#include <wchar.h>
#include <windows.h>

void Write(const wchar_t* text, int size)
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	
	GetConsoleScreenBufferInfo(hOut, &csbi);
	SetConsoleTextAttribute(hOut, csbi.wAttributes | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	WriteConsoleW(hOut, text, size, &size, NULL);
	SetConsoleTextAttribute(hOut, csbi.wAttributes);
}

int wmain(int argc, wchar_t** argv)
{
	wchar_t msg[40] = L"Hello ";

	if(argc < 2)
		wcscat(msg, L"Windows");
	else
		wcsncat(msg, argv[1], 30);
	wcscat(msg, L"!\r\n");
	Write(msg, wcslen(msg));
}







