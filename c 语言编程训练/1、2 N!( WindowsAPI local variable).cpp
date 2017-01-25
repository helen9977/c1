/* Windows 多线程操作 计算N！的值*/ 

/*计科1502 罗海伦 2015014324 */ 

/*局部变量*/

#include <iostream>
#include<windows.h>
using namespace std;

__int64 counter_begin;
__int64 counter_end;
__int64 diff;


int N=10;

/*数据分块模式*/ 
DWORD WINAPI func1(LPVOID param)
{
	int i;
	__int64 *sum;
	sum=(__int64 *)param;
	//cout<<"input the number that you what :"<<endl;
	//cin>>N;
	for(i=1;i<N/2;i++)
		(*sum)*=i;
	
	return 0;
 } 
DWORD WINAPI func2(LPVOID param)
{
	int i;
	__int64 *sum=(__int64 *)param;
	for(i=N/2;i<=N;i++)
	{
		(*sum)*=i;
	}
	return 0;
}


int main()
{
	__int64 results[2]={1,1};
	__int64 result=1;
	
	QueryPerformanceCounter((LARGE_INTEGER*)&counter_begin);//计时开始 
	
		HANDLE Thread1=CreateThread(NULL,0,func1,&results[0],0,NULL);
		HANDLE Thread2=CreateThread(NULL,0,func2,&results[1],0,NULL);
		
		HANDLE hThread[2]={Thread1,Thread2};
		
		WaitForMultipleObjects(2,hThread,TRUE,INFINITE); 
		result = results[0]*results[1];
	
	QueryPerformanceCounter((LARGE_INTEGER *)&counter_end);//计时结束 
	
	cout<<N<<"!="<<result<<endl;  //输出结果 
	
	diff=counter_end-counter_begin;
	printf("diff=%I64d\n",diff);  //输出时间 
	
	return 0;

	
}
