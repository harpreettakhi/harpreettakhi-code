#import "trader.dll" no_namespace

#include <iostream>

using namespace std;

int wmain()
{
	CoInitialize(NULL);

	try
	{
		IInventoryPtr pInv(__uuidof(Trader));
		int qty;
		wcout << L"Enter quantity to buy : ";
		wcin >> qty;
		try
		{
			pInv->Buy(qty, 100);   // V-table binding
		}
		catch(_com_error&)
		{
			wcout << L"Buy operation failed" << endl;
		}
		wcout << L"Current stock : " << pInv->GetStock() << endl;
		ITradingInfoPtr pInfo = pInv;
		double amt = pInfo->GetInvestment();	// Early binding
		wcout << L"Current investment : " << amt << endl;
	}
	catch(_com_error&)
	{
		wcout << L"Cannot create COM Object" << endl;
	}

	CoUninitialize();
}











