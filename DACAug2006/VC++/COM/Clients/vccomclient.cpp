#import "c:\winnt\system32\quartz.dll" rename_namespace("mp"), rename("Run", "Play")
#include <iostream>

using namespace mp;
using namespace std;

int wmain(int argc, WCHAR** argv)
{
	if(argc < 2)
		return wcout << L"Usage : " << argv[0] << L" media-file" << endl, 1;
	
	CoInitialize(NULL);

	try
	{
		IMediaControlPtr pMC(__uuidof(FilgraphManager));
		try
		{
			pMC->RenderFile(argv[1]);
			pMC->Play();
			IMediaEventPtr pME = pMC;
			LONG evcode;
			pME->WaitForCompletion(-1, &evcode);
		}
		catch(_com_error& e)
		{
			wcout << L"Cannot load " << argv[1] << endl;
		}
	}
	catch(_com_error& e)
	{
		wcout << L"Cannot create COM Object" << endl;
	}

	CoUninitialize();
}







