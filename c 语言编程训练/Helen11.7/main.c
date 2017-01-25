//分段函数
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d",&x);
    if(x<1)
        y=x;
    else if(x>=1 && x<10)
        y=2*x-1;
    else
        y=3*x-11;
    printf("%d",y);

    return 0;
}*/
//成绩等级
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x>=90)
        printf("A\n");
    else if(x>=80 && x<=89)
        printf("B\n");
    else if(x>=70 && x<=79)
        printf("C\n");
    else if(x>=60 && x<=69)
        printf("D\n");
    else
        printf("E\n");
    return 0;

}
*/

#include <stdio.h>
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
