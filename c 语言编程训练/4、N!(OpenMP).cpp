#include<iostream>
#include<omp.h>
#include<windows.h> 
using namespace std;

#define N 10

//计时 
__int64 counter_begin;
__int64 counter_end;
__int64 diff;



int main()
{
	int i;
	__int64 result=1;//局部变量 
	
	QueryPerformanceCounter((LARGE_INTEGER *)&counter_begin);  //计时开始 
	
	#pragma omp parallel for default(shared) private(i)\ reduction(*:result)   //规约操作    
	for(i=1;i<=N;i++)
		result*=i;
		
	QueryPerformanceCounter((LARGE_INTEGER *)&counter_end);   //计时结束 
	
	
	cout<<N<<"!="<<result<<endl;//输出结果 
	
	diff=counter_end-counter_begin;
	printf("diff=%I64d\n",diff);  //输出时间
	
	return 0;	
} 
