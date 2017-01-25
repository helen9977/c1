#include <omp.h>
#include <stdio.h>
#include<iostream>
using namespace std;
/*�Ҳ��ܣ��Ҿ�Ҫ��cpp��hh*/ 
// not using iostream here due to output ordering issues

// iostream tends to output each part between <<'s separately to the console, 
// which can lead to random output if multiple threads are doing the same
// thing.

// printf will generally output the whole result string in one go, so results
// of separate printf calls, even from different threads, will remain intact

// Another fix, other than using printf, would be to give each thread its own 
// place to store output temporarily (a stringstream), and then output the whole
// result in one go.
/*������ִ�н��ÿ�ζ����һ����������Ҳ��֪��Ϊʲô-- ��������ʦ*/ 
float global_a,global_b;
#pragma omp threadprivate(global_a)//���߳�˽�е�ȫ�ֱ��� 

void subfun1(int i){
	global_a=i+i;
	cout<<"c="<<global_a<<endl;
	#pragma omp critical//���ڹ����������Ҫ�ٽ�������������  ��ֹдд���� 
	global_b=i*i; 
}
void subfun2(int i){
	global_a=global_a*i;
}

int main() 
{
	int i;
	#pragma omp parallel for private(i) shared(global_b)//�ֲ�˽�б���i���������b 
	for (i=0;i<100;i++)
	{
		subfun1(i);
		cout<<"a="<<global_a<<endl; // a=i+i; 
		subfun2(i);//a=a*i;
		//cout<<"c="<<global_a<<endl; /*����һ��fun2����*/ 
		cout<<"b="<<global_b<<endl; //b=i*i;
	}
	//�ĸ��̲߳���ִ�д�ѭ�������,Ҳ����˵��һ���Ǵ�i=0��ʼ����� 
}
