/* Windows ���̲߳��� ����N����ֵ*/ 

/*�ƿ�1502 �޺��� 2015014324 */ 

/*�ֲ�����*/

#include <iostream>
#include<windows.h>
using namespace std;

__int64 counter_begin;
__int64 counter_end;
__int64 diff;


int N=10;

/*���ݷֿ�ģʽ*/ 
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
	
	QueryPerformanceCounter((LARGE_INTEGER*)&counter_begin);//��ʱ��ʼ 
	
		HANDLE Thread1=CreateThread(NULL,0,func1,&results[0],0,NULL);
		HANDLE Thread2=CreateThread(NULL,0,func2,&results[1],0,NULL);
		
		HANDLE hThread[2]={Thread1,Thread2};
		
		WaitForMultipleObjects(2,hThread,TRUE,INFINITE); 
		result = results[0]*results[1];
	
	QueryPerformanceCounter((LARGE_INTEGER *)&counter_end);//��ʱ���� 
	
	cout<<N<<"!="<<result<<endl;  //������ 
	
	diff=counter_end-counter_begin;
	printf("diff=%I64d\n",diff);  //���ʱ�� 
	
	return 0;

	
}
