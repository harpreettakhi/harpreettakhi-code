// FinanceDoc.cpp : implementation of the CFinanceDoc class
//

#include "stdafx.h"
#include "MFCDocViewTest.h"

#include "FinanceDoc.h"
#include ".\financedoc.h"
#include <math.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFinanceDoc

IMPLEMENT_DYNCREATE(CFinanceDoc, CDocument)

BEGIN_MESSAGE_MAP(CFinanceDoc, CDocument)
END_MESSAGE_MAP()


// CFinanceDoc construction/destruction

CFinanceDoc::CFinanceDoc()
: m_dAmount(50000)
, m_nPeriod(1)
, m_iScheme(2)
, m_bIsEmployee(FALSE)
{
	// TODO: add one-time construction code here

}

CFinanceDoc::~CFinanceDoc()
{
}

BOOL CFinanceDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
	m_dAmount = 50000;
	m_nPeriod = 1;
	m_iScheme = 2;
	m_bIsEmployee = FALSE;

	return TRUE;
}




// CFinanceDoc serialization

void CFinanceDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
		ar << m_dAmount << m_nPeriod << m_iScheme << m_bIsEmployee;
	}
	else
	{
		// TODO: add loading code here
		ar >> m_dAmount >> m_nPeriod >> m_iScheme >> m_bIsEmployee;
	}
}


// CFinanceDoc diagnostics

#ifdef _DEBUG
void CFinanceDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CFinanceDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CFinanceDoc commands

double CFinanceDoc::EMI(void)
{
	float rates[] = {6.5f, 8.0f, 9.0f, 10.5f};
	float i = rates[m_iScheme] / 1200;
	if(m_bIsEmployee && m_iScheme < 3)
		i /= 2;
	int m = 12 * m_nPeriod;
	return m_dAmount * i / (1 - pow(1 + i, -m));
}

void CFinanceDoc::CopyData(double& amount, int& period, int& scheme, BOOL& employee, bool direction)
{
	if(direction)
		m_dAmount = amount, m_nPeriod = period, m_iScheme = scheme, m_bIsEmployee = employee;
	else
		amount = m_dAmount, period = m_nPeriod, scheme = m_iScheme, employee = m_bIsEmployee;
}








