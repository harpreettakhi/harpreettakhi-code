#define _WIN32_WINNT 0x0400
#include "trader.h"
#include <iostream>
#include <iomanip>

using namespace std;

int wmain(int argc, WCHAR** argv)
{
	// CoInitialize(NULL);
	CoInitializeEx(NULL, COINIT_MULTITHREADED);
	
	IClassFactory* pCF = NULL;
	IInventory* pInv = NULL;
	HRESULT hr;
	
	if(argc > 1)
	{
		COSERVERINFO server = {0, argv[1], NULL, 0};
		hr = CoGetClassObject(CLSID_Trader, CLSCTX_REMOTE_SERVER, &server, IID_IClassFactory, reinterpret_cast<LPVOID*>(&pCF));
	}
	else
		hr = CoGetClassObject(CLSID_Trader, CLSCTX_LOCAL_SERVER, NULL, IID_IClassFactory, reinterpret_cast<LPVOID*>(&pCF));	

	if(SUCCEEDED(hr))
	{
		hr = pCF->CreateInstance(NULL, IID_IInventory, reinterpret_cast<LPVOID*>(&pInv));
		pCF->Release();
	}
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







