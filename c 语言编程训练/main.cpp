#include <omp.h>
#include <stdio.h>
#include<iostream>
using namespace std;
/*我不管，我就要用cpp！hh*/ 
// not using iostream here due to output ordering issues

// iostream tends to output each part between <<'s separately to the console, 
// which can lead to random output if multiple threads are doing the same
// thing.

// printf will generally output the whole result string in one go, so results
// of separate printf calls, even from different threads, will remain intact

// Another fix, other than using printf, would be to give each thread its own 
// place to store output temporarily (a stringstream), and then output the whole
// result in one go.
/*本程序执行结果每次都会多一个变量，我也不知道为什么-- 可以问老师*/ 
float global_a,global_b;
#pragma omp threadprivate(global_a)//各线程私有的全局变量 

void subfun1(int i){
	global_a=i+i;
	cout<<"c="<<global_a<<endl;
	#pragma omp critical//对于共享变量，需要临界区，保护变量  防止写写竞争 
	global_b=i*i; 
}
void subfun2(int i){
	global_a=global_a*i;
}

int main() 
{
	int i;
	#pragma omp parallel for private(i) shared(global_b)//局部私有变量i，共享变量b 
	for (i=0;i<100;i++)
	{
		subfun1(i);
		cout<<"a="<<global_a<<endl; // a=i+i; 
		subfun2(i);//a=a*i;
		//cout<<"c="<<global_a<<endl; /*测试一下fun2函数*/ 
		cout<<"b="<<global_b<<endl; //b=i*i;
	}
	//四个线程并行执行此循环，随机,也就是说不一定是从i=0开始输出。 
}
