#pragma once

#include "FinanceDoc.h"
// CUpdateDlg dialog

class CUpdateDlg : public CDialog
{
	DECLARE_DYNAMIC(CUpdateDlg)

public:
	CUpdateDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CUpdateDlg();
	CFinanceDoc* m_pDoc;

// Dialog Data
	enum { IDD = IDD_UPDATE_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
private:
	double amount;
	int period;
	int scheme;
	BOOL employee;
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedUpdateButton();
};
