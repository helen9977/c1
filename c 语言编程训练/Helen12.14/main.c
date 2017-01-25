/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    scanf("%f %f",&a,&b);
    float max(float x,float y);
    c=max(a,b);
    printf("%.2f",c);
    return 0;
}
float max(float x,float y)
{
    float c;
    if(x>y)
        c=x;
    else
        c=y;
    return c;
}
*/

// 一组浮点数中的最大数
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a[100],c;
    int i,n;
    printf("input a number:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }

    float max(float x[100],int m);
    c=max(a,n);
    printf("%.2f",c);
    return 0;
}
float max(float x[100],int m)
{
    float t;
    int i;
    t=x[0];
    for(i=0;i<m;i++)
    {
        if(t<x[i])
        {
            t=x[i];
        }

    }
    return t;
}
*/

//哥德巴赫猜想

/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a[3];
    printf("input a number:\n");
    scanf("%d",&a[0]);
    void gus(int x[3]);
    gus(a);
    printf("%d=%d+%d",a[0],a[1],a[2]);
    return 0;
}
void gus(int x[3])
{
    int i,j,a,b;
    int su(int n);
    for(i=2;i<x[0];i++)
    {
        a=su(i);
        for(j=2;j<x[0];j++)
    {

        b=su(j);
        if(i+j==x[0] && a==1 && b==1)
        {  i=x[1];
           j=x[2];
          }
        }
    }
}

int su(int n)
{
    int i,k,flag=0;
    k=sqrt(n);
    for(i=2;i<=k;i++)
    {
        if(n%i==0)
            {
                flag=0;
                break;
            }

        else flag =1;

    }
    return flag;
}

*/
//哥德巴赫猜想
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a[3];
int i,j=2;
    printf("input a number:\n");
    scanf("%d",&a[0]);
    int su(int n);

   for(i=2;i<a[0];i++)
    {
        a[1]=i;
        su(a[1]);
        if(su(a[1])==1)
         {
       do
       {
        a[2]=j;
        su(a[2]);
        j++;
            }while(su(a[2])==1);
         }
         if(a[2]+a[1]==a[0])
         printf("%d=%d+%d",a[0],a[1],a[2]);
    }

   return 0;
}

    int su(int n)
{
    int i,k,flag=0;
    k=sqrt(n);
    for(i=2;i<=k;i++)
    {
        if(n%i==0)
            {
                flag=0;
                break;
            }

        else flag =1;

    }
    return flag;
}
