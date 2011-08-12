// MFCCLientDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCCLient.h"
#include "MFCCLientDlg.h"
#include ".\mfcclientdlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCCLientDlg dialog



CMFCCLientDlg::CMFCCLientDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMFCCLientDlg::IDD, pParent)
	, quantity(10)
	, rate(100)
	, stock(0)
	, balance(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCCLientDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_QUANTITY_EDIT, quantity);
	DDX_Text(pDX, IDC_RATE_EDIT, rate);
	DDX_Text(pDX, IDC_STOCK_EDIT, stock);
	DDX_Text(pDX, IDC_BALANCE_EDIT, balance);
}

BEGIN_MESSAGE_MAP(CMFCCLientDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUY_BUTTON, OnBnClickedBuyButton)
	ON_BN_CLICKED(IDC_SELL_BUTTON, OnBnClickedSellButton)
END_MESSAGE_MAP()


// CMFCCLientDlg message handlers

BOOL CMFCCLientDlg::OnInitDialog()
{
	m_pInv.CreateInstance(__uuidof(Trader));
	ShowDetails();
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCCLientDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCCLientDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CMFCCLientDlg::OnBnClickedBuyButton()
{
	// TODO: Add your control notification handler code here
	if(UpdateData())
	{
		try
		{
			m_pInv->Buy(quantity, rate);
			ShowDetails();
		}
		catch(_com_error& e)
		{
			if(e.Error() == TRADER_E_OUTOFSTOCK)
				MessageBox(_T("Out of stock"));
			else if(e.Error() == TRADER_E_INSUFFICIENTFUNDS)
				MessageBox(_T("Insufficient funds"));
		}
	}
}

void CMFCCLientDlg::ShowDetails(void)
{
	stock = m_pInv->GetStock();
	IAccountPtr pAcc = m_pInv;
	balance = pAcc->GetBalance();
	UpdateData(FALSE);
}









void CMFCCLientDlg::OnBnClickedSellButton()
{
	// TODO: Add your control notification handler code here
	if(UpdateData())
	{
		try
		{
			m_pInv->Sell(quantity, rate);
			ShowDetails();
		}
		catch(_com_error& e)
		{
			if(e.Error() == TRADER_E_OUTOFSTOCK)
				MessageBox(_T("Out of stock"));
			else if(e.Error() == TRADER_E_INSUFFICIENTFUNDS)
				MessageBox(_T("Insufficient funds"));
		}
	}
}

