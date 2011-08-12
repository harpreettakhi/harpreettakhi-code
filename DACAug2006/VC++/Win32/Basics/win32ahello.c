#include <string.h>
#include <windows.h>

void Write(const char* text, int size)
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	
	GetConsoleScreenBufferInfo(hOut, &csbi);
	SetConsoleTextAttribute(hOut, csbi.wAttributes | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	WriteConsoleA(hOut, text, size, &size, NULL);
	SetConsoleTextAttribute(hOut, csbi.wAttributes);
}

int main(int argc, char** argv)
{
	char msg[40] = "Hello ";

	if(argc < 2)
		strcat(msg, "Windows");
	else
		strncat(msg, argv[1], 30);
	strcat(msg, "!\r\n");
	Write(msg, strlen(msg));
}







