
// ��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨.h"
#include "��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg �Ի���



C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON3, &C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::OnBnClickedButton3)
	ON_STN_CLICKED(IDC_STATIC4, &C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::OnStnClickedStatic4)
	ON_EN_CHANGE(IDC_EDIT5, &C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::OnEnChangeEdit5)
	ON_BN_CLICKED(IDC_BUTTON16, &C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::OnBnClickedButton16)
END_MESSAGE_MAP()


// C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg ��Ϣ�������

BOOL C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������
	SetIcon(m_hIcon, TRUE); // Set big icon
	SetIcon(m_hIcon, FALSE); // Set small icon


	// TODO: Add extra initialization here


	GetClientRect(&m_rect); //��ȡ�Ի���Ĵ�С

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::ChangeSize(UINT nID, int x, int y) //nIDΪ�ؼ�ID��x,y�ֱ�Ϊ�Ի���ĵ�ǰ���Ϳ�
{


	CWnd *pWnd;
	pWnd = GetDlgItem(nID);
	if (pWnd != NULL) //�ж��Ƿ�Ϊ�գ���Ϊ�ڴ��ڴ�����ʱ��Ҳ�����OnSize���������Ǵ�ʱ�����ؼ���û�д�����PwndΪ��
	{


		CRect rec;
		pWnd->GetWindowRect(&rec); //��ȡ�ؼ��仯ǰ�Ĵ�С
		ScreenToClient(&rec); //���ؼ���Сװ��λ�ڶԻ����е���������
		rec.left = rec.left*x / m_rect.Width(); //���ձ��������ռ����λ��
		rec.top = rec.top*y / m_rect.Height();
		rec.bottom = rec.bottom*y / m_rect.Height();
		rec.right = rec.right*x / m_rect.Width();
		pWnd->MoveWindow(rec); //�����ؼ�


	}
}


void C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: Add your message handler code here


	if (nType != SIZE_MINIMIZED) //�жϴ����ǲ�����С���ˣ���Ϊ������С��֮�� �����ڵĳ��Ϳ����0����ǰһ�α仯��ʱ�ͻ���ֳ���0�Ĵ������
	{

		const int IDC = 1000;
		for (int i = 0; i < 65;i++)
		ChangeSize(IDC+i, cx, cy); //��ÿһ���ؼ�����������
		GetClientRect(&m_rect); //���Ҫ���¶Ի���Ĵ�С��������һ�α仯�ľ�����


	}
	// TODO:  �ڴ˴������Ϣ����������
}


void C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::OnBnClickedButton3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::OnStnClickedStatic4()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::OnEnChangeEdit5()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void C��Ȫ���ӿƼ���ҵˮ�ʼ��ƽ̨Dlg::OnBnClickedButton16()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
