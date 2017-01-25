#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i,j,k;
	for(i=1;i<=7;i++)
     {
     	//控制输出空格数目k
     	for(k=1;k<=fabs(8-2*i);k++)
     	printf(" ");
     	//控制前四行输出*数目j
        for(j=1;j<=2*i-1&&i<5;j++)
	    printf("* ");
	    //控制后三行输出*数目j
	    for(j=1;j<=15-2*i&&i>=5;j++)
	    printf("* ");
	    printf("\n");
	  }
    system("pause") ;
       return 0;
}
