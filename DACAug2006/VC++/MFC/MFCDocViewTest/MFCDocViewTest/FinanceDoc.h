// FinanceDoc.h : interface of the CFinanceDoc class
//


#pragma once

class CFinanceDoc : public CDocument
{
protected: // create from serialization only
	CFinanceDoc();
	DECLARE_DYNCREATE(CFinanceDoc)

// Attributes
public:

// Operations
public:

// Overrides
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CFinanceDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	double m_dAmount;
	int m_nPeriod;
	int m_iScheme;
	BOOL m_bIsEmployee;
	double EMI(void);
	void CopyData(double& amount, int& period, int& scheme, BOOL& employee, bool direction);
};








