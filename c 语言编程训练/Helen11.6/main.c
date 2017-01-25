#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  int a,b,i,t,s=0;
  printf("请输入两个整数：\n");
  scanf("%d %d",&a,&b);
   if(a>b)
   {
      t=a;
      a=b;
      b=t;
   }
   else;

    for(i=a;i<=b;i++)
    {
      if(i%2!=0)
        s=s+i;
      else;
    }
    printf("%d",s);
    system("pause");
    return 0;
}

