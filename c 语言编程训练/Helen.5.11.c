#include "stdio.h"
#include "math.h"
double fact(double n);
double fcos(double e, double x);
int main(void)
{
    int repeat, ri;
    double e, sum, x;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%lf", &e,&x);
        sum=fcos(e,x);
        printf("sum = %lf\n", sum);
    }
}
double fcos(double e,double x)
{
    int flag;
    double result,m,z,s,i;
    i=0;
    m=1;
    z=1;
    flag=1;
    result=0;
    do{

        s=(double)z/m;
        result+=flag*s;
        i=i+2;
        flag=-flag;
        z=pow(x,i);
        m=fact(i);

    }while(s>=e);//用do while 不用while
    return result;
}
double fact(double n)
{
    double result;
    if(n==1)
        result=1;
    else result=n*fact(n-1);// 注意递归调用。。

    return result;
}
