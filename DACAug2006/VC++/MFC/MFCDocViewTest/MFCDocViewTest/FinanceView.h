// FinanceView.h : interface of the CFinanceView class
//


#pragma once


class CFinanceView : public CView
{
protected: // create from serialization only
	CFinanceView();
	DECLARE_DYNCREATE(CFinanceView)

// Attributes
public:
	CFinanceDoc* GetDocument() const;

// Operations
public:

// Overrides
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CFinanceView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEditModify();
};

#ifndef _DEBUG  // debug version in FinanceView.cpp
inline CFinanceDoc* CFinanceView::GetDocument() const
   { return reinterpret_cast<CFinanceDoc*>(m_pDocument); }
#endif

