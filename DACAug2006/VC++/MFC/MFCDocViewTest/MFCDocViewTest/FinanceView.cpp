// FinanceView.cpp : implementation of the CFinanceView class
//

#include "stdafx.h"
#include "MFCDocViewTest.h"

#include "FinanceDoc.h"
#include "FinanceView.h"
#include ".\financeview.h"
#include "UpdateDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFinanceView

IMPLEMENT_DYNCREATE(CFinanceView, CView)

BEGIN_MESSAGE_MAP(CFinanceView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
	ON_COMMAND(ID_EDIT_MODIFY, OnEditModify)
END_MESSAGE_MAP()

// CFinanceView construction/destruction

CFinanceView::CFinanceView()
{
	// TODO: add construction code here

}

CFinanceView::~CFinanceView()
{
}

BOOL CFinanceView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CFinanceView drawing

void CFinanceView::OnDraw(CDC* pDC)
{
	CFinanceDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: add draw code for native data here
	CString schemes[] = {_T("Education"), _T("Home"), _T("Personal"), _T("Business")};
	CString text;
	text.Format(_T("Amount : %.2lf"), pDoc->m_dAmount);
	pDC->TextOut(20, 20, text);
	text.Format(_T("Period : %d"), pDoc->m_nPeriod);
	pDC->TextOut(20, 40, text);
	text.Format(_T("Scheme : %s"), schemes[pDoc->m_iScheme]);
	pDC->TextOut(20, 60, text);
	text.Format(_T("Employee : %s"), pDoc->m_bIsEmployee ? _T("Yes") : _T("No"));
	pDC->TextOut(20, 80, text);
	text.Format(_T("E.M.I : %.2lf"), pDoc->EMI());
	pDC->TextOut(20, 120, text);
}


// CFinanceView printing

BOOL CFinanceView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CFinanceView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CFinanceView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CFinanceView diagnostics

#ifdef _DEBUG
void CFinanceView::AssertValid() const
{
	CView::AssertValid();
}

void CFinanceView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFinanceDoc* CFinanceView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFinanceDoc)));
	return (CFinanceDoc*)m_pDocument;
}
#endif //_DEBUG


// CFinanceView message handlers

void CFinanceView::OnEditModify()
{
	// TODO: Add your command handler code here
	CUpdateDlg dlg;
	dlg.m_pDoc = GetDocument();
	dlg.DoModal();
}








