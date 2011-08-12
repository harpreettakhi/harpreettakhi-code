#define UNICODE
#define _WIN32_WINNT 0x0400
#include "trader.h"

HANDLE g_hStopEvent;

VOID LockModule()
{
	CoAddRefServerProcess();
}

VOID UnlockModule()
{
	if(CoReleaseServerProcess() == 0)
		SetEvent(g_hStopEvent);
}

class Trader : public IInventory, public IAccount
{
public:
	Trader();	
	~Trader();
	
	// IUnknown members
	HRESULT __stdcall QueryInterface(REFIID riid, LPVOID* ppvObj);
	ULONG __stdcall AddRef();
	ULONG __stdcall Release();

	// IInventory members
	HRESULT __stdcall Buy(int quantity, float rate);
	HRESULT __stdcall Sell(int quantity, float rate);
	HRESULT __stdcall GetStock(int* pStock);

	// IAccount members
	HRESULT __stdcall Credit(double amount);
	HRESULT __stdcall Debit(double amount);
	HRESULT __stdcall GetBalance(double* pBalance);
private:
	LONG m_nRefCount;
	int m_stock;
	double m_balance;
};

Trader::Trader()
{
	m_nRefCount = 1;
	m_stock = 0;
	m_balance = 10000;
	LockModule();
}

Trader::~Trader()
{
	UnlockModule();
}

HRESULT __stdcall Trader::QueryInterface(REFIID riid, LPVOID* ppvObj)
{
	if(riid == IID_IInventory)
		*ppvObj = static_cast<IInventory*>(this);
	else if(riid == IID_IAccount)
		*ppvObj = static_cast<IAccount*>(this);
	else if(riid == IID_IUnknown)
		*ppvObj = reinterpret_cast<IUnknown*>(this);
	else
		return *ppvObj = NULL, E_NOINTERFACE;
	
	AddRef();
	return S_OK;
}

ULONG __stdcall Trader::AddRef()
{
	return m_nRefCount++;
}

ULONG __stdcall Trader::Release()
{
	if(--m_nRefCount == 0)
	{
		delete this;
		return 0;
	}
	return m_nRefCount;
}

HRESULT __stdcall Trader::Buy(int quantity, float rate)
{
	HRESULT hr = S_OK;
	double amount = quantity * rate;
	
	if(m_balance < amount)
		hr = TRADER_E_INSUFFICIENTFUNDS;
	else
	{
		m_stock += quantity;
		m_balance -= amount;		
	}
	
	return hr;
}

HRESULT __stdcall Trader::Sell(int quantity, float rate)
{
	HRESULT hr = S_OK;
	double amount = quantity * rate;
	
	if(m_stock < quantity)
		hr = TRADER_E_OUTOFSTOCK;
	else
	{
		m_stock -= quantity;
		m_balance += amount;		
	}
	
	return hr;
}

HRESULT __stdcall Trader::GetStock(int* pStock)
{
	*pStock = m_stock;
	return S_OK;
}

HRESULT __stdcall Trader::Credit(double amount)
{
	m_balance += amount;
	return S_OK;		
}

HRESULT __stdcall Trader::Debit(double amount)
{
	HRESULT hr = S_OK;
	
	if(m_balance < amount)
		hr = TRADER_E_INSUFFICIENTFUNDS;
	else
		m_balance -= amount;
	
	return hr;	
}

HRESULT __stdcall Trader::GetBalance(double* pBalance)
{
	*pBalance = m_balance;
	return S_OK;
}

class TraderClassObject : public IClassFactory
{
public:
	TraderClassObject();
	~TraderClassObject();

	// IUnknown members
	HRESULT __stdcall QueryInterface(REFIID riid, LPVOID* ppvObj);
	ULONG __stdcall AddRef();
	ULONG __stdcall Release();

	// IClassFactory members
	HRESULT __stdcall CreateInstance(IUnknown* pUnkOuter, REFIID riid, LPVOID* ppvObj);
	HRESULT __stdcall LockServer(BOOL fLock);
private:
	LONG m_nRefCount;	
};

TraderClassObject::TraderClassObject()
{
	m_nRefCount = 1;
}

TraderClassObject::~TraderClassObject()
{
}

HRESULT __stdcall TraderClassObject::QueryInterface(REFIID riid, LPVOID* ppvObj)
{
	if(riid == IID_IClassFactory)
		*ppvObj = static_cast<IClassFactory*>(this);
	else if(riid == IID_IUnknown)
		*ppvObj = static_cast<IUnknown*>(this);
	else
		return *ppvObj = NULL, E_NOINTERFACE;
	
	AddRef();
	return S_OK;
}

ULONG __stdcall TraderClassObject::AddRef()
{
	return m_nRefCount++;
}

ULONG __stdcall TraderClassObject::Release()
{
	if(--m_nRefCount == 0)
	{
		delete this;
		return 0;
	}
	return m_nRefCount;
}

HRESULT __stdcall TraderClassObject::CreateInstance(IUnknown* pUnkOuter, REFIID riid, LPVOID* ppvObj)
{
	if(pUnkOuter)
		return CLASS_E_NOAGGREGATION;
	Trader* pObj = new Trader;
	if(pObj == NULL)
		return E_OUTOFMEMORY;
	HRESULT hr = pObj->QueryInterface(riid, ppvObj);
	pObj->Release();
	return hr;
}

HRESULT __stdcall TraderClassObject::LockServer(BOOL fLock)
{
	fLock ? LockModule() : UnlockModule();
	return S_OK;
}

HRESULT __stdcall RegisterServer()
{
	WCHAR lpszPath[MAX_PATH + 1];
	DWORD n = GetModuleFileName(GetModuleHandle(L"trader"), lpszPath, MAX_PATH + 1);
	HKEY hKey1, hKey2, hKey3;
	
	RegOpenKey(HKEY_CLASSES_ROOT, L"CLSID", &hKey1);
	RegCreateKey(hKey1, L"{EFCDAC32-9778-4300-9CF8-03A9F727E4E7}", &hKey2);
	RegCreateKey(hKey2, L"LocalServer32", &hKey3);
	RegSetValueEx(hKey3, NULL, 0, REG_SZ, reinterpret_cast<LPBYTE>(lpszPath), 2 * (n + 1));
	RegCloseKey(hKey3);
	RegCloseKey(hKey2);
	RegCloseKey(hKey1);

	return S_OK;
}

HRESULT __stdcall UnregisterServer()
{
	HKEY hKey1, hKey2;
	
	RegOpenKey(HKEY_CLASSES_ROOT, L"CLSID", &hKey1);
	RegOpenKey(hKey1, L"{EFCDAC32-9778-4300-9CF8-03A9F727E4E7}", &hKey2);
	RegDeleteKey(hKey2, L"LocalServer32");
	RegCloseKey(hKey2);
	RegDeleteKey(hKey1, L"{EFCDAC32-9778-4300-9CF8-03A9F727E4E7}");
	RegCloseKey(hKey1);

	return S_OK;
}

int WINAPI wWinMain(HINSTANCE, HINSTANCE, LPWSTR lpCmdLine, int)
{
	HRESULT hr;

	if(wcsstr(lpCmdLine, L"-Embedding"))
	{
		DWORD dwReg;
		
		CoInitializeEx(NULL, COINIT_MULTITHREADED);
		g_hStopEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
		TraderClassObject* pFactory = new TraderClassObject;
		hr = CoRegisterClassObject(CLSID_Trader, pFactory, CLSCTX_LOCAL_SERVER, REGCLS_MULTIPLEUSE, &dwReg);
		if(SUCCEEDED(hr))
		{
			WaitForSingleObject(g_hStopEvent, INFINITE);
			CoRevokeClassObject(dwReg);
		}
		delete pFactory;
		CloseHandle(g_hStopEvent);
		CoUninitialize();	
	}
	else if(wcsstr(lpCmdLine, L"-RegServer"))
	{
		RegisterServer();
		MessageBox(NULL, L"Trader server registered", L"Trader", MB_ICONINFORMATION);
	}
	else if(wcsstr(lpCmdLine, L"-UnregServer"))
	{
		UnregisterServer();
		MessageBox(NULL, L"Trader server unregistered", L"Trader", MB_ICONINFORMATION);
	}
	else
	{
		MessageBox(NULL, L"Trader running as a stand-alone app", L"Trader", MB_ICONINFORMATION);
	}
	
	return hr;
}









