
// ��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg.h : ͷ�ļ�
//

#pragma once


// C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg �Ի���
class C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg : public CDialogEx
{
// ����
public:
	C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg(CWnd* pParent = NULL);	// ��׼���캯��
	void ChangeSize(UINT nID, int x, int y); //nIDΪ�ؼ�ID��x,y�ֱ�Ϊ�Ի���ĵ�ǰ���Ϳ�
// �Ի�������
	enum { IDD = IDD_MY_DIALOG };
	CRect m_rect; //���ڱ���ԭ�Ի����С

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
