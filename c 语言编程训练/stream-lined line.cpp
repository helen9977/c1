#include<iostream>
#include<cstring>
#include<Windows.h>
#include<ctime>
#include<iomanip>
using namespace std;

int NUM_CLOTHES;					//�·��ܼ���

struct clothes
{
	bool wash;
	bool dry;
	bool hangup;
}*cloth;

HANDLE hesm1;
HANDLE hesm2;
HANDLE hesm3;
CRITICAL_SECTION cs;				//���ڱ������ݵ��ٽ���
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
		cout << "��\t" << i + 1 << "\t���·� ˮϴ ���ʱ��Ϊ��\t" << setprecision(1) << 1.0 * clock() / CLOCKS_PER_SEC - T << '\t' << "seconds" << endl;
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
		cout << "��\t" << i + 1 << "\t���·� ˦�� ���ʱ��Ϊ��\t" << setprecision(1) << 1.0 * clock() / CLOCKS_PER_SEC - T << '\t' << "seconds" << endl;
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
		cout << "��\t" << i + 1 << "\t���·� ���� ���ʱ��Ϊ��\t" << setprecision(1) << 1.0 * clock() / CLOCKS_PER_SEC - T << '\t' << "seconds" << endl;
		cloth[i].hangup = true;
		LeaveCriticalSection(&cs);
	}
	return 0;
}

int main()
{
	cout << "�����ģ��ϴ�·����������ڡ�" << endl << endl;
	cout << "�������·��ܼ�����"; cin >> NUM_CLOTHES;

	cout << endl << "�����ʱ�����Ժ���Ϊ��λ��" << endl;
	cout << "������ˮϴʱ�䣺"; cin >> TIME_A;
	cout << "������˦��ʱ�䣺"; cin >> TIME_B;
	cout << "����������ʱ�䣺"; cin >> TIME_C;
	cout << endl;
	cloth = new clothes[NUM_CLOTHES];
	memset(cloth, 0, sizeof(cloth));							//�Խṹ����г�ʼ��
	T = 1.0 * clock() / CLOCKS_PER_SEC;
	cout.setf(ios::fixed);

	hesm1 = CreateSemaphore(NULL, NUM_CLOTHES, NUM_CLOTHES, NULL);		//�������Ƚ��е�wash���ź���
	hesm2 = CreateSemaphore(NULL, 0, NUM_CLOTHES, NULL);						//������ν��е�dry���ź���
	hesm3 = CreateSemaphore(NULL, 0, NUM_CLOTHES, NULL);						//������ν��е�dry���ź���

	HANDLE hThreadA = CreateThread(NULL, 0, ThreadA, NULL, 0, NULL);
	HANDLE hThreadB = CreateThread(NULL, 0, ThreadB, NULL, 0, NULL);
	HANDLE hThreadC = CreateThread(NULL, 0, ThreadC, NULL, 0, NULL);
	HANDLE hThread[3] = { hThreadA, hThreadB, hThreadC };
	
	InitializeCriticalSection(&cs);								//��ʼ���ٽ���

	WaitForMultipleObjects(3, hThread, TRUE, INFINITE);		//�ȴ�������
	//���ߴ������Ͻ������һ��һ���ǵ�����ʻ�����д��
	//WaitForSingleObject(hThreadB, INFINITE);

	DeleteCriticalSection(&cs);									//ɾ���ٽ���

	for (int i = 0; i < NUM_CLOTHES; i++)					//�����
	{
		if (cloth[i].wash == false || cloth[i].dry == false || cloth[i].hangup == false)
		{
			cout << "���������" << endl;
			return 0;
		}
	}

	cout << endl << "ллʹ�ã���ʦ�ټ�~" << endl << endl;
	return 0;
}
