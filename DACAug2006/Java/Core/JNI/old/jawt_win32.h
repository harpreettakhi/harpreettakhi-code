#ifndef JAWT_WIN32_H
#define JAWT_WIN32_H

#include <jni.h>
#include <jawt_md.h>
#define UNICODE
#include <windows.h>

typedef struct{
	JAWT awt;
	JAWT_DrawingSurface* ds;
	JAWT_DrawingSurfaceInfo* dsi;
	HWND hwnd;
	HDC hdc;
}AWTWin32Info;

void GetAWTWin32Info(JNIEnv* env, jobject component, AWTWin32Info* wi){
	JAWT_Win32DrawingSurfaceInfo* wdsi;
	
	wi->awt.version = JAWT_VERSION_1_3;
	JAWT_GetAWT(env, &wi->awt);
	wi->ds = wi->awt.GetDrawingSurface(env, component);
	wi->ds->Lock(wi->ds);
	wi->dsi = wi->ds->GetDrawingSurfaceInfo(wi->ds);
	wdsi = (JAWT_Win32DrawingSurfaceInfo*) wi->dsi->platformInfo;
	wi->hwnd = wdsi->hwnd;
	wi->hdc = wdsi->hdc;
}

void FreeAWTWin32Info(AWTWin32Info* wi)
{
	wi->ds->FreeDrawingSurfaceInfo(wi->dsi);
	wi->ds->Unlock(wi->ds);
	wi->awt.FreeDrawingSurface(wi->ds);
}

#endif

