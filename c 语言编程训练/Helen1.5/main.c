//输入负数结束
/*

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s=0,i=0;
    float c,a;
    while(1)    //给一个死循环
    {
        scanf("%f",&a);
        if(a>0)       //用if语句判断值的正负。
            {
        s+=a;
        i++;
            }
        else break; //break控制循环的结束.

    }
    c=s/i;
    printf("%.2f",c);
    return 0;
}
*/
//e的近似值
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j;
    float e=1,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
          k=1;    //注意每次循环结束之后K的值都要重新返回1；
          for(j=1;j<=i;j++)
            {
                k=k*j;   //计算阶乘
            }
       e=e+(1/k); //累加
    }
    printf("%.6f",e);
    return 0;
}

*/

//函数数组的传递
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double arr[100];
    int i,s;
    for(i=0;i<100;i++)
    {
        arr[i]=100*cos(i*0.75);

    }
    for(i=0;i<100;i++)
    printf("%f\t",arr[i]);

    int fun(double x[],int n);
    s=fun(arr,100);
    printf("%d",s);
    return 0;
}
int fun(double x[],int n)
{
    int i,j=0;
    for(i=0;i<n;i++)
    {
        if(x[i]<0)
            j++;
    }
    return j;
}
*/
//小于平均数的整数
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
      int n,i,s=0,k=0;
      float c;
      int x[1024];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          scanf("%d",&x[i]);
          s+=x[i];
      }
      c=1./n*s; //注意c是浮点数。
      printf("%d %d %f\n",s,n,c);
      for(i=0;i<n;i++)
      {
          if(x[i]<c)
            k++;
      }
      printf("%d",k);
      return 0;
}
*/
//左移数
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,x[2000],i,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    t=x[0];
    for(i=0;i<n;i++)
    {
        if(t<x[i])
            t=x[i];

    }
    for(i=0;i<n;i++)
    {
        x[i]=x[i]-t;
    }
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    return 0;
}
*/

//函数
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[1000];
    int i;
    gets(s);
    void sort(char x[]);
    sort(s);
    void save(char x[]);
    save(s);
    char print(char x[]);
    for(i=0;s[i]!='\0';i++)
        printf("%c",print(s));
    return 0;
}
void sort(char x[])
{

    int i,j;
    char t;
    for(i=0;x[i]!='\0';i++)
    {
        for(j=0;x[j]!='\0';j++)
        {
            if(x[j]>x[j+1])
            {
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
    }
}
void save(char x[])
{
    FILE *fp;
    int i=0;
    fp=fopen("E:\\myfile.txt","w");
    if(NULL==fp)
    {
        printf("cannot open the file.\n");
        exit(0);
    }
    while(x[i]!='\0')
    {
        fprintf(fp,"%c",x[i]);
        i++;
    }
     fclose(fp);
}
char print(char x[])
{
    char c;
    int i;
    for(i=0;x[i]!='\0';i++)
    {
        c=x[i];
    }
    return c;
}
