#include <stdio.h>
#include <malloc.h>
#define UNICODE
#include <windows.h>

typedef struct{
	int id;
	int balance;
	HANDLE hMutex;
}JointAccount;

int count;

JointAccount* OpenAccount(int amount)
{
	JointAccount* acc = (JointAccount*) malloc(sizeof(JointAccount));
	acc->id = 1001 + count++;
	acc->balance = amount;
	acc->hMutex = CreateMutex(NULL, FALSE, NULL);
	return acc;
}

int WithdrawAmount(JointAccount* acc, int amount)
{
	WaitForSingleObject(acc->hMutex, INFINITE);
	__try
	{
		if(acc->balance >= amount)
		{
			Sleep(amount / 100);
			acc->balance -= amount;
			return 1;
		}
	}
	__finally
	{
		ReleaseMutex(acc->hMutex);
	}
	return 0;	
}

void CloseAccount(JointAccount* acc)
{
	CloseHandle(acc->hMutex);
	free(acc);	
}

JointAccount* jacc;

DWORD WINAPI ThreadProc(LPVOID lpParam)
{
	wprintf(L"Jill withdraws 4000\n");
	if(!WithdrawAmount(jacc, 4000))
		wprintf(L"Jill's withdrawl failed\n");
	return 0;
}

int wmain()
{
	HANDLE hThread;
	jacc = OpenAccount(5000);
	wprintf(L"Joint Account opened with ID : %d\n", jacc->id);
	wprintf(L"Initial Balance = %d\n", jacc->balance);
	hThread = CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
	wprintf(L"Jack withdraws 3000\n");
	if(!WithdrawAmount(jacc, 3000))
		wprintf(L"Jack's withdrawl failed\n");
	WaitForSingleObject(hThread, INFINITE);
	wprintf(L"Final Balance = %d\n", jacc->balance);
	CloseHandle(hThread);
	CloseAccount(jacc);
}










