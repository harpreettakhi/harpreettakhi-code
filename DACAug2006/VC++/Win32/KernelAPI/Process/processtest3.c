#include <stdio.h>
#define UNICODE
#include <windows.h>

HANDLE g_hEvent;

VOID ChildProc()
{
	int i;
	for(i = 1; i <= 2001; i++)
		wprintf(L"Hello %d from child\n");
	WaitForSingleObject(g_hEvent, INFINITE);
	wprintf(L"******************* G O O D B Y E *******************\n");
}

VOID ParentProc()
{
	int i;
	for(i = 1; i <= 3001; i++)
		wprintf(L"Welcome %d from parent\n");	
}

int wmain(int argc, wchar_t** argv)
{
	if(!lstrcmp(argv[0], L"child"))
	{
		ChildProc();
		CloseHandle(g_hEvent);
	}
	else
	{
		STARTUPINFO si = {sizeof(STARTUPINFO)};
		PROCESS_INFORMATION pi;
		g_hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
		SetHandleInformation(g_hEvent, HANDLE_FLAG_INHERIT, TRUE);
		CreateProcess(L"processtest3.exe", L"child", NULL, NULL, TRUE, CREATE_SUSPENDED, NULL, NULL, &si, &pi);
		WriteProcessMemory(pi.hProcess, &g_hEvent, &g_hEvent, sizeof(HANDLE), NULL);
		ResumeThread(pi.hThread);
		ParentProc();
		SetEvent(g_hEvent);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
		CloseHandle(g_hEvent);
	}
}








