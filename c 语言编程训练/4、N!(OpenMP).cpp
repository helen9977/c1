#include<iostream>
#include<omp.h>
#include<windows.h> 
using namespace std;

#define N 10

//��ʱ 
__int64 counter_begin;
__int64 counter_end;
__int64 diff;



int main()
{
	int i;
	__int64 result=1;//�ֲ����� 
	
	QueryPerformanceCounter((LARGE_INTEGER *)&counter_begin);  //��ʱ��ʼ 
	
	#pragma omp parallel for default(shared) private(i)\ reduction(*:result)   //��Լ����    
	for(i=1;i<=N;i++)
		result*=i;
		
	QueryPerformanceCounter((LARGE_INTEGER *)&counter_end);   //��ʱ���� 
	
	
	cout<<N<<"!="<<result<<endl;//������ 
	
	diff=counter_end-counter_begin;
	printf("diff=%I64d\n",diff);  //���ʱ��
	
	return 0;	
} 
