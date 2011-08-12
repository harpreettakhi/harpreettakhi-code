// UpdateDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCDocViewTest.h"
#include "UpdateDlg.h"
#include ".\updatedlg.h"


// CUpdateDlg dialog

IMPLEMENT_DYNAMIC(CUpdateDlg, CDialog)
CUpdateDlg::CUpdateDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CUpdateDlg::IDD, pParent)
	, amount(0)
	, period(0)
	, scheme(0)
	, employee(FALSE)
{
}

CUpdateDlg::~CUpdateDlg()
{
}

void CUpdateDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_AMOUNT_EDIT, amount);
	DDV_MinMaxDouble(pDX, amount, 10000, 1000000);
	DDX_Text(pDX, IDC_PERIOD_EDIT, period);
	DDV_MinMaxInt(pDX, period, 1, 25);
	DDX_CBIndex(pDX, IDC_SCHEME_COMBO, scheme);
	DDX_Check(pDX, IDC_EMPLOYEE_CHECK, employee);
}


BEGIN_MESSAGE_MAP(CUpdateDlg, CDialog)
	ON_BN_CLICKED(IDC_UPDATE_BUTTON, OnBnClickedUpdateButton)
END_MESSAGE_MAP()


// CUpdateDlg message handlers

BOOL CUpdateDlg::OnInitDialog()
{
	m_pDoc->CopyData(amount, period, scheme, employee, FALSE);
	CDialog::OnInitDialog();

	// TODO:  Add extra initialization here
	SetWindowText(m_pDoc->GetTitle());
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

void CUpdateDlg::OnBnClickedUpdateButton()
{
	// TODO: Add your control notification handler code here
	if(UpdateData())
	{
		m_pDoc->CopyData(amount, period, scheme, employee, TRUE);
		m_pDoc->UpdateAllViews(NULL);
		m_pDoc->SetModifiedFlag(TRUE);
		EndDialog(IDOK);
	}
}







