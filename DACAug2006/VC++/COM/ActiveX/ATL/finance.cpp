#define _ATL_ATTRIBUTES

#include <atlbase.h>
#include <atlcom.h>
#include <cmath>

[uuid("2B74B872-4882-4C05-9B9A-0BDE46655EA6"), dual]
__interface ISimpleLoan
{
	HRESULT GetInterestRate([in] double amount, [in] int period, [out, retval] float* pResult);
	HRESULT GetMonthlyInstallment([in] double amount, [in] int period, [out, retval] double* pResult);
};

[uuid("BA435EFE-CAC6-4333-9A1A-80EBF20947B9"), object]
__interface ILoanLimits
{
	HRESULT GetMaximumAmount([out, retval] double* pResult);
	HRESULT GetMaximumPeriod([out, retval] int* pResult);	
};

[module(type=DLL, uuid="FE79618E-5E23-4904-AD0A-500E6D783CA3", name="ACMEFinance", helpstring="ACME Finance Objects")];

[coclass, uuid("D9E3FCF0-460D-4056-933C-0E958444EB30"), progid("ACMEFinance.PersonalLoan"), threading("apartment"), support_error_info("ISimpleLoan")]
class PersonalLoan : public ISimpleLoan, public ILoanLimits
{
public:
	HRESULT FinalConstruct()
	{
		m_dMaxAmount = 200000;
		m_nMaxPeriod = 5;
		return S_OK;
	}

	HRESULT GetInterestRate(double amount, int period, float* pResult)
	{
		*pResult = (period < 3) ? 8.5f : 9.5f;
		return S_OK;		
	}

	HRESULT GetMonthlyInstallment(double amount, int period, double* pResult)
	{
		if(amount > m_dMaxAmount)
			return Error(L"Requested amount exceeds the required limit");
		if(period > m_nMaxPeriod)
			return Error(L"Requested period exceeds the required limit");
		int m = 12 * period;
		float i;
		GetInterestRate(amount, period, &i);
		i /= 1200;
		*pResult = amount * i / (1 - pow(1 + i, -m));
		
		return S_OK;
	}

	HRESULT GetMaximumAmount(double* pResult)
	{
		*pResult = m_dMaxAmount;
		return S_OK;
	}

	HRESULT GetMaximumPeriod(int* pResult)
	{
		*pResult = m_nMaxPeriod;
		return S_OK;
	}

	void FinalRelease(){}

private:
	double m_dMaxAmount;
	int m_nMaxPeriod;
};



// cl /MD /LD finance.cpp






