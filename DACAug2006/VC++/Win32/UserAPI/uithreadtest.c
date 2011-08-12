#include <stdio.h>
#define UNICODE
#include <windows.h>

int wmain()
{
	MSG msg;
	
	wprintf(L"UI Thread ID = %d\n", GetCurrentThreadId());
	while(GetMessage(&msg, NULL, 0, 0) > 0)
	{
		if(msg.message == WM_APP + 1)
			wprintf(L"Received '%c' from Thread<%d>\n", msg.wParam, msg.lParam);
	}
}





