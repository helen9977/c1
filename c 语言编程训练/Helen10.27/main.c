//判断一个数是否为素数
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int m,k,i,flag=1;
    k=sqrt(m);
    printf("please input a number:\n");
    scanf("%d",&m);
    for(i=2;i<=k;i++)
        if(m%i==0)flag=0;
    if(flag)
        printf("%d is a prime number\n",m);
    else
        printf("%d is not a prime mumber\n",m);
    return 0;

}
*/
//solution 2
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int m,k,i;
    k=sqrt(m);
    printf("please input a number:\n");
    scanf("%d",&m);
    for(i=2;i<=k;i++)
        if(m%i==0)break;
    if(i>=k+1)
        printf("%d is a prime number\n",m);
    else
        printf("%d is not a prime number\n",m);
    return 0;
}
*/
//输出100-200中不能被三整除的数
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,m;
    printf("以下是100到300之间不能被三整除的数：\n\n");
    for(i=100;i<=300;i++)
       {
           if(i%3==0)continue;
           printf("%d  ",i);
       }

       return 0;
       system("pause");
}
*/

#include <stdio.h>
int main()
{
    int a,b,c,max;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            max=a;
        else
            max=c;
    }
    else
    {
        if(b>c)
            max=b;
        else
            max=c;
    }
    printf("%d",max);
    return 0;
}

