// Со»ФИэЅЗ cyl
/*
#include<stdio.h>
int main(void)
{
    int i,j,a[10][10];
    a[0][0]=1;
    a[1][0]=1;
    a[1][1]=1;
     for(i=2;i<10;i++)
      {
          a[i][i]=1;
          a[i][0]=1;
          for(j=1;j<=i-1;j++)
            {
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
      }

    for(i=0;i<10;i++)
     {
       for(j=0;j<=i;j++)
         {
             printf("%d ",a[i][j]);
         }
         printf("\n");
     }
   return 0;
}
*/
//第一个只出现一次的数字
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x[50];
    int i,j,flag;

    printf("input a number:\n");
    gets(x);
    for(i=0;x[i]!='\0';i++)
      {
          for(j=i+1;x[j]!='\0';j++)
      {
          if(x[i]!=x[j])
            flag=1;
          else
          {
          flag=0;
          break; //只要找到有相同元素就跳出内循环

          }
      }
       if(flag)
       {
        printf("%c",x[i]);
        break;  //只要找到第一个只出现一次的元素就跳出外循环
       }

      }
      return 0;
}
*/

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,flag;
    int x[50];

    printf("请输入位数：\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    for(i=0;i<n;i++)
      {
          for(j=i+1;j<n;j++)
      {
          if(x[i]!=x[j])
            flag=1;
          else
          {flag=0;
          break;}
      }
       if(flag)
       {

       printf("%d",x[i]);
        break;
       }
      }
      return 0;
}
*/


