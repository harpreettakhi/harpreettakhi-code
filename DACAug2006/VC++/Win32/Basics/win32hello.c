#include <tchar.h>
#ifdef _UNICODE
#define UNICODE
#endif
#include <windows.h>

void Write(const TCHAR* text, int size)
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	
	GetConsoleScreenBufferInfo(hOut, &csbi);
	SetConsoleTextAttribute(hOut, csbi.wAttributes | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	WriteConsole(hOut, text, size, &size, NULL);
	SetConsoleTextAttribute(hOut, csbi.wAttributes);
}

int _tmain(int argc, TCHAR** argv)
{
	TCHAR msg[40] = _T("Hello ");

	if(argc < 2)
		_tcscat(msg, _T("Windows"));
	else
		_tcsncat(msg, argv[1], 30);
	_tcscat(msg, _T("!\r\n"));
	Write(msg, _tcslen(msg));
}







