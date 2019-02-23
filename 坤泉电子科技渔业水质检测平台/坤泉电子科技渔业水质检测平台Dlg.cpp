
// 坤泉电子科技渔业水质检测平台Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "坤泉电子科技渔业水质检测平台.h"
#include "坤泉电子科技渔业水质检测平台Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
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


// C坤泉电子科技渔业水质检测平台Dlg 对话框



C坤泉电子科技渔业水质检测平台Dlg::C坤泉电子科技渔业水质检测平台Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C坤泉电子科技渔业水质检测平台Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C坤泉电子科技渔业水质检测平台Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(C坤泉电子科技渔业水质检测平台Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON3, &C坤泉电子科技渔业水质检测平台Dlg::OnBnClickedButton3)
	ON_STN_CLICKED(IDC_STATIC4, &C坤泉电子科技渔业水质检测平台Dlg::OnStnClickedStatic4)
	ON_EN_CHANGE(IDC_EDIT5, &C坤泉电子科技渔业水质检测平台Dlg::OnEnChangeEdit5)
	ON_BN_CLICKED(IDC_BUTTON16, &C坤泉电子科技渔业水质检测平台Dlg::OnBnClickedButton16)
END_MESSAGE_MAP()


// C坤泉电子科技渔业水质检测平台Dlg 消息处理程序

BOOL C坤泉电子科技渔业水质检测平台Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码
	SetIcon(m_hIcon, TRUE); // Set big icon
	SetIcon(m_hIcon, FALSE); // Set small icon


	// TODO: Add extra initialization here


	GetClientRect(&m_rect); //获取对话框的大小

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void C坤泉电子科技渔业水质检测平台Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void C坤泉电子科技渔业水质检测平台Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR C坤泉电子科技渔业水质检测平台Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void C坤泉电子科技渔业水质检测平台Dlg::ChangeSize(UINT nID, int x, int y) //nID为控件ID，x,y分别为对话框的当前长和宽
{


	CWnd *pWnd;
	pWnd = GetDlgItem(nID);
	if (pWnd != NULL) //判断是否为空，因为在窗口创建的时候也会调用OnSize函数，但是此时各个控件还没有创建，Pwnd为空
	{


		CRect rec;
		pWnd->GetWindowRect(&rec); //获取控件变化前的大小
		ScreenToClient(&rec); //将控件大小装换位在对话框中的区域坐标
		rec.left = rec.left*x / m_rect.Width(); //按照比例调整空间的新位置
		rec.top = rec.top*y / m_rect.Height();
		rec.bottom = rec.bottom*y / m_rect.Height();
		rec.right = rec.right*x / m_rect.Width();
		pWnd->MoveWindow(rec); //伸缩控件


	}
}


void C坤泉电子科技渔业水质检测平台Dlg::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);

	// TODO: Add your message handler code here


	if (nType != SIZE_MINIMIZED) //判断窗口是不是最小化了，因为窗口最小化之后 ，窗口的长和宽会变成0，当前一次变化的时就会出现除以0的错误操作
	{

		const int IDC = 1000;
		for (int i = 0; i < 65;i++)
		ChangeSize(IDC+i, cx, cy); //对每一个控件依次做调整
		GetClientRect(&m_rect); //最后要更新对话框的大小，当做下一次变化的旧坐标


	}
	// TODO:  在此处添加消息处理程序代码
}


void C坤泉电子科技渔业水质检测平台Dlg::OnBnClickedButton3()
{
	// TODO:  在此添加控件通知处理程序代码
}


void C坤泉电子科技渔业水质检测平台Dlg::OnStnClickedStatic4()
{
	// TODO:  在此添加控件通知处理程序代码
}


void C坤泉电子科技渔业水质检测平台Dlg::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void C坤泉电子科技渔业水质检测平台Dlg::OnBnClickedButton16()
{
	// TODO:  在此添加控件通知处理程序代码
}
