// MFCCLientDlg.h : header file
//

#pragma once

#import "C:\VC++\COM\Servers\Local\trader.exe" no_namespace

// CMFCCLientDlg dialog
class CMFCCLientDlg : public CDialog
{
// Construction
public:
	CMFCCLientDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MFCCLIENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBuyButton();
private:
	IInventoryPtr m_pInv;
	int quantity;
	float rate;
	int stock;
	double balance;
public:
	void ShowDetails(void);
	afx_msg void OnBnClickedSellButton();
};








