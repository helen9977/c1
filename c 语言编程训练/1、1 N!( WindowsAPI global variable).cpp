/* Windows ���̲߳��� ����N����ֵ*/ 

/*�ƿ�1502 �޺��� 2015014324 */ 

/*ȫ�ֱ���*/



#include<iostream>
#include<windows.h>
using namespace std;


#define N 25

//��ʱ 
__int64 counter_begin;
__int64 counter_end;
__int64 diff;

__int64 result;//ȫ�ֱ��� 

CRITICAL_SECTION cs; //�ٽ��� 

DWORD WINAPI Multiple_1 (PVOID param)//����ǰһ����߳� 
{
	 
	for(int i=1;i<N/2;i++)
	{ 
		EnterCriticalSection(&cs);
		result=result*i;
		LeaveCriticalSection(&cs);
	
	}
//	cout<<result<<endl;
	return 0;
} 

DWORD WINAPI Multiple_2 (PVOID param)//�����һ����߳� 
{
	 
	for(int i=N/2;i<=N;i++)
	{
		EnterCriticalSection(&cs);
		result=result*i;
		LeaveCriticalSection(&cs);
	}
//	cout<<result<<endl;
	return 0;
}  



int main()
{
	result=1; //��ʼ�� 
	
	InitializeCriticalSection (&cs);//�ٽ�����ʼ�� 

	QueryPerformanceCounter((LARGE_INTEGER *)&counter_begin);  //��ʱ��ʼ 

	
	HANDLE hThread1=CreateThread(NULL,0,Multiple_1,NULL,0,NULL);
	HANDLE hThread2=CreateThread(NULL,0,Multiple_2,NULL,0,NULL);
	
	HANDLE hThread[2]={hThread1,hThread2};
	
	
	WaitForMultipleObjects(2,hThread,TRUE,INFINITE);  //�ȴ������̶߳����� 
	

	
	QueryPerformanceCounter((LARGE_INTEGER *)&counter_end);   //��ʱ���� 

	cout<<N<<"!="<<result<<endl;  //������ 
	
	diff=counter_end-counter_begin;
	printf("diff=%I64d\n",diff);  //���ʱ�� 

		
	return 0;
		
}

