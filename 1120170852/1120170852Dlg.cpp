
// 1120170852Dlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "1120170852.h"
#include "1120170852Dlg.h"
#include "afxdialogex.h"
#include <ctime>
#include <chrono>
#include <windows.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <numeric>
#include <iomanip>
#include <math.h>
#include <cstdlib>
#include <easyx.h>			
#include <conio.h>
#include <algorithm> 
#include<graphics.h>
#include <atlstr.h>
#include <stdio.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#pragma warning(disable : 4996)

// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CAboutDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CMy1120170852Dlg dialog



CMy1120170852Dlg::CMy1120170852Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MY1120170852_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy1120170852Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMy1120170852Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDCANCEL, &CMy1120170852Dlg::OnBnClickedCancel)
	ON_BN_CLICKED(btn_run, &CMy1120170852Dlg::OnBnClickedrun)
	ON_BN_CLICKED(show_process, &CMy1120170852Dlg::OnBnClickedprocess)
	ON_BN_CLICKED(show_process3, &CMy1120170852Dlg::OnBnClickedprocess3)
	ON_BN_CLICKED(show_process2, &CMy1120170852Dlg::OnBnClickedprocess2)
	ON_BN_CLICKED(show_process4, &CMy1120170852Dlg::OnBnClickedprocess4)
	ON_BN_CLICKED(show_process5, &CMy1120170852Dlg::OnBnClickedprocess5)
	ON_BN_CLICKED(show_process6, &CMy1120170852Dlg::OnBnClickedprocess6)
	ON_BN_CLICKED(show_process7, &CMy1120170852Dlg::OnBnClickedprocess7)
	ON_BN_CLICKED(show_process8, &CMy1120170852Dlg::OnBnClickedprocess8)
	ON_BN_CLICKED(show_process9, &CMy1120170852Dlg::OnBnClickedprocess9)
	ON_BN_CLICKED(show_process10, &CMy1120170852Dlg::OnBnClickedprocess10)
	ON_BN_CLICKED(show_process11, &CMy1120170852Dlg::OnBnClickedprocess11)
	ON_BN_CLICKED(IDC_BUTTON1, &CMy1120170852Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMy1120170852Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMy1120170852Dlg::OnBnClickedButton3)
END_MESSAGE_MAP()


// CMy1120170852Dlg message handlers

BOOL CMy1120170852Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
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

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMy1120170852Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMy1120170852Dlg::OnPaint()
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
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMy1120170852Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMy1120170852Dlg::OnLbnSelchangeList1()
{
	// TODO: Add your control notification handler code here
}


void CAboutDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}


void CMy1120170852Dlg::OnBnClickedCheck1()
{
	// TODO: Add your control notification handler code here
}

std::ofstream myfile; // 写入文本
int sizeY, sizeX; // 初始空间矩阵
double residual = 0.0; // 残差量
double max_residual = 0.0; // 最大残差
double resize_factor = 0; // 窗口缩放常数
bool print_out = 0; // 是否打出中间过程矩阵 0 不打出
bool save_img = 0; // 是否显示图片
int initialize_function = 1; //初始化方式
bool save_file = 0;
std::vector<double>lag_array{ 100 };
bool delta_v_format = 0;
int x_s;   // 屏幕宽  
int y_s;   // 屏幕高
int thickness = 5;
bool tianchong = 0;

void CMy1120170852Dlg::OnBnClickedCancel()
{
	// TODO: Add your control notification handler code here
	myfile.close();// 写入停止 
	CDialogEx::OnCancel();
}

#define xsect(p1,p2) (h[p2]*xh[p1]-h[p1]*xh[p2])/(h[p2]-h[p1])
#define ysect(p1,p2) (h[p2]*yh[p1]-h[p1]*yh[p2])/(h[p2]-h[p1])
#define min(x,y) (x<y?x:y)
#define max(x,y) (x>y?x:y)
auto start = std::chrono::system_clock::now();



struct data {

	int N{ 0 }; //电极总数
	double delta{ 0.0 }; //电极厚度（mm）
	std::vector<double> dzi{};//相邻电极间距离
	std::vector<int> Ni{};//相邻电极之间要划分的步长数
	std::vector<double> Vi{}; //电极电位
	int r1{ 0 }; //电极内孔径半径（mm），所有电极内孔径半径相同
	int M1{ 0 }; //r1范围内等步长划分的网格数
	int r2{ 0 }; //从电极内孔边沿到封闭边界处的径向距离
	int M2{ 0 }; //r2范围内等步长划分的网格数
	double e{ 0.0 }; //迭代控制精度
	int NST{ 1 }; //输出打印空间电位时网格点间隔数，当 NST=1，全部打印；NST=2，隔行隔列打印，依次类推
	int INS{ 0 }; //轴上电位作等距插值时的步长数
	int deltaV{ 0 }; //要求扫描搜索等电位线的电位间隔值
	std::vector<double> init_vec; // 用来接收特定值等位线
}Inputdata;;

//从数据文本读取数据存入struct
int readdata()
{
	// 判断文件夹是否存在并创建文件夹

	std::time_t start_time = std::chrono::system_clock::to_time_t(start);
	HDC hDC = ::GetDC(HWND(NULL));               // 得到屏幕DC  
	x_s = ::GetDeviceCaps(hDC, HORZRES);       // 宽  
	y_s = ::GetDeviceCaps(hDC, VERTRES);        // 高   
	::ReleaseDC(HWND(NULL), hDC);                  // 释放DC

	myfile.open("D:\\CADtest\\1120170852\\李成琦_1120170852.res");
	std::ifstream myFileStream("data.dat");
	if (!myFileStream.is_open()) 
	{
		std::cout << "文件打开失败！文件不存在！\n请确认数据文件在同一目录下！" << std::endl;
		return 0;
	}

	std::string temp;
	std::string line;
	getline(myFileStream, line);
	std::stringstream ss(line);
	getline(ss, temp, ';');
	Inputdata.delta = std::stod(temp);// 读取delta
	myfile << "模拟像管FDM仿真程序\n作者：李成琦 ";
	myfile << std::ctime(&start_time) << std::endl;
	myfile << "==============================================================================================\n " << std::endl;
	myfile << "读入数据\n";
	myfile << "电极厚度（mm）Delta = " << Inputdata.delta << std::endl;
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.N = std::stoi(temp);// 读取N
	myfile << "电极个数 N = " << Inputdata.N << std::endl;
	std::vector<int> initialize(Inputdata.N, 0);
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	Inputdata.dzi.insert(Inputdata.dzi.end(), initialize.begin(), initialize.end()); //初始化delta vector

	// 读取delta z
	myfile << "相邻电极距离(mm) Delta Z = ";
	for (int iter = 0; iter < Inputdata.N; iter++)
	{
		getline(ss, temp, ',');
		Inputdata.dzi[iter] = stod(temp);
		myfile << Inputdata.dzi[iter] << " ";
	}
	myfile << std::endl;

	// 读取Ni
	myfile << "每一个ΔZ范围内步数 Ni = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	Inputdata.Ni.insert(Inputdata.Ni.end(), initialize.begin(), initialize.end());
	for (int iter = 0; iter < Inputdata.N; iter++)
	{
		getline(ss, temp, ',');
		Inputdata.Ni[iter] = stoi(temp);
		myfile << Inputdata.Ni[iter] << " ";
	}
	myfile << std::endl;

	//读取Vi
	myfile << "每个电极的电位 Vi = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	Inputdata.Vi.insert(Inputdata.Vi.end(), initialize.begin(), initialize.end());
	for (int iter = 0; iter < Inputdata.N; iter++)
	{
		getline(ss, temp, ',');
		Inputdata.Vi[iter] = stoi(temp);
		myfile << Inputdata.Vi[iter] << " ";
	}
	myfile << std::endl;


	//读取delta_R1
	myfile << "电极内孔径半径（mm）Delta R1 = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.r1 = stoi(temp);
	myfile << Inputdata.r1 << std::endl;

	//读取delta_R2
	myfile << "电极内孔边沿到封闭边界处的径向距离 Delta R2 = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.r2 = stoi(temp);
	myfile << Inputdata.r2 << std::endl;

	//读取M1
	myfile << "Δr1范围内等步长划分的网格数 M1 = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.M1 = stoi(temp);
	myfile << Inputdata.M1 << std::endl;

	//读取M2
	myfile << "Δr2范围内等步长划分的网格数 M2 = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.M2 = stoi(temp);
	myfile << Inputdata.M2 << std::endl;

	//读取epsilon
	myfile << "迭代控制精度 epsilon = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.e = stod(temp);
	myfile << Inputdata.e << std::endl;

	//读取NST
	myfile << "输出打印空间电位时网格点间隔数 NST = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.NST = stoi(temp);
	myfile << Inputdata.NST << std::endl;
	if (Inputdata.NST == 0)
	{
		myfile << "\n数据有错！请检查NST, NST不能为0";
		exit(1);
	}

	//读取
	myfile << "轴上电位作等距插值时的步长数 INS = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.INS = stoi(temp);
	myfile << Inputdata.INS << std::endl;

	//读取delta_V
	myfile << "要求扫描搜索等电位线的电位间隔值 Delta_V 是";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	int temp_int = stoi(temp);
	if(temp_int == 1)
	{
		delta_v_format = 0; // 表示此时delta_v 以间隔电压形式输入
		getline(myFileStream, line);
		ss.clear();
		ss.str(line);
		getline(ss, temp, ';');
		Inputdata.deltaV = stoi(temp);
		myfile << "电压间隔(V) ";
		myfile << Inputdata.deltaV << std::endl << std::endl;
	}
	if (temp_int == 2)
	{
		delta_v_format = 1; // 表示此时以特定值输入
		getline(myFileStream, line);
		ss.str(line);
		myfile << "特定值： ";
		while (getline(ss, temp, ','))
		{
			Inputdata.init_vec.push_back(stoi(temp));
			myfile << stoi(temp) << ";";
		}
		myfile << std::endl;
	}
	myfile << "=====================================================================================================";
	myfile <<"\n\n";

	//文件关闭
	myFileStream.close();

}
//如果r,c在边界上，返回True, 反之则返回 False	
//两个列边界及最上面一行
bool OnBoundary(int r, int c, std::vector<double>& array, int sizeX, int sizeY, int M1, int M2, std::vector<int>& Ni, int N, std::vector<double>& Vi) {

	if ((c == 0) || (c == sizeY - 1) || (r == 0)) {
		return 1;
	}
	// 下半部分
	if (r > M2)
	{
		return 0;
	}

	//第一级
	if ((r <= M2) && ((c == Ni[0]) || (c == Ni[0] + 1)))
	{
		return 1;
	}

	//中间电极
	int column = Ni[0];
	for (int i = 1; i < N - 1; i++)
	{
		column = column + Ni[i] + 1;
		if ((r <= M2) && ((c == column) || (c == column + 1)))
		{
			return 1;
		}
	}

	return 0;


}


// 将电极和上区域初始化为电位值
std::vector<double> initialize_voltage(std::vector<double>& array, int sizeX, int sizeY, int M1, int M2, std::vector<int>& Ni, int N, std::vector<double>& Vi)
{
	if (initialize_function == 1) {
		// 第一级电极
		for (int r = 0; r <= M2; r++)
		{
			array[r * sizeY + Ni[0]] = Vi[0];
			array[r * sizeY + Ni[0] + 1] = Vi[0];
		}
		// 第一级边场
		for (int r = 0; r <= M2 + M1; r++)
		{
			for (int c = 1; c < Ni[0]; c++)
			{
				array[0 * sizeY + c] = Vi[0] / Ni[0] * c;
			}
		}
		// 中间电极
		int column = Ni[0];
		for (int i = 1; i < N - 1; i++)
		{
			column = column + Ni[i] + 1;
			for (int r = 0; r <= M2; r++)
			{
				array[r * sizeY + column] = Vi[i];
				array[r * sizeY + column + 1] = Vi[i];
			}
		}
		// 中间边上
		column = 0;
		int iter = 1;
		int bug = 0;
		for (int i = 1; i < N - 1; i++)
		{
			int n = 1;
			column = Ni[i - 1] + column;
			for (int c = column + 2 + bug; c < column + Ni[i] + iter; c++)
			{
				for (int r = 0; r <= M2 + M1; r++) {
					array[0 * sizeY + c] = (Vi[i] - Vi[i - 1]) / Ni[i] * n + Vi[i - 1];
				}
				n = n + 1;
			}
			iter = iter + 1;
			bug = bug + 1;
		}

		// 最后阴极
		int Nsum = std::accumulate(Ni.begin(), Ni.end(), 0);
		for (int r = 0; r <= M2 + M1; r++)
		{
			array[r * sizeY + Nsum + N - 1] = Vi[N - 1];
		}

		//最后阴极边上
		int n = 1;
		for (int c = Nsum + N - Ni[N - 1]; c < Nsum + N - 1; c++)
		{
			for (int r = 0; r <= M2 + M1; r++) {
				array[0 * sizeY + c] = (Vi[N - 1] - Vi[N - 2]) / Ni[N - 1] * n + Vi[N - 2];
			}
			n = n + 1;
		}
	}

	if (initialize_function == 2) {
		// 第一级电极
		for (int r = 0; r <= M2 + M1; r++)
		{
			array[r * sizeY + Ni[0]] = Vi[0];
			array[r * sizeY + Ni[0] + 1] = Vi[0];
		}
		// 第一级边场
		for (int r = 0; r <= M2 + M1; r++)
		{
			for (int c = 1; c < Ni[0]; c++)
			{
				array[r * sizeY + c] = Vi[0] / Ni[0] * c;
			}
		}
		// 中间电极
		int column = Ni[0];
		for (int i = 1; i < N - 1; i++)
		{
			column = column + Ni[i] + 1;
			for (int r = 0; r <= M2 + M1; r++)
			{
				array[r * sizeY + column] = Vi[i];
				array[r * sizeY + column + 1] = Vi[i];
			}
		}
		// 中间边上
		column = 0;
		int iter = 1;
		int bug = 0;
		for (int i = 1; i < N - 1; i++)
		{
			int n = 1;
			column = Ni[i - 1] + column;
			for (int c = column + 2 + bug; c < column + Ni[i] + iter; c++)
			{
				for (int r = 0; r <= M2 + M1; r++) {
					array[r * sizeY + c] = (Vi[i] - Vi[i - 1]) / Ni[i] * n + Vi[i - 1];
				}
				n = n + 1;
			}
			iter = iter + 1;
			bug = bug + 1;
		}

		// 最后阴极
		int Nsum = std::accumulate(Ni.begin(), Ni.end(), 0);
		for (int r = 0; r <= M2 + M1; r++)
		{
			array[r * sizeY + Nsum + N - 1] = Vi[N - 1];
		}

		//最后阴极边上
		int n = 1;
		for (int c = Nsum + N - Ni[N - 1]; c < Nsum + N - 1; c++)
		{
			for (int r = 0; r <= M2 + M1; r++) {
				array[r * sizeY + c] = (Vi[N - 1] - Vi[N - 2]) / Ni[N - 1] * n + Vi[N - 2];
			}
			n = n + 1;
		}
	}
	return array;
}

// 输入坐标，左上角为（0，0），输出每个坐标对应的h1,h2,h3,h4, 输出为vector类型
std::vector<double> h_four(int r, int c, double delta, int sizeX, int sizeY, int M1, int M2, int r1, int r2, std::vector<int>& Ni, int N, std::vector<double>& dzi)
{
	double h_1 = 0.0, h_2 = 0.0, h_3 = 0.0 , h_4 = 0.0;
	// 第一级及左下区域
	if ((c > 0) && (c < Ni[0]))
	{
		if (r < M2)
		{
			h_1 = dzi[0] / Ni[0]; // 0
			h_2 = dzi[0] / Ni[0]; // 1
			h_3 = (double)r2 / M2; // 2
			h_4 = (double)r2 / M2; // 3
		}
		if (r == M2)
		{
			h_1 = dzi[0] / Ni[0];
			h_2 = dzi[0] / Ni[0];
			h_3 = (double)r2 / M2;
			h_4 = (double)r1 / M1;
		}
		if (r > M2)
		{
			h_1 = dzi[0] / Ni[0];
			h_2 = dzi[0] / Ni[0];
			h_3 = (double)r1 / M1;
			h_4 = (double)r1 / M1;
		}

	}
	if ((r > M2) && (c == Ni[0]))
	{
		h_1 = dzi[0] / Ni[0];
		h_2 = delta;
		h_3 = (double)r1 / M1;
		h_4 = (double)r1 / M1;
	}
	if ((r > M2) && (c == Ni[0] + 1))
	{
		h_1 = delta;
		h_2 = dzi[1] / Ni[1];
		h_3 = (double)r1 / M1;
		h_4 = (double)r1 / M1;
	}

	// 最后一个电极区域
	int Nsum = std::accumulate(Ni.begin(), Ni.end(), 0);
	if ((c > Nsum + N - Ni[N - 1] - 1) && (c < Nsum + N - 1))
	{
		if (r < M2)
		{
			h_1 = dzi[N - 1] / Ni[N - 1];
			h_2 = dzi[N - 1] / Ni[N - 1];
			h_3 = (double)r2 / M2;
			h_4 = (double)r2 / M2;
		}
		if (r == M2)
		{
			h_1 = dzi[N - 1] / Ni[N - 1];
			h_2 = dzi[N - 1] / Ni[N - 1];
			h_3 = (double)r2 / M2;
			h_4 = (double)r1 / M1;
		}
		if (r > M2)
		{
			h_1 = dzi[N - 1] / Ni[N - 1];
			h_2 = dzi[N - 1] / Ni[N - 1];
			h_3 = (double)r1 / M1;
			h_4 = (double)r1 / M1;
		}

	}

	// 中间电极

	int column = 0;
	int iter = 1;
	int last_column = 0;
	int next_column = 0;
	for (int i = 1; i < N - 1; i++) // 对每个电极检查一次
	{
		int n = 1;
		column = Ni[i - 1] + column;
		last_column = column + iter + 1;
		next_column = column + Ni[i] + iter + 1;
		if ((c >= last_column) && (c <= next_column)) // 在前一个电极右侧一个到这个电极第二面的点的范围内
		{
			if (c == next_column) // 如果在这个电极的右侧那个点
			{
				h_1 = delta;
				h_2 = dzi[i + 1] / Ni[i + 1];
				h_3 = (double)r1 / M1;
				h_4 = (double)r1 / M1;
			}
			if (c == next_column - 1) // 如果在这个电极左侧的那个点
			{
				h_1 = dzi[i] / Ni[i];
				h_2 = delta;
				h_3 = (double)r1 / M1;
				h_4 = (double)r1 / M1;
			}
			if ((c >= last_column) && (c <= next_column - 2)) // 如果在这个电极的中间
			{
				if (r < M2) // 分界线之上
				{
					h_1 = dzi[i] / Ni[i];
					h_2 = dzi[i] / Ni[i];
					h_3 = (double)r2 / M2;
					h_4 = (double)r2 / M2;
				}
				if (r == M2) // 分界线上
				{
					h_1 = dzi[i] / Ni[i];
					h_2 = dzi[i] / Ni[i];
					h_3 = (double)r2 / M2;
					h_4 = (double)r1 / M1;
				}
				if (r > M2) // 分界线之下
				{
					h_1 = dzi[i] / Ni[i];
					h_2 = dzi[i] / Ni[i];
					h_3 = (double)r1 / M1;
					h_4 = (double)r1 / M1;
				}
			}
		}

		iter = iter + 1;
	}


	std::vector<double> array_four = { h_1, h_2, h_3, h_4 };
	return array_four;
}

// 常数c计算，输入坐标，输出这个点对应的SOR中使用的常数c1,c2,c3,c4,c0
std::vector<double> constant_four(int r, int c, std::vector<double>& array, int sizeX, int sizeY)
{
	std::vector<double> a = h_four(r, c, Inputdata.delta, sizeX, sizeY, Inputdata.M1, Inputdata.M2, Inputdata.r1, Inputdata.r2, Inputdata.Ni, Inputdata.N, Inputdata.dzi);
	double h_1 = a[0];
	double h_2 = a[1];
	double h_3 = a[2];
	double h_4 = a[3];
	double c_1, c_2, c_3, c_4, c_0;
	int r_0 = sizeX - 1 - r;
	if (r_0 > 0)
	{
		c_1 = 2 / (h_1 * (h_1 + h_2));
		c_2 = 2 / (h_2 * (h_1 + h_2));
		c_3 = (2 * r_0 - h_4) / (r_0 * h_3 * (h_3 + h_4));
		c_4 = (2 * r_0 + h_3) / (r_0 * h_4 * (h_3 + h_4));
	}
	if (r_0 == 0)
	{
		c_1 = 2 / (h_1 * (h_1 + h_2));
		c_2 = 2 / (h_2 * (h_1 + h_2));
		c_3 = 0;
		c_4 = 4 / pow(h_4, 2);
	}
	c_0 = c_1 + c_2 + c_3 + c_4;
	std::vector<double> result = { c_0, c_1, c_2, c_3, c_4 };
	return result; // 返回五个c的值，以Vector形式
}

// SOR算法模块
std::vector<double> SOR(std::vector<double>& array, int sizeX, int sizeY, double omega, int i, bool write)
{
	max_residual = 0.0;
	double c_0, c_1, c_2, c_3, c_4;
	double internal_c; //用来计算残差
	std::vector<double> c_containter = { 0, 0, 0, 0, 0 };
	residual = 0;
	for (int r = 0; r < sizeX; r++)
	{
		for (int c = 0; c < sizeY - 1; c++)
		{
			if (OnBoundary(r, c, array, sizeX, sizeY, Inputdata.M1, Inputdata.M2, Inputdata.Ni, Inputdata.N, Inputdata.Vi) == 0) // 如果不是边界点
			{

				c_containter = constant_four(r, c, array, sizeX, sizeY); // 获得五个c的值的vector
				c_0 = c_containter[0];
				c_1 = c_containter[1];
				c_2 = c_containter[2];
				c_3 = c_containter[3];
				c_4 = c_containter[4]; 
				internal_c = array[r * sizeY + c]; // 原始值存到中间变量里
				if (r == sizeX - 1) // 前面行运算
				{
					array[r * sizeY + c] = (1 - omega) * array[r * sizeY + c] + (omega / c_0) * (c_1 * array[r * sizeY + c - 1] + c_2 * array[r * sizeY + c + 1] + c_4 * array[(r - 1) * sizeY + c]);
				}
				else if (r != sizeX - 1) // 最后一行考虑到没有下一行，单独运算
				{
					array[r * sizeY + c] = (1 - omega) * array[r * sizeY + c] + (omega / c_0) * (c_1 * array[r * sizeY + c - 1] + c_2 * array[r * sizeY + c + 1] + c_3 * array[(r + 1) * sizeY + c] + c_4 * array[(r - 1) * sizeY + c]);
				}
				residual = residual + abs(internal_c - array[r * sizeY + c]);
				if (abs(internal_c - array[r * sizeY + c]) > max_residual)
				{
					max_residual = abs(internal_c - array[r * sizeY + c]); // 最大残差运算
				}
			}

		}

	}
	residual = residual / (sizeX * sizeY); //计算残差
	if (write == 1) 
	{
		myfile << "\n第" << i << "次迭代 " << "\nOmega(ω)取：" << std::fixed << std::setprecision(5) << omega << " ";
	}
	if (print_out == 1)
	{
		for (int r = 0; r < sizeX; r = r + Inputdata.NST)
		{
			for (int c = 0; c < sizeY; c = c + Inputdata.NST)
			{
				myfile << std::fixed << std::setprecision(2) << std::setw(4) << array[r * sizeY + c] << " ";
			}
			myfile << std::endl;
		}
	}
	if (write == 1)
	{
		myfile << "残差: " << std::fixed << std::setprecision(10) << residual << " ";
		myfile << "最大残差: " << std::fixed << std::setprecision(10) << max_residual << std::endl;
	}
	return array;
}

// 等位线坐标函数 输入参数：原始矩阵，坐标的最大、最小值、电压间隔及电压矩阵
int drawline(std::vector<double>& d,int ilb,int iub,int jlb,int jub,std::vector<double>& x,std::vector<double>& y,int nc,std::vector<double>& z,int sizeX,int sizeY,bool write)

// d               ! 数据矩阵
// ilb,iub,jlb,jub ! 矩阵的参数
// x               ! 列坐标
// y               ! 行坐标
// nc              ! 等级数
// z               ! 需要电极的电压vector
// sizeX           ! 行数
// size Y          ! 列数
{
	int m1, m2, m3, case_value;
	double dmin, dmax, x1, x2, y1, y2;
	register int i, j, k, m;
	double h[5];
	int sh[5];
	double xh[5], yh[5];
	int im[4] = { 0,1,1,0 }, jm[4] = { 0,0,1,1 };
	int castab[3][3][3] =
	{
	  {
		{0,0,8},{0,2,5},{7,6,9}
	  },
	  {
		{0,3,4},{1,3,1},{4,3,0}
	  },
	  {
		{9,6,7},{5,2,0},{8,0,0}
	  }
	};
	for (j = (jub - 1); j >= jlb; j--) {
		for (i = ilb; i <= iub - 1; i++) {
			double temp1, temp2;
			temp1 = min(d[i * sizeY + j], d[i * sizeY + j + 1]);
			temp2 = min(d[(i + 1) * sizeY + j], d[(i + 1) * sizeY + j + 1]);
			dmin = min(temp1, temp2);
			temp1 = max(d[i * sizeY + j], d[i * sizeY + j + 1]);
			temp2 = max(d[(i + 1) * sizeY + j], d[(i + 1) * sizeY + j + 1]);
			dmax = max(temp1, temp2);
			if (dmax >= z[0] && dmin <= z[nc - 1]) {
				for (k = 0; k < nc; k++) {
					if (z[k] >= dmin && z[k] <= dmax) {
						for (m = 4; m >= 0; m--) {
							if (m > 0) {
								h[m] = d[(i + im[m - 1]) * sizeY + j + jm[m - 1]] - z[k];
								xh[m] = x[i + im[m - 1]];
								yh[m] = y[j + jm[m - 1]];
							}
							else {
								h[0] = 0.25 * (h[1] + h[2] + h[3] + h[4]);
								xh[0] = 0.5 * (x[i] + x[i + 1]);
								yh[0] = 0.5 * (y[j] + y[j + 1]);
							}
							if (h[m] > 0.0) {
								sh[m] = 1;
							}
							else if (h[m] < 0.0) {
								sh[m] = -1;
							}
							else
								sh[m] = 0;
						}
						//=================================================================
						
						//
						//
						//             4 +-------------------+ 3
						//               | \               / |
						//               |   \    m=3    /   |
						//               |     \       /     |
						//               |       \   /       |
						//               |  m=2    X   m=2   |       中心是0
						//               |       /   \       |
						//               |     /       \     |
						//               |   /    m=1    \   |
						//               | /               \ |
						//             1 +-------------------+  2
						
						//               搜索三角形上的边缘值
						//
						//=================================================================
						for (m = 1; m <= 4; m++) {
							m1 = m;
							m2 = 0;
							if (m != 4)
								m3 = m + 1;
							else
								m3 = 1;
							case_value = castab[sh[m1] + 1][sh[m2] + 1][sh[m3] + 1];
							if (case_value != 0) {
								switch (case_value) {
									//===========================================================
									//     情况1 - 在 1 和 2 之间有电压值
									//===========================================================
								case 1:
									x1 = xh[m1];
									y1 = yh[m1];
									x2 = xh[m2];
									y2 = yh[m2];
									break;
									//===========================================================
									//     情况2 - 在 2 和 3 之间有电压值
									//===========================================================
								case 2:
									x1 = xh[m2];
									y1 = yh[m2];
									x2 = xh[m3];
									y2 = yh[m3];
									break;
									//===========================================================
									//    情况3 - 在 3 和 1 之间有电压值
									//===========================================================
								case 3:
									x1 = xh[m3];
									y1 = yh[m3];
									x2 = xh[m1];
									y2 = yh[m1];
									break;
									//===========================================================
									//     情况4 - 在 1 和 2 ，3边之间有电压值
									//===========================================================
								case 4:
									x1 = xh[m1];
									y1 = yh[m1];
									x2 = xsect(m2, m3);
									y2 = ysect(m2, m3);
									break;
									//===========================================================
									//     情况5 - 在 2 和 3-5边 之间有电压值
									//===========================================================
								case 5:
									x1 = xh[m2];
									y1 = yh[m2];
									x2 = xsect(m3, m1);
									y2 = ysect(m3, m1);
									break;
									//===========================================================
									//     情况6 - 在 3 和 1-2 边之间有电压值
									//===========================================================
								case 6:
									x1 = xh[m3];
									y1 = yh[m3];
									x2 = xsect(m1, m2);
									y2 = ysect(m1, m2);
									break;
									//===========================================================
									//     情况7 - 在 1-2 和 2-3 之间有电压值
									//===========================================================
								case 7:
									x1 = xsect(m1, m2);
									y1 = ysect(m1, m2);
									x2 = xsect(m2, m3);
									y2 = ysect(m2, m3);
									break;
									//===========================================================
									//    情况8 - 在 2-3 和 3-1 之间有电压值
									//===========================================================
								case 8:
									x1 = xsect(m2, m3);
									y1 = ysect(m2, m3);
									x2 = xsect(m3, m1);
									y2 = ysect(m3, m1);
									break;
									//===========================================================
									//     情况9 - 在 3-1 和 1-2 之间有电压值
									//===========================================================
								case 9:
									x1 = xsect(m3, m1);
									y1 = ysect(m3, m1);
									x2 = xsect(m1, m2);
									y2 = ysect(m1, m2);
									break;
								default:
									break;
								}
								//=============================================================
								// 处理过程： 写坐标，划线
								//=============================================================
								if (write == 1)
								{
									myfile << "电压为：" << std::setw(5) << z[k] << "V; 坐标为：(" << x1 << "," << y1 << ") " << "(行，列)" << std::endl;
								}
								setcolor(RGB((2 * z[k]), abs(z[k]), (255 - 2 * z[k])));
								setlinestyle(PS_SOLID | PS_JOIN_BEVEL, thickness);
								line(y1 * resize_factor, x1 * resize_factor, y2 * resize_factor, x2 * resize_factor);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}


// 画出电极的轮廓和图像的边界 Zi
int draw_electrode(std::vector<double>& array, int sizeX, int sizeY)
{
	setcolor(RGB(255, 255, 255));
	setlinestyle(PS_SOLID | PS_JOIN_BEVEL, 2*resize_factor);
	line(0, 0, sizeY * resize_factor, 0);
	line(0, sizeX * resize_factor, sizeY * resize_factor, sizeX * resize_factor);
	std::vector<int> Ni = Inputdata.Ni;
	int N = Inputdata.N;
	int M2 = Inputdata.M2;
	int column = Ni[0];
	setcolor(RGB(255, 255, 255));
	setlinestyle(PS_SOLID | PS_JOIN_BEVEL, thickness);
	line(column * resize_factor, 0, column * resize_factor, M2 * resize_factor);
	line((column + 1) * resize_factor, 0, (column + 1) * resize_factor, M2 * resize_factor);
	line((column)*resize_factor, M2 * resize_factor, (column + 1) * resize_factor, M2 * resize_factor);
	for (int i = 1; i < N - 1; i++)
	{
		column = column + Ni[i] + 1;
		for (int r = 0; r <= M2; r++)
		{
			line(column * resize_factor, 0, column * resize_factor, r * resize_factor);
			line((column + 1) * resize_factor, 0, (column + 1) * resize_factor, r * resize_factor);
		}
		line((column)*resize_factor, M2 * resize_factor, (column + 1) * resize_factor, M2 * resize_factor);
	}
	return 0;
}

// 电极运行键的结果
void CMy1120170852Dlg::OnBnClickedrun()
{
	
	readdata(); //从文本读取数据
	
	//std::cin >> sizeX; //行数 
	//std::cin >> sizeY; //列数
	sizeX = (int)(Inputdata.M1 + Inputdata.M2) + 1;
	int Nsum = std::accumulate(Inputdata.Ni.begin(), Inputdata.Ni.end(), 0);
	sizeY = Inputdata.N + Nsum;
	std::vector<double> array(sizeX * sizeY, 0.0); // 新建vector存储矩阵
	array = initialize_voltage(array, sizeX, sizeY, Inputdata.M1, Inputdata.M2, Inputdata.Ni, Inputdata.N, Inputdata.Vi);

	int row_r = sizeX;
	// 输出初始矩阵
	myfile << "初始化矩阵：\n";
	myfile << "将像管左下点视为坐标O点，沿水平方向为Z方向，垂直方向为r方向，r从内到外为0到r\n";
	myfile << "R/Z";
	for (int c = 1; c <= sizeY; c = c + Inputdata.NST)
	{
		myfile << std::setw(8) << std::fixed <<  c << " ";
	}
	myfile << std::endl;
	for (int r = 0; r < sizeX; r = r + Inputdata.NST)
	{
		myfile << std::setw(3) << std::fixed << row_r << " ";
		for (int c = 0; c < sizeY; c = c + Inputdata.NST)
		{
			//std::cout << array[r * sizeY + c] << " ";
			myfile << std::setw(8)<<std::setprecision(2) << ("%2d",array[r * sizeY + c]) << " ";
		}
		//std::cout << std::endl;
		myfile << std::endl;
		row_r = row_r - Inputdata.NST;
	}
	myfile << "=====================================================================================================" << std::endl;
	myfile << "\n是否为边界：\n";
	for (int r = 0; r < sizeX; r = r + Inputdata.NST)
	{
		for (int c = 0; c < sizeY; c = c + Inputdata.NST)
		{
			//std::cout << array[r * sizeY + c] << " ";
			myfile << std::setw(4) << int(OnBoundary(r, c, array, sizeX, sizeY, Inputdata.M1, Inputdata.M2, Inputdata.Ni, Inputdata.N, Inputdata.Vi)) << " ";
		}
		myfile << std::endl;

	}

	std::cout << std::endl;

	myfile << "=====================================================================================================" << std::endl;
	myfile << "\n横向间隔\n";

	double gap = 0;
	for (int r = 0; r < sizeX; r = r + 1)
	{
		for (int c = 1; c < sizeY-1; c = c + 1)
		{
			//std::cout << array[r * sizeY + c] << " ";
			gap = h_four(r, c, Inputdata.delta, sizeX, sizeY, Inputdata.M1, Inputdata.M2, Inputdata.r1, Inputdata.r2, Inputdata.Ni, Inputdata.N, Inputdata.dzi)[1];
			myfile << std::setw(8) << std::setprecision(2) << ("%2d", gap)<< " ";
		}
		//std::cout << std::endl;
		myfile << std::endl;
	}

	myfile << "=====================================================================================================" << std::endl;

	myfile << "=====================================================================================================" << std::endl;
	myfile << "\n纵向间隔\n";

	gap = 0;
	for (int r = 0; r < sizeX; r = r + 1)
	{
		for (int c = 1; c < sizeY-1; c = c + 1)
		{
			//std::cout << array[r * sizeY + c] << " ";
			gap = h_four(r, c, Inputdata.delta, sizeX, sizeY, Inputdata.M1, Inputdata.M2, Inputdata.r1, Inputdata.r2, Inputdata.Ni, Inputdata.N, Inputdata.dzi)[2];
			myfile << std::setw(8) << std::setprecision(2) << ("%2d", gap) << " ";
		}
		//std::cout << std::endl;
		myfile << std::endl;
	}

	myfile << "=====================================================================================================" << std::endl;


	// 准备画等位线，准备数据
	double max;
	int i;
	int n_diode = 0; // 记录等位线数量
	std::vector<double> z_vec; // 放置逐项递增电压的扫描电位线电压矩阵
	max = *std::max_element(Inputdata.Vi.begin(), Inputdata.Vi.end()); // 最大电极电压
	if (delta_v_format == 0)
	{
		for (i = Inputdata.deltaV; i <= max; i = i + Inputdata.deltaV)
		{
			if (i == max) break; // 如果电压达到了阴极电压，舍掉
			z_vec.push_back(i); // 将此时的电压放进去
			n_diode = n_diode + 1;
		}
	}

	if (delta_v_format == 1)
	{
		z_vec = Inputdata.init_vec;
		sort(z_vec.begin(), z_vec.end());
		n_diode = z_vec.size();
	}

	// 准备x,y 参数矩阵
	std::vector<double> x_vec;
	std::vector<double> y_vec;
	for (int i = 0; i < sizeX; i++)
	{
		x_vec.push_back(i);
	}
	for (int i = 0; i < sizeY; i++)
	{
		y_vec.push_back(i);
	}


	// SOR区域
	double res; //用来记录上一次的残差
	double lambda; // 两次残差比值
	double omega_m; // Omega_m 最佳迭代因子
	double nu_lambda; //中间变量 nu_lambda
	CString str;
	double omega = 1;
	int global_iter = 1;
	int loop_number = 1;
	if (x_s > sizeY && y_s > sizeX)
	{
		resize_factor = min(round(x_s / sizeY), round(y_s / sizeX));
		if (tianchong == 0) resize_factor--;
	}

	else
	{
		resize_factor = max(((double)sizeY / (double)x_s), ((double)sizeX / (double)y_s));
		resize_factor = 1 / resize_factor;
	}



	int multiM = resize_factor * sizeX; // 宽
	int multiN = resize_factor * sizeY; // 高

	initgraph(multiN, multiM);
	setbkcolor(RGB(38, 50, 56)); // Background color
	//line(1*10, 2*10,3*10,  4*10); // line(c,r,c,r) x,y坐标对应c,r坐标
	
	if (save_img == 1) 
	{
		setbkcolor(RGB(38, 50, 56)); // Background color
		drawline(array,0,sizeX-1,0,sizeY-1,x_vec, y_vec,n_diode,z_vec,sizeX,sizeY,1);
		setlinestyle(PS_SOLID | PS_JOIN_BEVEL, thickness);
		if (save_file == 1)
		{
			draw_electrode(array, sizeX, sizeY);
			saveimage(_T("000.jpg"));
		}// Close the graphics window
	}
	myfile << "============================================== 开始SOR迭代 ===========================================" << std::endl;
	// Omega为1迭代1次
	for (int i = 1; i < 2; i++)
	{
		array = SOR(array, sizeX, sizeY, omega, global_iter,1);
		global_iter = global_iter + 1;
		if (save_img == 1)
		{
			cleardevice();
			drawline(array, 0, sizeX - 1, 0, sizeY - 1, x_vec, y_vec, n_diode, z_vec, sizeX, sizeY,1);
			setlinestyle(PS_SOLID | PS_JOIN_BEVEL, thickness);
			str.Format(_T("%03d"), global_iter);
			if (save_file == 1)
			{
				draw_electrode(array, sizeX, sizeY);
				saveimage(str + _T(".jpg"));
			}
		}
	}
	omega_m = 1.375;
	
	while (1 == 1)
	{
		myfile << "\n -----------------------第" << loop_number << "轮迭代------------------------------\n";
		omega = omega_m;
		for (int i = 1; i < 11; i++)
		{
			array = SOR(array, sizeX, sizeY, omega, global_iter,1);
			global_iter = global_iter + 1;
			if (save_img == 1)
			{
				cleardevice();
				drawline(array, 0, sizeX - 1, 0, sizeY - 1, x_vec, y_vec, n_diode, z_vec, sizeX, sizeY,1);
				setlinestyle(PS_SOLID | PS_JOIN_BEVEL, thickness);
				str.Format(_T("%03d"), global_iter);
				if (save_file == 1)
				{
					draw_electrode(array, sizeX, sizeY);
					saveimage(str + _T(".jpg"));
				}

			}
		}

		array = SOR(array, sizeX, sizeY, omega, global_iter,1); // 第11次
		if (save_img == 1)
		{
			cleardevice();
			drawline(array, 0, sizeX - 1, 0, sizeY - 1, x_vec, y_vec, n_diode, z_vec, sizeX, sizeY,1);
			setlinestyle(PS_SOLID | PS_JOIN_BEVEL, thickness);
			str.Format(_T("%03d"), global_iter);
			if (save_file == 1)
			{
				draw_electrode(array, sizeX, sizeY);
				saveimage(str + _T(".jpg"));
			}
		}
		global_iter = global_iter + 1;
		res = residual;
		array = SOR(array, sizeX, sizeY, omega, global_iter,1); // 第12次
		if (save_img == 1)
		{
			cleardevice();
			drawline(array, 0, sizeX - 1, 0, sizeY - 1, x_vec, y_vec, n_diode, z_vec, sizeX, sizeY,1);
			setlinestyle(PS_SOLID | PS_JOIN_BEVEL, thickness);
			str.Format(_T("%03d"), global_iter);
			if (save_file == 1)
			{
				draw_electrode(array, sizeX, sizeY);
				saveimage(str + _T(".jpg"));
			}
		}
		global_iter = global_iter + 1;
		if (save_img == 1)
		{
			cleardevice();
			drawline(array, 0, sizeX - 1, 0, sizeY - 1, x_vec, y_vec, n_diode, z_vec, sizeX, sizeY,1);
			setlinestyle(PS_SOLID | PS_JOIN_BEVEL, thickness);
			str.Format(_T("%03d"), global_iter);
			if (save_file == 1)
			{
				draw_electrode(array, sizeX, sizeY);
				saveimage(str + _T(".jpg"));
			}
		}
		lambda = residual / res;
		nu_lambda = (lambda + omega - 1) / (std::sqrt(lambda) * omega);
		omega_m = 1.25 * ((2) / (1 + std::sqrt(abs(1 - std::pow(nu_lambda, 2))))) - 0.5;
		loop_number = loop_number + 1;
		if (abs((omega_m - omega) / (2 - omega)) < 0.05)
		{
			omega = omega_m;
			myfile << "--------------------------------------omega值固定--------------------------------------";
			break;
		}
		if (max_residual < Inputdata.e)
			break;
	}
	
	while (1 == 1)
	{
		array = SOR(array, sizeX, sizeY, omega, global_iter,1);
		if (save_img == 1)
		{
			cleardevice();
			drawline(array, 0, sizeX - 1, 0, sizeY - 1, x_vec, y_vec, n_diode, z_vec, sizeX, sizeY,1);
			setlinestyle(PS_SOLID | PS_JOIN_BEVEL, thickness);
			str.Format(_T("%03d"), global_iter);
			if (save_file == 1)
			{
				draw_electrode(array, sizeX, sizeY);
				saveimage(str + _T(".jpg"));
			}
		}
		global_iter = global_iter + 1;
		if (max_residual < Inputdata.e)
			break;
	}

	myfile << "\n--------------------------------------迭代结束！----------------------------------------------\n";
	myfile << "将像管左下点视为坐标O点，沿水平方向为Z方向，垂直方向为r方向，r从内到外为0到r\n";
	myfile << "\n最终电场：\n";
	row_r = sizeX;	
	myfile << "R/Z";
	for (int c = 1; c <= sizeY; c = c + Inputdata.NST) 
	{
		myfile << std::setw(8) << std::fixed << c << " ";
	}
	myfile << std::endl;
	for (int r = 0; r < sizeX; r = r + Inputdata.NST)
	{
		myfile << std::setw(3) << std::fixed << row_r << " ";
		for (int c = 0; c < sizeY; c = c + Inputdata.NST)
		{
			myfile << std::fixed << std::setprecision(2) << std::setw(8) << array[r * sizeY + c] << " ";
		}
		myfile << std::endl;
		row_r = row_r - Inputdata.NST;
	}
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - start;
	myfile<< "\nSOR模块运行时间: " << elapsed_seconds.count() << " 秒\n";
	myfile << "\n===============================================================================================\n";
	myfile << "\n等位线绘制\n";
	HWND initgraph();
	setbkcolor(RGB(38, 50, 56)); // Background color
	cleardevice();
	drawline(array, 0, sizeX - 1, 0, sizeY - 1, x_vec, y_vec, n_diode, z_vec, sizeX, sizeY,1);
	setlinestyle(PS_SOLID | PS_JOIN_BEVEL, thickness);
	draw_electrode(array, sizeX, sizeY);
	lag_array = array;
	saveimage(_T("电场分布-1120170852-李成琦.bmp"));
}


void CMy1120170852Dlg::OnBnClickedprocess()
{
	print_out = 1;
}


void CMy1120170852Dlg::OnBnClickedprocess3()
{
	print_out = 0;
}


void CMy1120170852Dlg::OnBnClickedprocess2()
{
	save_img = 1;
}


void CMy1120170852Dlg::OnBnClickedprocess4()
{
	save_img = 0;
}


void CMy1120170852Dlg::OnBnClickedprocess5()
{
	thickness = 1;
}


void CMy1120170852Dlg::OnBnClickedprocess6()
{
	thickness = 3;// TODO: Add your control notification handler code here
}


void CMy1120170852Dlg::OnBnClickedprocess7()
{
	thickness = 5;// TODO: Add your control notification handler code here
}


void CMy1120170852Dlg::OnBnClickedprocess8()
{
	initialize_function = 1;// TODO: Add your control notification handler code here
}


void CMy1120170852Dlg::OnBnClickedprocess9()
{
	initialize_function = 2;// TODO: Add your control notification handler code here
}



void CMy1120170852Dlg::OnBnClickedprocess10()
{
	save_file = 1;// TODO: Add your control notification handler code here
}


void CMy1120170852Dlg::OnBnClickedprocess11()
{
	save_file = 0;// TODO: Add your control notification handler code here
}


void CMy1120170852Dlg::OnBnClickedButton1()
{
	closegraph();
	// TODO: Add your control notification handler code here
}

// 验证电场定理
void CMy1120170852Dlg::OnBnClickedButton2() 
{
	if (lag_array[0] == 100) CMy1120170852Dlg::OnBnClickedrun();
	sizeX = (int)(Inputdata.M1 + Inputdata.M2) + 1;
	int Nsum = std::accumulate(Inputdata.Ni.begin(), Inputdata.Ni.end(), 0);
	sizeY = Inputdata.N + Nsum;
	std::vector<double> array(sizeX * sizeY, 0.0); // 新建vector存储矩阵
	std::vector<double> sum_array(sizeX * sizeY, 0.0); // 新建和vector存储矩阵

	initgraph(400,200);
	TCHAR text[] = _T("开始验证");
	outtextxy(160, 100,text);
	CString screenout;


	// 准备画等位线，准备数据
	double max;
	int i;
	int n_diode = 0; // 记录等位线数量
	std::vector<double> z_vec; // 放置逐项递增电压的扫描电位线电压矩阵
	max = *std::max_element(Inputdata.Vi.begin(), Inputdata.Vi.end()); // 最大电极电压
	if (delta_v_format == 0)
	{
		for (i = Inputdata.deltaV; i <= max; i = i + Inputdata.deltaV)
		{
			if (i == max) break; // 如果电压达到了阴极电压，舍掉
			z_vec.push_back(i); // 将此时的电压放进去
			n_diode = n_diode + 1;
		}
	}

	if (delta_v_format == 1)
	{
		z_vec = Inputdata.init_vec;
		sort(z_vec.begin(), z_vec.end());
		n_diode = z_vec.size();
	}
	// 准备x,y 参数矩阵
	std::vector<double> x_vec;
	std::vector<double> y_vec;
	for (int i = 0; i < sizeX; i++)
	{
		x_vec.push_back(i);
	}
	for (int i = 0; i < sizeY; i++)
	{
		y_vec.push_back(i);
	}

	// SOR区域
	double res; //用来记录上一次的残差
	double lambda; // 两次残差比值
	double omega_m; // Omega_m 最佳迭代因子
	double nu_lambda; //中间变量 nu_lambda
	double omega = 1;
	int global_iter = 1;
	int loop_number = 1;


	std::vector<double> Vi_sub{0.0}; //电极电位替补，用来测试子集
	for (int num = 0; num < Inputdata.N; num++)
	{
		cleardevice();
		screenout.Format(_T("%01d"), num+1);
		outtextxy(160, 100, screenout);
		outtextxy(140, 100, _T("第"));
		outtextxy(180, 100, _T("块区域计算"));
		myfile << "\n只有第" << num + 1 << "个电极时\n";
		Vi_sub.clear(); // 清空子集的内容
		Vi_sub.insert(Vi_sub.begin(), Inputdata.N, 0.0);
		Vi_sub[num] = Inputdata.Vi[num];
		//初始化array
		array = initialize_voltage(array, sizeX, sizeY, Inputdata.M1, Inputdata.M2, Inputdata.Ni, Inputdata.N, Vi_sub);
		// Omega为1迭代1次
		for (int i = 1; i < 2; i++)
		{
			array = SOR(array, sizeX, sizeY, omega, global_iter,0);
			global_iter = global_iter + 1;
		}
		omega_m = 1.375;

		while (1 == 1)
		{
			omega = omega_m;
			for (int i = 1; i < 11; i++)
			{
				array = SOR(array, sizeX, sizeY, omega, global_iter,0);
				global_iter = global_iter + 1;
			}

			array = SOR(array, sizeX, sizeY, omega, global_iter,0); // 第11次
			global_iter = global_iter + 1;
			res = residual;
			array = SOR(array, sizeX, sizeY, omega, global_iter,0); // 第12次
			global_iter = global_iter + 1;
			lambda = residual / res;
			nu_lambda = (lambda + omega - 1) / (std::sqrt(lambda) * omega);
			omega_m = 1.25 * ((2) / (1 + std::sqrt(1 - std::pow(nu_lambda, 2)))) - 0.5;
			loop_number = loop_number + 1;
			if (std::abs((omega_m - omega) / (2 - omega)) < 0.05)
			{
				omega = omega_m;
				break;
			}
			if (max_residual < Inputdata.e)
				break;
		}


		while (1 == 1)
		{
			array = SOR(array, sizeX, sizeY, omega, global_iter,0);
			global_iter = global_iter + 1;
			if (max_residual < Inputdata.e)
				break;
		}

		myfile << "\n电场：\n";
		for (int r = 0; r < sizeX; r = r + Inputdata.NST)
		{
			for (int c = 0; c < sizeY; c = c + Inputdata.NST)
			{
				myfile << std::fixed << std::setprecision(2) << std::setw(8) << array[r * sizeY + c] << " ";
			}
			myfile << std::endl;
		}
		for (int r = 0; r < sizeX; r = r + 1)
		{
			for (int c = 0; c < sizeY; c = c + 1)
			{
				sum_array[r * sizeY + c] = sum_array[r * sizeY + c] + array[r * sizeY + c];
			}
		}


	}
	myfile << "\n最终和电场：\n";
	for (int r = 0; r < sizeX; r = r + Inputdata.NST)
	{
		for (int c = 0; c < sizeY; c = c + Inputdata.NST)
		{
			myfile << std::fixed << std::setprecision(2) << std::setw(8) << sum_array[r * sizeY + c] << " ";
		}
		myfile << std::endl;
	}

	myfile << "绝对值差矩阵：\n";
	double max_diff = 0; // 最大误差
	double aver_diff = 0; // 平均绝对误差
	double rms_diff = 0; // 均方根
	for (int r = 0; r < sizeX; r = r + 1)
	{
		for (int c = 0; c < sizeY; c = c + 1)
		{
			myfile << std::fixed << std::setprecision(8) << std::setw(4) << abs(sum_array[r * sizeY + c] - lag_array[r * sizeY + c]) << " ";
			if (abs(sum_array[r * sizeY + c] - lag_array[r * sizeY + c]) > max_diff) max_diff = abs(sum_array[r * sizeY + c] - lag_array[r * sizeY + c]);
			aver_diff = aver_diff + abs(sum_array[r * sizeY + c] - lag_array[r * sizeY + c]);
		}
		myfile << std::endl;
	}
	aver_diff = aver_diff / (sizeX * sizeY);
	myfile << "最大绝对误差：" <<std::setprecision(8) << std::setw(4) << max_diff<< std::endl;
	myfile << "平均绝对误差：" << std::setprecision(8) << std::setw(4) << aver_diff << std::endl;

	for (int r = 0; r < sizeX; r = r + 1)
	{
		for (int c = 0; c < sizeY; c = c + 1)
		{
			rms_diff = rms_diff + pow((sum_array[r * sizeY + c] - lag_array[r * sizeY + c]), 2);
		}
	}
	rms_diff = rms_diff / (sizeX * sizeY);
	rms_diff = sqrt(rms_diff);
	myfile << "均方根误差：" << std::setprecision(8) << std::setw(4) << rms_diff << std::endl;
	myfile << std::endl;

	int multi = 0;
	int multiM = resize_factor * sizeX;
	int multiN = resize_factor * sizeY;

	initgraph(multiN, multiM);	
	setbkcolor(RGB(38, 50, 56)); // Background color
	
	setlinestyle(PS_SOLID | PS_JOIN_BEVEL, thickness);
	drawline(sum_array, 0, sizeX - 1, 0, sizeY - 1, x_vec, y_vec, n_diode, z_vec, sizeX, sizeY,0);
	draw_electrode(sum_array, sizeX, sizeY);
	saveimage(_T("电场验证-1120170852-李成琦.bmp"));
}

double getresult(std::vector<double>& x, std::vector<double>& y,  int number, double val)
// 拉格朗日插值
{
	double result = 0.0;                  // 返回值初始化
	double upperpart, lowerpart;		  // 分子分母
	int start = 0, end = 0;;			  // 查找元素位置初始化
	start = max(0, number - 1);			  // 从这个元素开始前两位查找，如果小于2，从0开始
	end = min(y.size() - 1, start + 2);	  // 同理，查找结束位置，如果大于最后一个元素只查到最后一个元素
	if (end - start < 2) start = start - (2 - (end-start));
	for (int i = start; i < end; i++)
	{
		upperpart = lowerpart = 1;
		for (int j = start; j < end; j++)
		{
			if (i == j)                    // 如果插到这个元素自己，就为1
			{
				upperpart *= 1;
				lowerpart *= 1;
			}
			else
			{
				upperpart *= (val - x[j]);
				lowerpart *= (x[i] - x[j]);
			}
		}
		result += y[i] * (upperpart / lowerpart);
	}
	return result;
}

void CMy1120170852Dlg::OnBnClickedButton3() //拉格朗日插值图像输出
{
	if (lag_array[0] == 100) CMy1120170852Dlg::OnBnClickedrun();
	std::vector<double> a; // 获得两点距离
	std::vector<double> x{0}; // 初始第一个点为0
	std::vector<double> y(sizeY,0.0);
	double sum = Inputdata.dzi[0]/Inputdata.Ni[0]; 
	for (int c = 0; c < sizeY; c ++)
	{
		y[c] = lag_array[(sizeX - 1) * sizeY + c];
	}
	for (int c = 0; c < sizeY - 1; c++)
	{
		a = h_four(sizeX - 1, c, Inputdata.delta, sizeX, sizeY, Inputdata.M1, Inputdata.M2, Inputdata.r1, Inputdata.r2, Inputdata.Ni, Inputdata.N, Inputdata.dzi);
		sum = sum + a[1];
		x.push_back(sum);
	}
	for (int c = 0; c < sizeY ; c++)
	{
		myfile<<"\n第" << c+1 << "个 x:" << x[c] << " y:" << y[c];	
	}

	int locator = 0;
	myfile << "\n\nlagrange 插值\n\n";
	int interval = Inputdata.INS; // 输出间隔
	double get_val = x[x.size() - 1] / interval; // 间隔
	std::vector<double> x_row{0};
	std::vector<double> y_row{0};
	for (int i = 1; i < interval; i++)
	{	
		locator = 0;
		while (x[locator] < get_val) locator = locator + 1;
		locator = locator - 1;
		//myfile << "最近的点是：" << locator << " 电压值为：" << y[locator]<< " 要插的位置是："<<get_val;
		x_row.push_back(get_val);
		y_row.push_back(getresult(x, y, locator, get_val));
		myfile <<"  第"<<i << "个：(" << get_val<< "," << y_row[i] << ")" << std::endl;
		get_val = get_val + x[x.size() - 1] / interval;
	}

	/*
	for (int i = 1; i < interval; i++)
	{
		myfile << x_row[i] << std::endl;
	}
	for (int i = 1; i < interval; i++)
	{
		myfile << y_row[i]<<std::endl;
	}
	*/

	int multiM = resize_factor * sizeX;
	int multiN = resize_factor * sizeY;
	initgraph(multiN, multiM);
	setlinestyle(PS_SOLID | PS_JOIN_BEVEL, 3);
	setcolor(RGB(210,215,25));
	double maxX = *max_element(x_row.begin(), x_row.end());
	double maxY = *max_element(y_row.begin(), y_row.end());
	int resize_window = min(round((multiM-10) /(maxY)), round((multiN-10) / (maxX)));
	int resize_x = round((multiN - 10) / (maxX));
	resize_window -= 1;
	resize_x -= 1;
	for (int i = 0; i < interval - 1; i++)
	{
		line(10 + (x_row[i]*resize_x) , multiM - 10 -  (y_row[i]) * resize_window,  10 + (x_row[i + 1]) * resize_x, multiM - 10 - (y_row[i + 1] ) * resize_window);
	}

	setlinestyle(PS_SOLID | PS_JOIN_BEVEL, 3);
	setcolor(RGB(255, 255, 255));
	line(10, 10 , 10 , multiM - 10 ); // y轴
	line(10 , multiM-10 , multiN-10 , multiM-10 ); //x轴
	TCHAR c = _T('Z');
	TCHAR c2 = _T('V');
	TCHAR s[] = _T("Lagrange插值结果 1120170852 李成琦");
	settextstyle(25, 0, _T("Consolas"));
	outtextxy(round(multiN/2-10), 30, s);
	outtextxy(multiN - 30, multiM - 30, c);
	outtextxy(30, 30, c2);
	//line(30 * 5, 10 * 5, 30 * 5, multiM - 30 * 5); // y轴
	//line(30 * 5, multiM - 30 * 5, multiN - 90 * 5, multiM - 30 * 5); //x轴

	saveimage(_T("Lagrange插值-1120170852-李成琦.bmp"));
	// 打卡收工
}
