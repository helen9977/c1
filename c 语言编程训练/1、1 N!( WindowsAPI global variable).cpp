/* Windows 多线程操作 计算N！的值*/ 

/*计科1502 罗海伦 2015014324 */ 

/*全局变量*/



#include<iostream>
#include<windows.h>
using namespace std;


#define N 25

//计时 
__int64 counter_begin;
__int64 counter_end;
__int64 diff;

__int64 result;//全局变量 

CRITICAL_SECTION cs; //临界区 

DWORD WINAPI Multiple_1 (PVOID param)//计算前一半的线程 
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

DWORD WINAPI Multiple_2 (PVOID param)//计算后一半的线程 
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
	result=1; //初始化 
	
	InitializeCriticalSection (&cs);//临界区初始化 

	QueryPerformanceCounter((LARGE_INTEGER *)&counter_begin);  //计时开始 

	
	HANDLE hThread1=CreateThread(NULL,0,Multiple_1,NULL,0,NULL);
	HANDLE hThread2=CreateThread(NULL,0,Multiple_2,NULL,0,NULL);
	
	HANDLE hThread[2]={hThread1,hThread2};
	
	
	WaitForMultipleObjects(2,hThread,TRUE,INFINITE);  //等待两个线程都结束 
	

	
	QueryPerformanceCounter((LARGE_INTEGER *)&counter_end);   //计时结束 

	cout<<N<<"!="<<result<<endl;  //输出结果 
	
	diff=counter_end-counter_begin;
	printf("diff=%I64d\n",diff);  //输出时间 

		
	return 0;
		
}

