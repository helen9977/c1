#include <windows.h>
#include <iostream>
#include <tchar.h>

using namespace std;
/*创建线程*/
/* 
DWORD WINAPI ThreadFunc(PVOID pvParam)
{
	cout<<"Created thread says :'hello world!'"<<endl;
	return 0;
}
int main()
{
	HANDLE ThreadHanle=CreateThread(NULL,0,ThreadFunc,NULL,0,NULL);
	Sleep(100);
	cout<<"Main thread says 'hello world!'"<<endl;
	getchar();
	return 0;
}
*/
/*
DWORD WINAPI FunOne(LPVOID param)
{
	int *p=(int*)param;
	cout<<(*p)<<endl;
	while(true)
	{
		Sleep(1000);
		cout<<"hello!";
		
	}
	return 0;
 } 
 DWORD WINAPI FunTwo(LPVOID param)
 {
 	int *p=(int *)param;
 	cout<<(*p)<<endl;
 	while(true)
 	{
 		Sleep(1000);
 		cout<<"world!";
 		
	 }
	 return 0;
 }
 int main(int argc,_TCHAR* argv[])
 {
 	int input=100;
 	int input1=100;
 	int input2=200;
 	HANDLE hand1=CreateThread(NULL,0,FunOne,(void*)&input1,CREATE_SUSPENDED,NULL);
 	input=200;
 	HANDLE hand2=CreateThread(NULL,0,FunTwo,(void*)&input2,CREATE_SUSPENDED,NULL);
 	while(true)
	 {
	 	cin>>input;
		 switch(input)
		 {
		 	case 1:
		 		ResumeThread(hand1);//运行挂起的线程1 
		 		ResumeThread(hand2);
			case 2:
		 		SuspendThread(hand1);//挂起线程1 
		 		SuspendThread(hand2);
		 	
		 	case 3:
		 		TerminateThread(hand1,1);//终止线程1 
		 		TerminateThread(hand2,1);
		 		
		 	default:
		 		return 0;
		  } 
	  }
	 return 0; 
 }
 */
 /* 
 struct bound
 {
 	int low;
 	int high;
 };
 
 DWORD WINAPI Thread1(PVOID pvParam)
 {
 	int i,j,k,n;
 	bound*bou=(bound*)pvParam;
 	int low=bou->low;
 	int high=bou->high;
 	for(n=low;n<high;n++)
 	{
 		i=n%10;
		j=n/10%10; 
 		k=n/100;
 		if(k*100+j*10+i==i*i*i+j*j*j+k*k*k)
 		cout<<n<<endl;
	 }
	 cout<<endl;  
	 return 0;
 }
 int main()
 {
 	cout<<"水仙花数是：";
	 bound qw1,qw2;
	 qw1.low=100;
	 qw1.high=500;
	 HANDLE ThreadHandle1=CreateThread(NULL,0,Thread1,&qw1,0,NULL);
	 qw2.low=500;
	 qw2.high=1000;
	 HANDLE ThreadHandle2=CreateThread(NULL,0,Thread1,&qw2,0,NULL);
	 HANDLE ThreadHandles[2]={ThreadHandle1,ThreadHandle2};
	 WaitForMultipleObjects(2,ThreadHandles,TRUE,INFINITE);
	 return 0; 
	  
}
*/
HANDLE hbegin;
HANDLE hend0;
HANDLE hend1;
HANDLE hend2;

DWORD WINAPI Thread1(PVOID pv)
{
	int i=0;
	while(i<4)
	{
		WaitForSingleObject(hbegin,INFINITE);
		cout<<i<<"进入A1区"<<endl;
		SetEvent(hend0);
		i++;
	}
} 
DWORD WINAPI Thread2(PVOID pv)
{
	int i=0;
	while(i<4)
	{
		WaitForSingleObject(hend0,INFINITE);
		cout<<i<<"进入A2区"<<endl;
		SetEvent(hend1);
		i++;
	}
} 
DWORD WINAPI Thread3(PVOID pv)
{
	int i=0;
	while(i<4)
	{
		WaitForSingleObject(hend1,INFINITE);
		cout<<i<<"进入A3区"<<endl;
		SetEvent(hend2);
		i++;
	}
} 
int main()
{
	char T[4]={'A','B','C','D'}; 
	char A1,A2,A3;
	A1=T[0];
	A2=0;
	A3=0;
	int i=0;
	HANDLE hThread1=CreateThread(NULL,0,Thread1,NULL,0,NULL);
	HANDLE hThread2=CreateThread(NULL,0,Thread2,NULL,0,NULL);
	HANDLE hThread3=CreateThread(NULL,0,Thread3,NULL,0,NULL);
	hbegin=CreateEvent(NULL,TRUE,FALSE,NULL);
	hend0=CreateEvent(NULL,FALSE,FALSE,NULL); 
	hend1=CreateEvent(NULL,FALSE,FALSE,NULL);
	hend2=CreateEvent(NULL,FALSE,FALSE,NULL);
	HANDLE hThread[3]={hThread1,hThread2,hThread3};
	while(i<4)
	{
		SetEvent(hbegin);
		WaitForMultipleObjects(3,hThread,TRUE,INFINITE);
		i++;
		A3=A2;
		A2=A1;
		A1=T[i];
	}
	cout<<"end!"<<endl;
	return 0;
}
