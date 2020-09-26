
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

std::ofstream myfile; // д���ı�
int sizeY, sizeX; // ��ʼ�ռ����
double residual = 0.0; // �в���
double max_residual = 0.0; // ���в�
double resize_factor = 0; // �������ų���
bool print_out = 0; // �Ƿ����м���̾��� 0 �����
bool save_img = 0; // �Ƿ���ʾͼƬ
int initialize_function = 1; //��ʼ����ʽ
bool save_file = 0;
std::vector<double>lag_array{ 100 };
bool delta_v_format = 0;
int x_s;   // ��Ļ��  
int y_s;   // ��Ļ��
int thickness = 5;
bool tianchong = 0;

void CMy1120170852Dlg::OnBnClickedCancel()
{
	// TODO: Add your control notification handler code here
	myfile.close();// д��ֹͣ 
	CDialogEx::OnCancel();
}

#define xsect(p1,p2) (h[p2]*xh[p1]-h[p1]*xh[p2])/(h[p2]-h[p1])
#define ysect(p1,p2) (h[p2]*yh[p1]-h[p1]*yh[p2])/(h[p2]-h[p1])
#define min(x,y) (x<y?x:y)
#define max(x,y) (x>y?x:y)
auto start = std::chrono::system_clock::now();



struct data {

	int N{ 0 }; //�缫����
	double delta{ 0.0 }; //�缫��ȣ�mm��
	std::vector<double> dzi{};//���ڵ缫�����
	std::vector<int> Ni{};//���ڵ缫֮��Ҫ���ֵĲ�����
	std::vector<double> Vi{}; //�缫��λ
	int r1{ 0 }; //�缫�ڿ׾��뾶��mm�������е缫�ڿ׾��뾶��ͬ
	int M1{ 0 }; //r1��Χ�ڵȲ������ֵ�������
	int r2{ 0 }; //�ӵ缫�ڿױ��ص���ձ߽紦�ľ������
	int M2{ 0 }; //r2��Χ�ڵȲ������ֵ�������
	double e{ 0.0 }; //�������ƾ���
	int NST{ 1 }; //�����ӡ�ռ��λʱ������������� NST=1��ȫ����ӡ��NST=2�����и��д�ӡ����������
	int INS{ 0 }; //���ϵ�λ���Ⱦ��ֵʱ�Ĳ�����
	int deltaV{ 0 }; //Ҫ��ɨ�������ȵ�λ�ߵĵ�λ���ֵ
	std::vector<double> init_vec; // ���������ض�ֵ��λ��
}Inputdata;;

//�������ı���ȡ���ݴ���struct
int readdata()
{
	// �ж��ļ����Ƿ���ڲ������ļ���

	std::time_t start_time = std::chrono::system_clock::to_time_t(start);
	HDC hDC = ::GetDC(HWND(NULL));               // �õ���ĻDC  
	x_s = ::GetDeviceCaps(hDC, HORZRES);       // ��  
	y_s = ::GetDeviceCaps(hDC, VERTRES);        // ��   
	::ReleaseDC(HWND(NULL), hDC);                  // �ͷ�DC

	myfile.open("D:\\CADtest\\1120170852\\�����_1120170852.res");
	std::ifstream myFileStream("data.dat");
	if (!myFileStream.is_open()) 
	{
		std::cout << "�ļ���ʧ�ܣ��ļ������ڣ�\n��ȷ�������ļ���ͬһĿ¼�£�" << std::endl;
		return 0;
	}

	std::string temp;
	std::string line;
	getline(myFileStream, line);
	std::stringstream ss(line);
	getline(ss, temp, ';');
	Inputdata.delta = std::stod(temp);// ��ȡdelta
	myfile << "ģ�����FDM�������\n���ߣ������ ";
	myfile << std::ctime(&start_time) << std::endl;
	myfile << "==============================================================================================\n " << std::endl;
	myfile << "��������\n";
	myfile << "�缫��ȣ�mm��Delta = " << Inputdata.delta << std::endl;
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.N = std::stoi(temp);// ��ȡN
	myfile << "�缫���� N = " << Inputdata.N << std::endl;
	std::vector<int> initialize(Inputdata.N, 0);
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	Inputdata.dzi.insert(Inputdata.dzi.end(), initialize.begin(), initialize.end()); //��ʼ��delta vector

	// ��ȡdelta z
	myfile << "���ڵ缫����(mm) Delta Z = ";
	for (int iter = 0; iter < Inputdata.N; iter++)
	{
		getline(ss, temp, ',');
		Inputdata.dzi[iter] = stod(temp);
		myfile << Inputdata.dzi[iter] << " ";
	}
	myfile << std::endl;

	// ��ȡNi
	myfile << "ÿһ����Z��Χ�ڲ��� Ni = ";
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

	//��ȡVi
	myfile << "ÿ���缫�ĵ�λ Vi = ";
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


	//��ȡdelta_R1
	myfile << "�缫�ڿ׾��뾶��mm��Delta R1 = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.r1 = stoi(temp);
	myfile << Inputdata.r1 << std::endl;

	//��ȡdelta_R2
	myfile << "�缫�ڿױ��ص���ձ߽紦�ľ������ Delta R2 = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.r2 = stoi(temp);
	myfile << Inputdata.r2 << std::endl;

	//��ȡM1
	myfile << "��r1��Χ�ڵȲ������ֵ������� M1 = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.M1 = stoi(temp);
	myfile << Inputdata.M1 << std::endl;

	//��ȡM2
	myfile << "��r2��Χ�ڵȲ������ֵ������� M2 = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.M2 = stoi(temp);
	myfile << Inputdata.M2 << std::endl;

	//��ȡepsilon
	myfile << "�������ƾ��� epsilon = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.e = stod(temp);
	myfile << Inputdata.e << std::endl;

	//��ȡNST
	myfile << "�����ӡ�ռ��λʱ��������� NST = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.NST = stoi(temp);
	myfile << Inputdata.NST << std::endl;
	if (Inputdata.NST == 0)
	{
		myfile << "\n�����д�����NST, NST����Ϊ0";
		exit(1);
	}

	//��ȡ
	myfile << "���ϵ�λ���Ⱦ��ֵʱ�Ĳ����� INS = ";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	Inputdata.INS = stoi(temp);
	myfile << Inputdata.INS << std::endl;

	//��ȡdelta_V
	myfile << "Ҫ��ɨ�������ȵ�λ�ߵĵ�λ���ֵ Delta_V ��";
	getline(myFileStream, line);
	ss.clear();
	ss.str(line);
	getline(ss, temp, ';');
	int temp_int = stoi(temp);
	if(temp_int == 1)
	{
		delta_v_format = 0; // ��ʾ��ʱdelta_v �Լ����ѹ��ʽ����
		getline(myFileStream, line);
		ss.clear();
		ss.str(line);
		getline(ss, temp, ';');
		Inputdata.deltaV = stoi(temp);
		myfile << "��ѹ���(V) ";
		myfile << Inputdata.deltaV << std::endl << std::endl;
	}
	if (temp_int == 2)
	{
		delta_v_format = 1; // ��ʾ��ʱ���ض�ֵ����
		getline(myFileStream, line);
		ss.str(line);
		myfile << "�ض�ֵ�� ";
		while (getline(ss, temp, ','))
		{
			Inputdata.init_vec.push_back(stoi(temp));
			myfile << stoi(temp) << ";";
		}
		myfile << std::endl;
	}
	myfile << "=====================================================================================================";
	myfile <<"\n\n";

	//�ļ��ر�
	myFileStream.close();

}
//���r,c�ڱ߽��ϣ�����True, ��֮�򷵻� False	
//�����б߽缰������һ��
bool OnBoundary(int r, int c, std::vector<double>& array, int sizeX, int sizeY, int M1, int M2, std::vector<int>& Ni, int N, std::vector<double>& Vi) {

	if ((c == 0) || (c == sizeY - 1) || (r == 0)) {
		return 1;
	}
	// �°벿��
	if (r > M2)
	{
		return 0;
	}

	//��һ��
	if ((r <= M2) && ((c == Ni[0]) || (c == Ni[0] + 1)))
	{
		return 1;
	}

	//�м�缫
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


// ���缫���������ʼ��Ϊ��λֵ
std::vector<double> initialize_voltage(std::vector<double>& array, int sizeX, int sizeY, int M1, int M2, std::vector<int>& Ni, int N, std::vector<double>& Vi)
{
	if (initialize_function == 1) {
		// ��һ���缫
		for (int r = 0; r <= M2; r++)
		{
			array[r * sizeY + Ni[0]] = Vi[0];
			array[r * sizeY + Ni[0] + 1] = Vi[0];
		}
		// ��һ���߳�
		for (int r = 0; r <= M2 + M1; r++)
		{
			for (int c = 1; c < Ni[0]; c++)
			{
				array[0 * sizeY + c] = Vi[0] / Ni[0] * c;
			}
		}
		// �м�缫
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
		// �м����
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

		// �������
		int Nsum = std::accumulate(Ni.begin(), Ni.end(), 0);
		for (int r = 0; r <= M2 + M1; r++)
		{
			array[r * sizeY + Nsum + N - 1] = Vi[N - 1];
		}

		//�����������
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
		// ��һ���缫
		for (int r = 0; r <= M2 + M1; r++)
		{
			array[r * sizeY + Ni[0]] = Vi[0];
			array[r * sizeY + Ni[0] + 1] = Vi[0];
		}
		// ��һ���߳�
		for (int r = 0; r <= M2 + M1; r++)
		{
			for (int c = 1; c < Ni[0]; c++)
			{
				array[r * sizeY + c] = Vi[0] / Ni[0] * c;
			}
		}
		// �м�缫
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
		// �м����
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

		// �������
		int Nsum = std::accumulate(Ni.begin(), Ni.end(), 0);
		for (int r = 0; r <= M2 + M1; r++)
		{
			array[r * sizeY + Nsum + N - 1] = Vi[N - 1];
		}

		//�����������
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

// �������꣬���Ͻ�Ϊ��0��0�������ÿ�������Ӧ��h1,h2,h3,h4, ���Ϊvector����
std::vector<double> h_four(int r, int c, double delta, int sizeX, int sizeY, int M1, int M2, int r1, int r2, std::vector<int>& Ni, int N, std::vector<double>& dzi)
{
	double h_1 = 0.0, h_2 = 0.0, h_3 = 0.0 , h_4 = 0.0;
	// ��һ������������
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

	// ���һ���缫����
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

	// �м�缫

	int column = 0;
	int iter = 1;
	int last_column = 0;
	int next_column = 0;
	for (int i = 1; i < N - 1; i++) // ��ÿ���缫���һ��
	{
		int n = 1;
		column = Ni[i - 1] + column;
		last_column = column + iter + 1;
		next_column = column + Ni[i] + iter + 1;
		if ((c >= last_column) && (c <= next_column)) // ��ǰһ���缫�Ҳ�һ��������缫�ڶ���ĵ�ķ�Χ��
		{
			if (c == next_column) // ���������缫���Ҳ��Ǹ���
			{
				h_1 = delta;
				h_2 = dzi[i + 1] / Ni[i + 1];
				h_3 = (double)r1 / M1;
				h_4 = (double)r1 / M1;
			}
			if (c == next_column - 1) // ���������缫�����Ǹ���
			{
				h_1 = dzi[i] / Ni[i];
				h_2 = delta;
				h_3 = (double)r1 / M1;
				h_4 = (double)r1 / M1;
			}
			if ((c >= last_column) && (c <= next_column - 2)) // ���������缫���м�
			{
				if (r < M2) // �ֽ���֮��
				{
					h_1 = dzi[i] / Ni[i];
					h_2 = dzi[i] / Ni[i];
					h_3 = (double)r2 / M2;
					h_4 = (double)r2 / M2;
				}
				if (r == M2) // �ֽ�����
				{
					h_1 = dzi[i] / Ni[i];
					h_2 = dzi[i] / Ni[i];
					h_3 = (double)r2 / M2;
					h_4 = (double)r1 / M1;
				}
				if (r > M2) // �ֽ���֮��
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

// ����c���㣬�������꣬���������Ӧ��SOR��ʹ�õĳ���c1,c2,c3,c4,c0
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
	return result; // �������c��ֵ����Vector��ʽ
}

// SOR�㷨ģ��
std::vector<double> SOR(std::vector<double>& array, int sizeX, int sizeY, double omega, int i, bool write)
{
	max_residual = 0.0;
	double c_0, c_1, c_2, c_3, c_4;
	double internal_c; //��������в�
	std::vector<double> c_containter = { 0, 0, 0, 0, 0 };
	residual = 0;
	for (int r = 0; r < sizeX; r++)
	{
		for (int c = 0; c < sizeY - 1; c++)
		{
			if (OnBoundary(r, c, array, sizeX, sizeY, Inputdata.M1, Inputdata.M2, Inputdata.Ni, Inputdata.N, Inputdata.Vi) == 0) // ������Ǳ߽��
			{

				c_containter = constant_four(r, c, array, sizeX, sizeY); // ������c��ֵ��vector
				c_0 = c_containter[0];
				c_1 = c_containter[1];
				c_2 = c_containter[2];
				c_3 = c_containter[3];
				c_4 = c_containter[4]; 
				internal_c = array[r * sizeY + c]; // ԭʼֵ�浽�м������
				if (r == sizeX - 1) // ǰ��������
				{
					array[r * sizeY + c] = (1 - omega) * array[r * sizeY + c] + (omega / c_0) * (c_1 * array[r * sizeY + c - 1] + c_2 * array[r * sizeY + c + 1] + c_4 * array[(r - 1) * sizeY + c]);
				}
				else if (r != sizeX - 1) // ���һ�п��ǵ�û����һ�У���������
				{
					array[r * sizeY + c] = (1 - omega) * array[r * sizeY + c] + (omega / c_0) * (c_1 * array[r * sizeY + c - 1] + c_2 * array[r * sizeY + c + 1] + c_3 * array[(r + 1) * sizeY + c] + c_4 * array[(r - 1) * sizeY + c]);
				}
				residual = residual + abs(internal_c - array[r * sizeY + c]);
				if (abs(internal_c - array[r * sizeY + c]) > max_residual)
				{
					max_residual = abs(internal_c - array[r * sizeY + c]); // ���в�����
				}
			}

		}

	}
	residual = residual / (sizeX * sizeY); //����в�
	if (write == 1) 
	{
		myfile << "\n��" << i << "�ε��� " << "\nOmega(��)ȡ��" << std::fixed << std::setprecision(5) << omega << " ";
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
		myfile << "�в�: " << std::fixed << std::setprecision(10) << residual << " ";
		myfile << "���в�: " << std::fixed << std::setprecision(10) << max_residual << std::endl;
	}
	return array;
}

// ��λ�����꺯�� ���������ԭʼ��������������Сֵ����ѹ�������ѹ����
int drawline(std::vector<double>& d,int ilb,int iub,int jlb,int jub,std::vector<double>& x,std::vector<double>& y,int nc,std::vector<double>& z,int sizeX,int sizeY,bool write)

// d               ! ���ݾ���
// ilb,iub,jlb,jub ! ����Ĳ���
// x               ! ������
// y               ! ������
// nc              ! �ȼ���
// z               ! ��Ҫ�缫�ĵ�ѹvector
// sizeX           ! ����
// size Y          ! ����
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
						//               |  m=2    X   m=2   |       ������0
						//               |       /   \       |
						//               |     /       \     |
						//               |   /    m=1    \   |
						//               | /               \ |
						//             1 +-------------------+  2
						
						//               �����������ϵı�Եֵ
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
									//     ���1 - �� 1 �� 2 ֮���е�ѹֵ
									//===========================================================
								case 1:
									x1 = xh[m1];
									y1 = yh[m1];
									x2 = xh[m2];
									y2 = yh[m2];
									break;
									//===========================================================
									//     ���2 - �� 2 �� 3 ֮���е�ѹֵ
									//===========================================================
								case 2:
									x1 = xh[m2];
									y1 = yh[m2];
									x2 = xh[m3];
									y2 = yh[m3];
									break;
									//===========================================================
									//    ���3 - �� 3 �� 1 ֮���е�ѹֵ
									//===========================================================
								case 3:
									x1 = xh[m3];
									y1 = yh[m3];
									x2 = xh[m1];
									y2 = yh[m1];
									break;
									//===========================================================
									//     ���4 - �� 1 �� 2 ��3��֮���е�ѹֵ
									//===========================================================
								case 4:
									x1 = xh[m1];
									y1 = yh[m1];
									x2 = xsect(m2, m3);
									y2 = ysect(m2, m3);
									break;
									//===========================================================
									//     ���5 - �� 2 �� 3-5�� ֮���е�ѹֵ
									//===========================================================
								case 5:
									x1 = xh[m2];
									y1 = yh[m2];
									x2 = xsect(m3, m1);
									y2 = ysect(m3, m1);
									break;
									//===========================================================
									//     ���6 - �� 3 �� 1-2 ��֮���е�ѹֵ
									//===========================================================
								case 6:
									x1 = xh[m3];
									y1 = yh[m3];
									x2 = xsect(m1, m2);
									y2 = ysect(m1, m2);
									break;
									//===========================================================
									//     ���7 - �� 1-2 �� 2-3 ֮���е�ѹֵ
									//===========================================================
								case 7:
									x1 = xsect(m1, m2);
									y1 = ysect(m1, m2);
									x2 = xsect(m2, m3);
									y2 = ysect(m2, m3);
									break;
									//===========================================================
									//    ���8 - �� 2-3 �� 3-1 ֮���е�ѹֵ
									//===========================================================
								case 8:
									x1 = xsect(m2, m3);
									y1 = ysect(m2, m3);
									x2 = xsect(m3, m1);
									y2 = ysect(m3, m1);
									break;
									//===========================================================
									//     ���9 - �� 3-1 �� 1-2 ֮���е�ѹֵ
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
								// ������̣� д���꣬����
								//=============================================================
								if (write == 1)
								{
									myfile << "��ѹΪ��" << std::setw(5) << z[k] << "V; ����Ϊ��(" << x1 << "," << y1 << ") " << "(�У���)" << std::endl;
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


// �����缫��������ͼ��ı߽� Zi
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

// �缫���м��Ľ��
void CMy1120170852Dlg::OnBnClickedrun()
{
	
	readdata(); //���ı���ȡ����
	
	//std::cin >> sizeX; //���� 
	//std::cin >> sizeY; //����
	sizeX = (int)(Inputdata.M1 + Inputdata.M2) + 1;
	int Nsum = std::accumulate(Inputdata.Ni.begin(), Inputdata.Ni.end(), 0);
	sizeY = Inputdata.N + Nsum;
	std::vector<double> array(sizeX * sizeY, 0.0); // �½�vector�洢����
	array = initialize_voltage(array, sizeX, sizeY, Inputdata.M1, Inputdata.M2, Inputdata.Ni, Inputdata.N, Inputdata.Vi);

	int row_r = sizeX;
	// �����ʼ����
	myfile << "��ʼ������\n";
	myfile << "��������µ���Ϊ����O�㣬��ˮƽ����ΪZ���򣬴�ֱ����Ϊr����r���ڵ���Ϊ0��r\n";
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
	myfile << "\n�Ƿ�Ϊ�߽磺\n";
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
	myfile << "\n������\n";

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
	myfile << "\n������\n";

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


	// ׼������λ�ߣ�׼������
	double max;
	int i;
	int n_diode = 0; // ��¼��λ������
	std::vector<double> z_vec; // �������������ѹ��ɨ���λ�ߵ�ѹ����
	max = *std::max_element(Inputdata.Vi.begin(), Inputdata.Vi.end()); // ���缫��ѹ
	if (delta_v_format == 0)
	{
		for (i = Inputdata.deltaV; i <= max; i = i + Inputdata.deltaV)
		{
			if (i == max) break; // �����ѹ�ﵽ��������ѹ�����
			z_vec.push_back(i); // ����ʱ�ĵ�ѹ�Ž�ȥ
			n_diode = n_diode + 1;
		}
	}

	if (delta_v_format == 1)
	{
		z_vec = Inputdata.init_vec;
		sort(z_vec.begin(), z_vec.end());
		n_diode = z_vec.size();
	}

	// ׼��x,y ��������
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


	// SOR����
	double res; //������¼��һ�εĲв�
	double lambda; // ���βв��ֵ
	double omega_m; // Omega_m ��ѵ�������
	double nu_lambda; //�м���� nu_lambda
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



	int multiM = resize_factor * sizeX; // ��
	int multiN = resize_factor * sizeY; // ��

	initgraph(multiN, multiM);
	setbkcolor(RGB(38, 50, 56)); // Background color
	//line(1*10, 2*10,3*10,  4*10); // line(c,r,c,r) x,y�����Ӧc,r����
	
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
	myfile << "============================================== ��ʼSOR���� ===========================================" << std::endl;
	// OmegaΪ1����1��
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
		myfile << "\n -----------------------��" << loop_number << "�ֵ���------------------------------\n";
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

		array = SOR(array, sizeX, sizeY, omega, global_iter,1); // ��11��
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
		array = SOR(array, sizeX, sizeY, omega, global_iter,1); // ��12��
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
			myfile << "--------------------------------------omegaֵ�̶�--------------------------------------";
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

	myfile << "\n--------------------------------------����������----------------------------------------------\n";
	myfile << "��������µ���Ϊ����O�㣬��ˮƽ����ΪZ���򣬴�ֱ����Ϊr����r���ڵ���Ϊ0��r\n";
	myfile << "\n���յ糡��\n";
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
	myfile<< "\nSORģ������ʱ��: " << elapsed_seconds.count() << " ��\n";
	myfile << "\n===============================================================================================\n";
	myfile << "\n��λ�߻���\n";
	HWND initgraph();
	setbkcolor(RGB(38, 50, 56)); // Background color
	cleardevice();
	drawline(array, 0, sizeX - 1, 0, sizeY - 1, x_vec, y_vec, n_diode, z_vec, sizeX, sizeY,1);
	setlinestyle(PS_SOLID | PS_JOIN_BEVEL, thickness);
	draw_electrode(array, sizeX, sizeY);
	lag_array = array;
	saveimage(_T("�糡�ֲ�-1120170852-�����.bmp"));
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

// ��֤�糡����
void CMy1120170852Dlg::OnBnClickedButton2() 
{
	if (lag_array[0] == 100) CMy1120170852Dlg::OnBnClickedrun();
	sizeX = (int)(Inputdata.M1 + Inputdata.M2) + 1;
	int Nsum = std::accumulate(Inputdata.Ni.begin(), Inputdata.Ni.end(), 0);
	sizeY = Inputdata.N + Nsum;
	std::vector<double> array(sizeX * sizeY, 0.0); // �½�vector�洢����
	std::vector<double> sum_array(sizeX * sizeY, 0.0); // �½���vector�洢����

	initgraph(400,200);
	TCHAR text[] = _T("��ʼ��֤");
	outtextxy(160, 100,text);
	CString screenout;


	// ׼������λ�ߣ�׼������
	double max;
	int i;
	int n_diode = 0; // ��¼��λ������
	std::vector<double> z_vec; // �������������ѹ��ɨ���λ�ߵ�ѹ����
	max = *std::max_element(Inputdata.Vi.begin(), Inputdata.Vi.end()); // ���缫��ѹ
	if (delta_v_format == 0)
	{
		for (i = Inputdata.deltaV; i <= max; i = i + Inputdata.deltaV)
		{
			if (i == max) break; // �����ѹ�ﵽ��������ѹ�����
			z_vec.push_back(i); // ����ʱ�ĵ�ѹ�Ž�ȥ
			n_diode = n_diode + 1;
		}
	}

	if (delta_v_format == 1)
	{
		z_vec = Inputdata.init_vec;
		sort(z_vec.begin(), z_vec.end());
		n_diode = z_vec.size();
	}
	// ׼��x,y ��������
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

	// SOR����
	double res; //������¼��һ�εĲв�
	double lambda; // ���βв��ֵ
	double omega_m; // Omega_m ��ѵ�������
	double nu_lambda; //�м���� nu_lambda
	double omega = 1;
	int global_iter = 1;
	int loop_number = 1;


	std::vector<double> Vi_sub{0.0}; //�缫��λ�油�����������Ӽ�
	for (int num = 0; num < Inputdata.N; num++)
	{
		cleardevice();
		screenout.Format(_T("%01d"), num+1);
		outtextxy(160, 100, screenout);
		outtextxy(140, 100, _T("��"));
		outtextxy(180, 100, _T("���������"));
		myfile << "\nֻ�е�" << num + 1 << "���缫ʱ\n";
		Vi_sub.clear(); // ����Ӽ�������
		Vi_sub.insert(Vi_sub.begin(), Inputdata.N, 0.0);
		Vi_sub[num] = Inputdata.Vi[num];
		//��ʼ��array
		array = initialize_voltage(array, sizeX, sizeY, Inputdata.M1, Inputdata.M2, Inputdata.Ni, Inputdata.N, Vi_sub);
		// OmegaΪ1����1��
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

			array = SOR(array, sizeX, sizeY, omega, global_iter,0); // ��11��
			global_iter = global_iter + 1;
			res = residual;
			array = SOR(array, sizeX, sizeY, omega, global_iter,0); // ��12��
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

		myfile << "\n�糡��\n";
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
	myfile << "\n���պ͵糡��\n";
	for (int r = 0; r < sizeX; r = r + Inputdata.NST)
	{
		for (int c = 0; c < sizeY; c = c + Inputdata.NST)
		{
			myfile << std::fixed << std::setprecision(2) << std::setw(8) << sum_array[r * sizeY + c] << " ";
		}
		myfile << std::endl;
	}

	myfile << "����ֵ�����\n";
	double max_diff = 0; // ������
	double aver_diff = 0; // ƽ���������
	double rms_diff = 0; // ������
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
	myfile << "��������" <<std::setprecision(8) << std::setw(4) << max_diff<< std::endl;
	myfile << "ƽ��������" << std::setprecision(8) << std::setw(4) << aver_diff << std::endl;

	for (int r = 0; r < sizeX; r = r + 1)
	{
		for (int c = 0; c < sizeY; c = c + 1)
		{
			rms_diff = rms_diff + pow((sum_array[r * sizeY + c] - lag_array[r * sizeY + c]), 2);
		}
	}
	rms_diff = rms_diff / (sizeX * sizeY);
	rms_diff = sqrt(rms_diff);
	myfile << "��������" << std::setprecision(8) << std::setw(4) << rms_diff << std::endl;
	myfile << std::endl;

	int multi = 0;
	int multiM = resize_factor * sizeX;
	int multiN = resize_factor * sizeY;

	initgraph(multiN, multiM);	
	setbkcolor(RGB(38, 50, 56)); // Background color
	
	setlinestyle(PS_SOLID | PS_JOIN_BEVEL, thickness);
	drawline(sum_array, 0, sizeX - 1, 0, sizeY - 1, x_vec, y_vec, n_diode, z_vec, sizeX, sizeY,0);
	draw_electrode(sum_array, sizeX, sizeY);
	saveimage(_T("�糡��֤-1120170852-�����.bmp"));
}

double getresult(std::vector<double>& x, std::vector<double>& y,  int number, double val)
// �������ղ�ֵ
{
	double result = 0.0;                  // ����ֵ��ʼ��
	double upperpart, lowerpart;		  // ���ӷ�ĸ
	int start = 0, end = 0;;			  // ����Ԫ��λ�ó�ʼ��
	start = max(0, number - 1);			  // �����Ԫ�ؿ�ʼǰ��λ���ң����С��2����0��ʼ
	end = min(y.size() - 1, start + 2);	  // ͬ�����ҽ���λ�ã�����������һ��Ԫ��ֻ�鵽���һ��Ԫ��
	if (end - start < 2) start = start - (2 - (end-start));
	for (int i = start; i < end; i++)
	{
		upperpart = lowerpart = 1;
		for (int j = start; j < end; j++)
		{
			if (i == j)                    // ����嵽���Ԫ���Լ�����Ϊ1
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

void CMy1120170852Dlg::OnBnClickedButton3() //�������ղ�ֵͼ�����
{
	if (lag_array[0] == 100) CMy1120170852Dlg::OnBnClickedrun();
	std::vector<double> a; // ����������
	std::vector<double> x{0}; // ��ʼ��һ����Ϊ0
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
		myfile<<"\n��" << c+1 << "�� x:" << x[c] << " y:" << y[c];	
	}

	int locator = 0;
	myfile << "\n\nlagrange ��ֵ\n\n";
	int interval = Inputdata.INS; // ������
	double get_val = x[x.size() - 1] / interval; // ���
	std::vector<double> x_row{0};
	std::vector<double> y_row{0};
	for (int i = 1; i < interval; i++)
	{	
		locator = 0;
		while (x[locator] < get_val) locator = locator + 1;
		locator = locator - 1;
		//myfile << "����ĵ��ǣ�" << locator << " ��ѹֵΪ��" << y[locator]<< " Ҫ���λ���ǣ�"<<get_val;
		x_row.push_back(get_val);
		y_row.push_back(getresult(x, y, locator, get_val));
		myfile <<"  ��"<<i << "����(" << get_val<< "," << y_row[i] << ")" << std::endl;
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
	line(10, 10 , 10 , multiM - 10 ); // y��
	line(10 , multiM-10 , multiN-10 , multiM-10 ); //x��
	TCHAR c = _T('Z');
	TCHAR c2 = _T('V');
	TCHAR s[] = _T("Lagrange��ֵ��� 1120170852 �����");
	settextstyle(25, 0, _T("Consolas"));
	outtextxy(round(multiN/2-10), 30, s);
	outtextxy(multiN - 30, multiM - 30, c);
	outtextxy(30, 30, c2);
	//line(30 * 5, 10 * 5, 30 * 5, multiM - 30 * 5); // y��
	//line(30 * 5, multiM - 30 * 5, multiN - 90 * 5, multiM - 30 * 5); //x��

	saveimage(_T("Lagrange��ֵ-1120170852-�����.bmp"));
	// ���չ�
}
