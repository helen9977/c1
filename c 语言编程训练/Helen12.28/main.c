//指针法找出最大元素
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[10],i,max,*p;
    srand(time(0));
    p=a;
    for(i=0;i<10;i++)
    {
        a[i]=rand()%100;
        printf("%d\t",a[i]);
    }
    max=*p;
    for(i=0;i<10;i++)
    {
        if(*(p+i)>max)
            max=*(p+i);
    }
    printf("%d",max);
    return 0;
}
*/
//二维数组的排序
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[5][5],i,j,t;
    int *p;
    srand(time(0));
    p=a[0];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
          {
            a[i][j]=rand()%100;
            printf("%d\t",a[i][j]);
          }
    }
    printf("\n\n");

    for(i=0;i<25;i++)  //冒泡排序
    {
        p=a[0];  //注意指针归位
        for(j=0;j<24;j++)
    {

      if(*(p+1)>*p)
      {
      t=*(p+1);
      *(p+1)=*p;
      *p=t;
      }
    p++; // 指针向后移动
    }
    }
    printf("\n");
    p=a[0];     //指针归位
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
        printf("%d\t",*p++);
    return 0;
}
*/
//一维数组的排序
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[10],*p,i,j,t;
    for(p=a;p<a+10;p++)
    {
        *p=rand()%100;
        printf("%d\t",*p);
    }
    printf("\n\n");
    p=a;
    for(i=0;i<9;i++)
       {
           p=a;
           for(j=0;j<9-i;j++)
    {
        if(*p>*(p+1))
            {
                t=*p;
                *p=*(p+1);
                *(p+1)=t;
            }
        p++;
       }
       }
       p=a;
       for(i=0;i<10;i++)
        printf("%d\t",*p++);
       return 0;
}
*/

/*
void fun(int a[], int n, int *c, double *x)

{
    int i;
    for(i=0;i<n;i++)
    {

    if(a[i]%2==0)
    {
        *c=(*c)+1;
         *x=*x+a[i];
    }
    }
    *x=*x/(*c);

}

#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[40]={1,1},c=0;
double x=0;
int i,n;
scanf("%d",&n);
for(i=2;i<n;i++)
{
    a[i]=a[i-1]+a[i-2];
}
if(n<3)
    printf("0 0.00");
else
{
fun(a,n,&c,&x);
printf("%d %.2f",c,x);
}
return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[3][3]={{1,2,3},{4,5,6},{7,2,1}};
    int (*p)[3];
    p=x;
    printf("%d",*(*(p+1)+2));
    return 0;
}
*/

//字符串中空格的个数

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     char c[100];
     char *p;
     int s=0;
    p=c;
    gets(c);
    for(p=c;*p!='\0';p++)
    {
        if(*p=32)
            s++;
    }
    printf("%d ",s);
    return 0;
}
