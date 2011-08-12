#include <stdio.h>
#define UNICODE
#include <windows.h>

int wmain()
{
	int i;
	STARTUPINFO si = {sizeof(STARTUPINFO)};
	PROCESS_INFORMATION pi;

	CreateProcess(NULL, L"notepad", NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
	for(i = 9; i >= 0; i--)
	{
		Sleep(1000);
		wprintf(L"%d\r", i);	
	}	
	if(WaitForSingleObject(pi.hProcess, 10000) == WAIT_TIMEOUT)
	{
		TerminateProcess(pi.hProcess, 0);
		wprintf(L"Child process terminated\n");
	}
	else	
		wprintf(L"Child process exited\n");
	CloseHandle(pi.hThread);
	CloseHandle(pi.hProcess);
}









