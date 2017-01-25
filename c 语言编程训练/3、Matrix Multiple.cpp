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
	
	#pragma omp parallel for    //对循环i并行化 
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];   //计算矩阵c 
			
		}
	}
	
	cout<<"矩阵 C:"<<endl;   //输出矩阵c 
	for(i=0;i<m;i++)
		for(j=0;j<q;j++)
		{
			cout<<c[i][j]<<" ";
			#pragma omp critical // 读写竞争，数据保护    
			kk=kk+1;
			if(kk%q==0)   //监测换行 
				cout<<endl;   

		}
		
	getchar();
			
	return 0;
} 
 } 
