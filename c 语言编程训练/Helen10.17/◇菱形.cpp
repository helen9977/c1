#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i,j,k;
	for(i=1;i<=7;i++)
     {
     	//��������ո���Ŀk
     	for(k=1;k<=fabs(8-2*i);k++)
     	printf(" ");
     	//����ǰ�������*��Ŀj
        for(j=1;j<=2*i-1&&i<5;j++)
	    printf("* ");
	    //���ƺ��������*��Ŀj
	    for(j=1;j<=15-2*i&&i>=5;j++)
	    printf("* ");
	    printf("\n");
	  }
    system("pause") ;
       return 0;
}
