#define UNICODE
#include "quartz.h"
#include <stdio.h>
#include <stdlib.h>

int wmain(int argc, WCHAR** argv)
{
	IClassFactory* pCF = NULL;
	IMediaControl* pMC = NULL;
	IMediaEvent* pME = NULL;
	HRESULT hr;

	if(argc < 2)
		return wprintf(L"Usage : %s media-file [timeout]\n", argv[0]);
	
	CoInitialize(NULL);
	
	hr = CoGetClassObject(&CLSID_FilgraphManager, CLSCTX_INPROC_SERVER, NULL, &IID_IClassFactory, &pCF);
	if(SUCCEEDED(hr))
	{
		hr = pCF->lpVtbl->CreateInstance(pCF, NULL, &IID_IMediaControl, &pMC);
		hr = pMC->lpVtbl->RenderFile(pMC, argv[1]);
		if(SUCCEEDED(hr))
		{
			LONG timeout = (argc < 3) ? -1 : _wtoi(argv[2]);
			LONG evcode;
			
			pMC->lpVtbl->Run(pMC);
			pMC->lpVtbl->QueryInterface(pMC, &IID_IMediaEvent, &pME);
			hr = pME->lpVtbl->WaitForCompletion(pME, timeout, &evcode);
			if(SUCCEEDED(hr))
				wprintf(L"Media completed with event code of %d\n", evcode);
			else
				wprintf(L"Media timeout\n");
			pME->lpVtbl->Release(pME);
		}
		else
			wprintf(L"Cannot load %s\n", argv[1]);
		pMC->lpVtbl->Release(pMC);
		pCF->lpVtbl->Release(pCF);
	}
	else
		return wprintf(L"Cannot create COM Object\n");

	CoUninitialize();
}








