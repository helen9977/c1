#include <fstream>
#include <iostream>
using namespace std;
int const m=50,n=50,q=50;
int main()
{
	double a[m][n],b[n][q],c[m][q];
	int i,j,k,kk=0;
	fstream file;
	file.open("data.txt",ios::in);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			file>>a[i][j];
	for(i=0;i<n;i++)
		for(j=0;j<q;j++)
			file>>b[i][j];
	
	#pragma omp parallel for    //��ѭ��i���л� 
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];   //�������c 
			
		}
	}
	
	cout<<"���� C:"<<endl;   //�������c 
	for(i=0;i<m;i++)
		for(j=0;j<q;j++)
		{
			cout<<c[i][j]<<" ";
			#pragma omp critical // ��д���������ݱ���    
			kk=kk+1;
			if(kk%q==0)   //��⻻�� 
				cout<<endl;   

		}
		
	getchar();
			
	return 0;
} 
 } 
