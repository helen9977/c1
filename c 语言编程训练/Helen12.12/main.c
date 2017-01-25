//两数之差
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a-b;
    printf("%d",c);
    return 0;
}
*/
//时间之差
/*
#include<stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d:%d:%d",&a,&b,&c);
    int m,n,k;
    scanf("%d:%d:%d",&m,&n,&k);

    int x,y,z;
    x=a*3600+b*60+c;
    y=m*3600+n*60+k;
    z=x-y;
    printf("%d",z);
    return 0;
}

*/

//直角三角形面积
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a,b,s;

    scanf("%f %f",&a,&b);
    s=a*b/2.0;
    printf("%.2f",s);
    return 0;
}*/


//闰年函数

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("input a year:\n");
    scanf("%d",&n);
    int leap(int m);
    if(leap(n)==1)printf("yes!");
    else printf("no!");
    return 0;
}

    int leap(int m)
    {
        if((m%4==0&&m%100!=0)||(m%400==0))
            return 1;
        else
            return 0;
    }
*/

//支持率
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10]={1,0,1,0,0,1,1,1,1,1};
    float res;
    float sup(int b[10]);
    res=sup(a);
    printf("%.2f",res);
    return 0;
}
float sup(int b[10])
{
    int i,sum=0;
    for(i=0;i<10;i++)
    {
        sum+=b[i];
    }
    return sum/10.0;
}
*/

// 冒泡排序的通用性

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    int a[100];
    printf("input n:\n");
    scanf("%d",&n);
    printf("input numbers:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    void popo(int b[100],int m);
    popo(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

void popo(int b[100],int m)
{
    int i,j,t;
    for(i=0;i<m-1;i++)
        for(j=0;j<m-1-i;j++)
    {
        if(b[j]<b[j+1])
            {t=b[j];
            b[j]=b[j+1];
            b[j+1]=t;}
    }
}
