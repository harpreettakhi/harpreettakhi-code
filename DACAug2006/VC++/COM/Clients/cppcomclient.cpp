#define UNICODE
#include "quartz.h"
#include <iostream>

using namespace std;

int wmain(int argc, WCHAR** argv)
{
	if(argc < 2)
		return wcout << L"Usage : " << argv[0] << L" media-file" << endl, 1;

	CoInitialize(NULL);

	IMediaControl* pMC = NULL;
	HRESULT hr = CoCreateInstance(CLSID_FilgraphManager, NULL, CLSCTX_INPROC_SERVER, IID_IMediaControl, reinterpret_cast<LPVOID*>(&pMC));
	if(SUCCEEDED(hr))
	{
		hr = pMC->RenderFile(argv[1]);
		if(SUCCEEDED(hr))
		{
			IMediaEvent* pME = NULL;
			LONG evcode;

			pMC->Run();
			pMC->QueryInterface(IID_IMediaEvent, reinterpret_cast<LPVOID*>(&pME));
			pME->WaitForCompletion(-1, &evcode);
			pME->Release();			
		}
		else
			wcout << L"Cannot load " << argv[1] << endl;
		pMC->Release();
	}
	else
		wcout << L"Cannot create COM Object" << endl;

	CoUninitialize();
}













