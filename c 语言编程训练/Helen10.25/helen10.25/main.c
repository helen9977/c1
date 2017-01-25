//while 循环的使用 求和
/* #include <stdio.h>
int main()
{
    int i=1,sum=0;
    while(i<=100)
    {
        sum+=i;
        i++;
    }
    printf("sum=%d\n",sum);
    return 0;
}
*/
/*
//正数求和
#include <stdio.h>
int main()
{
    float x,sum;
    sum=.0;
    scanf("%f",&x);
    while(x>0.0)
    {
        sum=sum+x;
        scanf("%f",&x);
    }
    printf("sum=%6.2f\n",sum);
    return 0;
}
*/

//数比大小
/*
#include <stdio.h>
int main()
{
    int x,max;
    max=0;
    scanf("%d",&x);
    while (x>0)
    {
        if(max>x)
            max=max;
        else
            max=x;
        scanf("%d",&x);
    }
   printf("max=%d",max);
   return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    int x,max,i;
    max=0,i=0;
while(scanf("%d",&i)==1 && i<10)
    {
            i++;
        if(max>x)
            max=max;
        else
            max=x;
}
 printf("max=%d",max);
   return 0;
}
*/

//求pi的近似值

/* #include <stdio.h>
#include <math.h>
int main()
{
    float n,s,t,pi;
    t=1; pi=0; n=1.0; s=1;
    do
    {
        pi=pi+t;
        n=n+2;
        s=-s;
        t=s*1./n;
    }while ((fabs(t)>=1E-6));
    pi=pi*4;
    printf("pi的值约等于: %f ",pi);
    return 0;
}
*/

//求前n项和

/* #include <stdio.h>
int main()
{
    float a,n,sum,s,t;
    n=1.0;sum=0;s=1;t=1;
    printf("请输入数字n：");
    scanf("%f",&a);
    do
    {
        sum=sum+t;
        n+=1;
        s=-s;
        t=s*1./n;
        }while(n<=a);
        printf("前n项和为：%f ",sum);
        return 0;
}
*/

//fibonacci数列；

/* #include <stdio.h>
int main()
{
    int n=3,f1=1,f2=1,f3;
    printf("\t\t fibonacci数列前20项为：\n");
    printf("%14d,%14d",f1,f2);
    for(n=3;n<=20;n++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        printf("%14d",f3);
        if(n%5==0)
            printf("\n");
        }
        return 0;
} */


#include <stdio.h>
int main()
{
    int n=3,f1=1,f2=1,f3,a;
    printf("请输入项数n：");
    scanf("%d",&a);
    printf("\t\t fibonacci数列前 %d 项为：\n",a);
    printf("%14d,%14d",f1,f2);
    for(n=3;n<=a;n++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        printf("%14d",f3);
        if(n%5==0)
            printf("\n");
        }
        return 0;
}
