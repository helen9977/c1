// 变负数
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
        a=-a;
        printf("%d",a);
    return 0;

}
*/
//比较
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3],b[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
    if(a[0]>b[0])
        printf("First");
    else if(a[0]<b[0])
        printf("Second");
    else
    {
        if(a[1]>b[1])
            printf("First");
        else if(a[1]<b[1])
            printf("Second");
            else
            {
                if(a[2]>b[2])
                    printf("First");
                else if(a[2]<b[2])
                    printf("Second");
                else printf("Same");
            }

    }
    return 0;
}
*/
//判断三角形是否成立
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
        printf("TRUE");
    else printf("FALSE");
     return 0;
}
*/

// 等腰三角形
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b||a==c||b==c)
        printf("TRUE");
    else printf("FALSE");
    return 0;
}
*/

//判断三角形类型
/*

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[3],i,j,t,a,b;
    scanf("%d %d %d",&x[0],&x[1],&x[2]);
    for(i=0;i<2;i++)
    {
    for (j=0;j<2-i;j++)
    {
        if(x[j]>x[j+1])
        {
            t=x[j];
            x[j]=x[j+1];
            x[j+1]=t;
        }
    }
    }
    a=(x[0])*(x[0])+(x[1])*(x[1]);
    b=x[2]*x[2];
    if(x[0]+x[1]>x[2]&&x[0]+x[2]>x[1]&&x[1]+x[2]>x[0])
        {
          if(a==b)
            printf("zhijiao");
          else if(a>b)
            printf("ruijiao");
          else
            printf("dunjiao");
        }
    else printf("no");
    return 0;
}
*/
//回文数
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d,t,i,s;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    for(i=a;i<=b;i++)
    {
        s=0;
        c=i;
        while(c)
        {
            d=c%10;
            s=d+s*10;
            c=c/10;

        }
        if(s==i)
            printf("%d\n",i);
    }
    return 0;
}
*/

//蟠桃记
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s=1,i,n;
    scanf("%d",&n);
    for(i=1;i<n;i++)
        s=(s+1)*2;
    printf("%d",s);
    return 0;
}
*/

//宝宝让梨
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,t,s=0;
    int x[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(x[j]>x[j+1])
            {
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
    }
    for(i=1;i<n;i++)
        s=s+x[i];
    printf("%d",s);
    return 0;
}
*/
//找规律
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[40]={1},s=0;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        x[i]=x[i-1]+2*(i+1);
        s+=x[i];
    }
  for(i=0;i<n;i++)
  {
      printf("%d\n",x[i]);
  }
  printf("%d",s+1);
  return 0;

}
*/

//斐波那契数列
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[40]={1,1};
    int n,i;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        x[i]=x[i-1]+x[i-2];
    }
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    return 0;
}
*/

//排序
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[400];
    int i,j,n,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d ",&x[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-i;j++)
        {
            if(x[j]>x[j+1])
            {
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    return 0;
}
*/
//三角形数
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",s);
            s=s+2;
        }
        printf("\n");
    }
    return 0;
}

*/

//符合条件的数
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,t,s,i,j;
    int x[10];
    scanf("%d %d",&n,&m);
    if(n>m)
    {
        t=n;
        n=m;
        m=t;
    }
    for(i=n;i<=m;i++)
    {
        t=i;
        j=0;
        s=0;
        while(t)
        {
            x[j]=t%10;
            t=t/10;
            s=s+x[j];
            j++;

        }
        if(s*s*s==i)
            printf("%d\n",i);
    }
    return 0;
}
*/
//最大值
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,t;
    int x[2014];
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
    printf("%d",t);
    return 0;
}
*/

//逢7过
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j=0;
    int x[200];
    scanf("%d",&n);
    for(i=7;i<=7*n;i++)
    {

        if(i%7==0||i%10==7)
        {
            x[j]=i;
            j++;
        }
        if(j==n)break;
    }
    for(i=0;i<n;i++)
        printf("%d\n",x[i]);
    return 0;
}
*/

//扫描错误
/*
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
int main()
{
    char s[100];
    int i;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='O')
            s[i]='0';
        else if(s[i]=='l')
            s[i]='1';
        else if(s[i]=='S')
            s[i]='5';
        else if(s[i]=='b')
            s[i]='6';
        else if(s[i]=='B')
            s[i]='8';
        else if(s[i]=='q')
            s[i]='9';
            else ;
    }
  puts(s);
  return 0;
}
*/

//出现次数最多
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,p=0;
    int x[400];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }


}
*/

//绝对值排序
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i,j,t;
    int x[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n-1;i++)
    {
    for(j=0;j<n-1-i;j++)
    {
        if(abs(x[j])<abs(x[j+1]))
        {
            t=x[j];
            x[j]=x[j+1];
            x[j+1]=t;
        }
    }
    }

   for(i=0;i<n;i++)
    printf("%d\n",x[i]);
    return 0;

}
*/
//排名
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n,i,m,t=1;
   int x[200];
   scanf("%d",&n);
   for (i=0;i<n;i++)
    scanf("%d",&x[i]);
   scanf("%d",&m);
   for(i=0;i<n;i++)
   {
       if(m<x[i])
        t++;
   }
   printf("%d",t);
   return 0;
}
*/

//首字母大写
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[100];
    int i;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
            s[i+1]=s[i+1]-32;
    }
    puts(s);
    return 0;
}
*/
//第几天


#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[3],x[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 int s=0,i;

scanf("%d-%d-%d",&a[0],&a[1],&a[2]);
 if((a[0]%4==0&&a[0]%100!=0)||a[0]%400==0)
 {
     x[1]=29;
 }
 else x[1]=28;
 for(i=0;i<a[1]-1;i++)
 {
     s+=x[i];
 }
 s=s+a[2];
 printf("%d",s);
 return 0;
}

// "去重"和"排序"
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,t,j;
    int x[200];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n-1;i++)
       {
    for(j=0;j<n-1-i;j++)
    {
        if(x[j]>x[j+1])
        {
            t=x[j];
            x[j]=x[j+1];
            x[j+1]=t;
        }
    }
       }
   for(i=0;i<n-1;i++)
   {
       t=x[i];
       for(j=i+1;j<n-1;j++)
       {
           if(t==x[j])
           {
               x[j]=0;
               n=n-1;
           }

       }
   }
   printf("%d\n",n);
   for(i=0;i<n;i++)
   {
       if(x[i]!=0)
        printf("%d ",x[i]);
   }
   return 0;
}
*/

//亲和数
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,m,n,s1=0,s2=0;
    scanf("%d %d",&m,&n);
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            s1=s1+i;
        }
    }
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s2=s2+i;
        }
    }
       if(s1==n&&s2==m)
        printf("YES");
    else printf("NO");
    return 0;
}
*/

//乘法表达式
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n,s;
    scanf("%d*%d=",&m,&n);
    s=m*n;
    printf("%d",s);
    return 0;
}
*/
