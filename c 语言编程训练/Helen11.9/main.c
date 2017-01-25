//阿基米德特性
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,m;
    scanf("%d %d",&a,&b);
    if(a>b)
        {
            c=a;
            a=b;
            b=c;
            }
    else;
for(m=1;m<b;m++)
           {
               if(a*m>b)break;
               }
            printf("%d",m);


system("pause");
return 0;

}
*/
//水仙花数
/* #include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,n;
   scanf("%d",&n);
        a=n/100;
        b=n%100/10;
        c=n%10;
        if(a*a*a+b*b*b+c*c*c==n)
            printf("TRUE");
            else
                printf("FALSE");
       return 0;
}
*/
// 倒数
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{       int a,b;
        float A,B,c;
        scanf("%d %d",&a,&b);
        A=a;
        B=b;
        c=A/B;
        printf("%.2f",c);
        return 0;

}
*/
//两点的距离
/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,s;
    scanf("%d %d",&n,&m);
    if(m>n)
        s=m-n;
    else
        s=n-m;
    printf("%d",s);
    return 0;
}
*/
// 区间内的奇数和
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,s=0;
    scanf("%d %d",&a,&b);
    if(a<b)
        {
    for(i=a;i<=b;i++)
    {
        if(i%2!=0)
        s=s+i;
        else;
}
        }
    else
      for(i=b;i<=a;i++)
    {
        if(i%2!=0)
        s=s+i;
        else;
}

printf("%d",s);
return 0;

}
*/

//成绩段
/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>=90 && n<=100)printf("A");
    else if(n>=80 && n<=89)printf("B");
    else if(n>=70 && n<=79)printf("C");
    else if(n>=60 && n<=69)printf("D");
    else if(n>=0 && n<=59)printf("E");
    else printf("Score is error!");
    return 0;

}
*/
//求和
/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,s=0;
    for(i=1;i<=597;i=i+4)
    {
        n=i*(i+2);
        s=n+s;

    }
    printf("%d",s);
    return 0;
}
//ACM
*/
/* #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x[5];
    int s=0,i,a,b;
    double c,d;
    scanf("%d",&a);
    b=a;
    c=a;
    while(b)
    {
        s=s+1;
        b=b/10;
    }
    printf("%d\n",s);


  for(i=s;i>=2;i--)
   {
      d=pow(10,i-1);
      x[i]=c/d;
      printf("%d ",x[i]);
      c=c-x[i]*d;

  }
  x[5]=a%10;
  printf("%d\n",x[5]);
    while(a)
    {
        i=a%10;
        printf("%d",i);
        a=a/10;
    }

    return 0;

}
*/

//整数打魔镜
/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    if(a!=100)
    {
    b=a/100;
    c=a/10%10;
    d=a%10;
    if(b>c && c>d)printf("%d%d%d",b,c,d);
    else if(b>d && d>c)printf("%d%d%d",b,d,c);
    else if(d>b && b>c)printf("%d%d%d",d,b,c);
    else if(d>c && c>b)printf("%d%d%d",d,c,b);
    else if(c>b && b>d)printf("%d%d%d",c,b,d);
    else printf("%d%d%d",c,d,b);
    }
    else printf("100");
    return 0;
}
*/
// 判断两个数是否相邻
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b+1==a || a+1==b)
        printf("TRUN");
    else printf("FALSE");
    return 0;
}
