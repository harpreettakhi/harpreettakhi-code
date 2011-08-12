#include <stdio.h>
#define UNICODE
#define _WIN32_WINNT 0x0400
#include <windows.h>

HANDLE g_hEvent;

DWORD WINAPI ThreadProc(LPVOID lpParam)
{	
	DWORD dwResult;
	wprintf(L"Worker thread<%d> ready...\n", GetCurrentThreadId());
	do
	{
		dwResult = WaitForSingleObjectEx(g_hEvent, INFINITE, TRUE);
	}while(dwResult == WAIT_IO_COMPLETION);
	wprintf(L"Worker thread<%d> exiting\n", GetCurrentThreadId());
	return 0;
}

VOID CALLBACK PrintJob(DWORD dwParam)
{
	LPWSTR lpszText = (LPWSTR) dwParam;
	wprintf(L"%s from thread<%d>\n", lpszText, GetCurrentThreadId());
}

int wmain()
{
	HANDLE hThread;
	DWORD dwThId;
	
	g_hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
	hThread = CreateThread(NULL, 0, ThreadProc, NULL, CREATE_SUSPENDED, &dwThId);
	wprintf(L"Starting worker thread <%d>\n", dwThId);
	ResumeThread(hThread);
	Sleep(1);
	QueueUserAPC(PrintJob, hThread, (DWORD) L"Welcome User");
	QueueUserAPC(PrintJob, hThread, (DWORD) L"Goodbye User");
	SetEvent(g_hEvent);
	WaitForSingleObject(hThread, INFINITE);
	CloseHandle(hThread);
	CloseHandle(g_hEvent);
}










