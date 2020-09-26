
// 1120170852Dlg.h : header file
//

#pragma once


// CMy1120170852Dlg dialog
class CMy1120170852Dlg : public CDialogEx
{
// Construction
public:
	CMy1120170852Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY1120170852_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLbnSelchangeList1();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedrun();
	afx_msg void OnBnClickedprocess();
	afx_msg void OnBnClickedprocess3();
	afx_msg void OnBnClickedprocess2();
	afx_msg void OnBnClickedprocess4();
	afx_msg void OnNMCustomdrawSlider1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnBnClickedprocess5();
	afx_msg void OnBnClickedprocess6();
	afx_msg void OnBnClickedprocess7();
	afx_msg void OnBnClickedprocess8();
	afx_msg void OnBnClickedprocess9();
	afx_msg void OnNMCustomdrawProgress1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnBnClickedprocess10();
	afx_msg void OnBnClickedprocess11();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};
