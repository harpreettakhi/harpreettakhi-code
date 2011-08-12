#define _WIN32_WINNT 0x0400
#include "trader.h"
#include <iostream>
#include <iomanip>

using namespace std;

int wmain()
{
	// CoInitialize(NULL);
	CoInitializeEx(NULL, COINIT_MULTITHREADED);

	IInventory* pInv = NULL;
	HRESULT hr = CoCreateInstance(CLSID_Trader, NULL, CLSCTX_INPROC_SERVER, IID_IInventory, reinterpret_cast<LPVOID*>(&pInv));
	if(SUCCEEDED(hr))
	{
		int qty;
		double bal;

		wcout << L"Number of items to purchase : ";
		wcin >> qty;
		hr = pInv->Buy(qty, 100);
		if(FAILED(hr))
			wcout << L"Buy operation failed with error code of " << hex << hr << endl;
		else
		{
			IAccount* pAcc = NULL;
			pInv->QueryInterface(IID_IAccount, reinterpret_cast<LPVOID*>(&pAcc));
			pInv->GetStock(&qty);
			pAcc->GetBalance(&bal);
			wcout << L"Current stock : " << qty << endl;
			wcout << L"Current balance : " << bal << endl;
			pAcc->Release();
		}
		pInv->Release();
	}
	else
		wcout << L"Cannot create COM Object" << endl;

	CoUninitialize();
}







