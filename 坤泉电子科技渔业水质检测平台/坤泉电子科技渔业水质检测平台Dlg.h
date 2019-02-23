
// 坤泉电子科技渔业水质检测平台Dlg.h : 头文件
//

#pragma once


// C坤泉电子科技渔业水质检测平台Dlg 对话框
class C坤泉电子科技渔业水质检测平台Dlg : public CDialogEx
{
// 构造
public:
	C坤泉电子科技渔业水质检测平台Dlg(CWnd* pParent = NULL);	// 标准构造函数
	void ChangeSize(UINT nID, int x, int y); //nID为控件ID，x,y分别为对话框的当前长和宽
// 对话框数据
	enum { IDD = IDD_MY_DIALOG };
	CRect m_rect; //用于保存原对话框大小

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnBnClickedButton3();
	afx_msg void OnStnClickedStatic4();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnBnClickedButton16();
};
