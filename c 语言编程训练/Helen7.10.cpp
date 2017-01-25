
#include<stdio.h>
void Print_Factorial( int N);
int main()
{
	int N;
	scanf("%d",&N);
	Print_Factorial(N);
	return 0;
}
void Print_Factorial( int N)
{
	int s=1;
	if(N<0)
		printf("Invalid input");
	else
	{
		while(N>1)
		{
			s=s*N;
			N--;
		}
		printf("%d",s);
	}
}
