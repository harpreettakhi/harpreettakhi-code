#include "NativeConsole.h"
#define UNICODE
#include <windows.h>

JNIEXPORT void JNICALL Java_NativeConsole_print(JNIEnv* env, jclass cls, jstring str, jint col)
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hOut, &csbi);
	SetConsoleTextAttribute(hOut, col | csbi.wAttributes);
	const jchar* text = env->GetStringChars(str, NULL);
	WriteConsole(hOut, text, env->GetStringLength(str), NULL, NULL);
	env->ReleaseStringChars(str, text);		
	SetConsoleTextAttribute(hOut, csbi.wAttributes);
}







