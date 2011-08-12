#include "jawt_win32.h"

extern "C" JNIEXPORT void JNICALL Java_AWTChildCompTest_flash(JNIEnv* env, jobject frame)
{
	AWTWin32Info wi;
	GetAWTWin32Info(env, frame, &wi);
	FlashWindow(wi.hwnd, TRUE);
	FreeAWTWin32Info(&wi);
}
