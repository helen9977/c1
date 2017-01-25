 #include<omp.h> 
 #include<iostream>
 using namespace std;
 int main()
 {
 	int j=0;
 	#pragma omp for
 	for(j=0;j<4;j++)
 	{
 		cout<<"j="<<j<<","<<"Threadle="<<omp_get_thread_num();
	 }
  } 
