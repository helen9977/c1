//��������˵� �����

/*  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int e;
    int a,b,c;
    srand(time(0));
    while (1)
    {
        a=rand()%10;
        b=rand()%10;
        printf("          *****************************       \n");
        printf("             ������ѡ����루0--4��   \n");
        printf("                 1---�ӷ�         \n");
        printf("                 2---����         \n");
        printf("                 3---�˷�         \n");
        printf("                 4---����         \n");
        printf("                 0---�˳�         \n");
        printf("          *****************************       \n");
        scanf("%d",&e);
        switch (e)
        {
            case 1: c=a+b; break;
            case 2: c=a-b; break;
            case 3: c=a*b; break;
            case 4: if (b!=0) c=a/b;break;
            case 0: break;
            default:break;
        }
        if(e<0 || e>4) continue;
        if(e==0) break;
        printf("%d  %d  %d",a,b,c);

    }
     return 0;
}
*/
//����
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k;
    for(i=0;i<=3;i++)
    {
        for(j=1;j<=3-i;j++)
            printf(" ");
        for(k=1;k<=2*i+1;k++)
            printf("*");
        printf("\n");
    }
    for(i=4;i<=7;i++)
    {
        for(j=1;j<=i-4;j++)
            printf(" ");
        for(k=1;k<=15-2*i;k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
*/



/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k;
    char c;
    for(i=1;i<=6;i++)
    {
        c='A';
        for(j=1;j<=6-i;j++)
            printf(" ");
       for(k=1;k<=i;k++)
            printf("%c",c++);
      while (--k>=1)//���һ����ĸ
   {
     printf("%c",c--);
   }
        printf("\n");

    }
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 int i=0,j=0;
 char c;
 for (i=0;i<6;i++)
 {
     c='A';
   for(j=1;j<=6-i;j++)
     printf(" ");;//��ո�
   for (j=0;j<=i;j++)//��ǰһ����ĸ
   {
     printf("%c",c+j);
   }
   while (--j>=1)//���һ����ĸ
   {
     printf("%c",c+j-1);
   }
   printf("\n");//����
 }
 return 0;
}

/*
//ż�����
/#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,s=0;
for(a=2;a<=100;a+=2)
    s=a+s;

    printf("s=%d",s);
    return 0;
}*/

//��ǰN���
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    float i,k,s=0;
    printf("input n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {k=1./i;
        s=s+k;}
        printf("s=%f",s);
    return 0;
}*/
// �ݺ����ĵ���~

/* #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int s=0,n,i;
    float a,b;
    printf("input n,a:\n");
    scanf("%d %f",&n,&a);
    for(i=1;i<=n;i++)
        {
        b=a/9.00*(pow(10,i)-1);
        s=s+b;}
        printf("s=%d",s);
        return 0;
}
*/

// ����ͬ����
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
       for(i=1;i<50;i++)
       for(j=1;j<25;j++)
       for(k=1;k<12;k++)
        if(2*i+4*j+2*k==100 && i+j+9*k==100)
        printf("���� %d ֻ������ %d ֻ����ͷ���� %d ֻ��\n",i,j,k);
       else;
        return 0;
}

*/


