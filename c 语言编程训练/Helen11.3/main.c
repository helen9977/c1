//100--200之间的全部素数
/* #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
  int m,i,k;
  for(i=100;i<=200;i++)
    {
         k=sqrt(i);
    for(m=2;m<=k;m++)
        if(i%m==0) break;

    if(m>=k+1)
        printf( "%d\n",i);
    else;
    }
    return 0;
}
*/
// 删除字符串中的数字
/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    while((c=getchar())!=13)
    {
        if(c<48 || c>57)
            printf("%c",c);
            else;
    }
    return 0;

}
*/

//水仙花数字
/* #include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,i;
    for(i=100;i<=999;i++)
       {
        a=i/100;
        b=i%100/10;
        c=i%10;
        if(a*a*a+b*b*b+c*c*c==i)
            printf("%d\n",i);
            else;
       }
       return 0;

}
*/
// 寻找符合条件的四位数
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,d,i,k,j;
    for(i=1000;i<=9999;i++)
       {
        a=i/1000;
        b=i/100%10;
        c=i/10%10;
        d=i%10;
        k=sqrt(i);
        for(j=31;j<=k;j++)
       {
        if(a+c==10 && b*d==12 && j*j==i)
            printf("%d\n",i);
        else;}
       }
        return 0;
}
*/
