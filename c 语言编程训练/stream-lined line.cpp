#include<iostream>
#include<cstring>
#include<Windows.h>
#include<ctime>
#include<iomanip>
using namespace std;

int NUM_CLOTHES;					//衣服总件数

struct clothes
{
	bool wash;
	bool dry;
	bool hangup;
}*cloth;

HANDLE hesm1;
HANDLE hesm2;
HANDLE hesm3;
CRITICAL_SECTION cs;				//用于保护数据的临界区
double T;// = clock();
/*void clock(const int time)
{
	T += 1.0*time / 1000;
}*/

int TIME_A;
int TIME_B;
int TIME_C;

DWORD WINAPI ThreadA(PVOID Param)
{
	for (int i = 0; i < NUM_CLOTHES; i++)
	{
		WaitForSingleObject(hesm1, INFINITE);
		Sleep(TIME_A);
		EnterCriticalSection(&cs);
		cout << "第\t" << i + 1 << "\t件衣服 水洗 完成时刻为：\t" << setprecision(1) << 1.0 * clock() / CLOCKS_PER_SEC - T << '\t' << "seconds" << endl;
		cloth[i].wash = true;
		LeaveCriticalSection(&cs);
		ReleaseSemaphore(hesm2, 1, NULL);
	}
	return 0;
}

DWORD WINAPI ThreadB(PVOID Param)
{
	for (int i = 0; i < NUM_CLOTHES; i++)
	{
		WaitForSingleObject(hesm2, INFINITE);
		Sleep(TIME_B);
		EnterCriticalSection(&cs);
		cout << "第\t" << i + 1 << "\t件衣服 甩干 完成时刻为：\t" << setprecision(1) << 1.0 * clock() / CLOCKS_PER_SEC - T << '\t' << "seconds" << endl;
		cloth[i].dry = true;
		LeaveCriticalSection(&cs);
		ReleaseSemaphore(hesm3, 1, NULL);
	}
	return 0;
}

DWORD WINAPI ThreadC(PVOID Param)
{
	for (int i = 0; i < NUM_CLOTHES; i++)
	{
		WaitForSingleObject(hesm3, INFINITE);
		Sleep(TIME_C);
		EnterCriticalSection(&cs);
		cout << "第\t" << i + 1 << "\t件衣服 晾干 完成时刻为：\t" << setprecision(1) << 1.0 * clock() / CLOCKS_PER_SEC - T << '\t' << "seconds" << endl;
		cloth[i].hangup = true;
		LeaveCriticalSection(&cs);
	}
	return 0;
}

int main()
{
	cout << "本软件模拟洗衣服的三个环节。" << endl << endl;
	cout << "请输入衣服总件数："; cin >> NUM_CLOTHES;

	cout << endl << "输入的时间请以毫秒为单位。" << endl;
	cout << "请输入水洗时间："; cin >> TIME_A;
	cout << "请输入甩干时间："; cin >> TIME_B;
	cout << "请输入晾干时间："; cin >> TIME_C;
	cout << endl;
	cloth = new clothes[NUM_CLOTHES];
	memset(cloth, 0, sizeof(cloth));							//对结构体进行初始化
	T = 1.0 * clock() / CLOCKS_PER_SEC;
	cout.setf(ios::fixed);

	hesm1 = CreateSemaphore(NULL, NUM_CLOTHES, NUM_CLOTHES, NULL);		//对于首先进行的wash的信号量
	hesm2 = CreateSemaphore(NULL, 0, NUM_CLOTHES, NULL);						//对于其次进行的dry的信号量
	hesm3 = CreateSemaphore(NULL, 0, NUM_CLOTHES, NULL);						//对于其次进行的dry的信号量

	HANDLE hThreadA = CreateThread(NULL, 0, ThreadA, NULL, 0, NULL);
	HANDLE hThreadB = CreateThread(NULL, 0, ThreadB, NULL, 0, NULL);
	HANDLE hThreadC = CreateThread(NULL, 0, ThreadC, NULL, 0, NULL);
	HANDLE hThread[3] = { hThreadA, hThreadB, hThreadC };
	
	InitializeCriticalSection(&cs);								//初始化临界区

	WaitForMultipleObjects(3, hThread, TRUE, INFINITE);		//等待三项都完成
	//或者从理论上讲，最后一次一定是第三项，故还可以写成
	//WaitForSingleObject(hThreadB, INFINITE);

	DeleteCriticalSection(&cs);									//删除临界区

	for (int i = 0; i < NUM_CLOTHES; i++)					//查错部分
	{
		if (cloth[i].wash == false || cloth[i].dry == false || cloth[i].hangup == false)
		{
			cout << "任务出错！！" << endl;
			return 0;
		}
	}

	cout << endl << "谢谢使用，老师再见~" << endl << endl;
	return 0;
}
