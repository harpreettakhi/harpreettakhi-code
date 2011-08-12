#include "power_Console.h"
#include "power_ConsoleSize.h"
#define UNICODE
#include <windows.h>

JNIEXPORT jchar JNICALL Java_power_Console_readNoEcho(JNIEnv*, jclass)
{
	HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
	DWORD dwMode, dwCount;
	jchar k;

	GetConsoleMode(hIn, &dwMode);
	SetConsoleMode(hIn, ENABLE_PROCESSED_INPUT);
	ReadConsole(hIn, &k, 1, &dwCount, NULL);
	SetConsoleMode(hIn, dwMode);

	return k;
}

JNIEXPORT void JNICALL Java_power_Console_write(JNIEnv* env, jclass, jstring str, jint col)
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	jboolean iscopy;

	GetConsoleScreenBufferInfo(hOut, &csbi);
	SetConsoleTextAttribute(hOut, csbi.wAttributes | col);
	const jchar* text = env->GetStringChars(str, &iscopy);
	WriteConsole(hOut, text, env->GetStringLength(str), NULL, NULL);
	env->ReleaseStringChars(str, text);
	SetConsoleTextAttribute(hOut, csbi.wAttributes);
}

JNIEXPORT void JNICALL Java_power_ConsoleSize_initialize(JNIEnv* env, jobject _this)
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(hOut, &csbi);
	
	jclass cls = env->GetObjectClass(_this);
	jfieldID idWidth = env->GetFieldID(cls, "width", "S");
	env->SetShortField(_this, idWidth, csbi.dwSize.X);
	jfieldID idHeight = env->GetFieldID(cls, "height", "S");
	env->SetShortField(_this, idHeight, csbi.dwSize.Y);
	
}


