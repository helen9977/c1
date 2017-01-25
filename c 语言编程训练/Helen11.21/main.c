//矩阵主对角线元素之和
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[4][4];
    int i,j,sum=0;

    printf("4*4矩阵：\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            scanf("%d",&x[i][j]);
    }
    for(i=0;i<4;i++)
    {
        sum=sum+x[i][i];
    }
    printf("主对角线元素之和为：\n");
    printf("%d",sum);
    return 0;
}
*/

//杨辉三角：
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[10][10];
    int i,j;
    for(i=0;i<10;i++)
    {  x[i][0]=1;
       x[i][i]=1;
    }
    for(i=2;i<10;i++)
    { for(j=1;j<i;j++)
        {
            x[i][j]=x[i-1][j-1]+x[i-1][j];
        }

}
for(i=0;i<10;i++)
{
    for(j=0;j<i+1;j++)
        printf("%d ",x[i][j]);
    printf("\n");
}
return 0;
}
*/

//矩阵乘法
/*

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a[2][3],b[3][4],c[2][4];

    int i,j;

    printf("input 2*3:\n");
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("\ninput 3*4:\n");
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            scanf("%d",&b[i][j]);

        for(i=0;i<2;i++)
            {for(j=0;j<4;j++)
              c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][i];
            }

            printf("\n(2*3)*(3*4):\n");
        for(i=0;i<2;i++)
            {
                for(j=0;j<4;j++)
                {
                printf("%d ",c[i][j]);

                }
                printf("\n");
            }
 return 0;
}
*/
//二维数据的鞍点

/*#include <stdio.h>
#include <stdlib.h>
#define m 3
#define n 4

int main()
{
    int x[m][n],flag;
    int i,j;

    printf("input %d*%d :\n",m,n);

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&x[i][j]);
        for(j=0;j<n;j++)
     {
        for(i=0;i<m;i++)
     {
        if(<x[i][j])
        s[j]=x[i][j];
     }
     }
     for(i=0;i<m;i++)
     {for(j=0;j<n;j++)
     {
         if(t[i]>x[k][j])
            t[i]=x[k][j];
     }
     for(i=0;i<m;i++)
     if(==s2) printf("%d",s1);break;
     else;
     }
     }

  printf
}
*/
//字符串连接 错误！
/*
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main ()
{
    char a[50],b[20];
    int i,j,k;
    for(i=0;i<5;i++)
    scanf("%c",&a[i]);
    a[i]='\0';
    getchar();
        for(i=0;i<5;i++)
        scanf("%c",&b[i]);
    b[i]='\0';

    strcat(a,b);

    for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
    {
        if(a[j]<a[j+1])
           {
            k=a[j];
            a[j+1]=k;
            a[j]=a[j+1];
           }
    }

puts(a);
return 0;
}
*/
//两个数组合并且排序
/*#include <stdio.h>
#include <stdlib.h>
 int main()
 {
     int a[10],b[10],c[50];
     int i,j,k;
     for(i=0;i<10;i++)
        {scanf("%d",&a[i]);
         c[i]=a[i];}
     for(i=10;i<20;i++)
        {scanf("%d",&b[i-10]);
        c[i]=b[i-10];}

        for(i=0;i<19;i++) // 控制循环次数
        {
            for(j=0;j<19-i;j++) // 控制数组下标
        {
            if(c[j]>c[j+1])
               {
                k=c[j];
                c[j]=c[j+1];
                c[j+1]=k;
               }
        }
        }

         for(i=0;i<20;i++)
            printf("%d ",c[i]);

        return 0;

 }
 */
// 鞍点 该行最大 该列最小。
#include <stdio.h>
#include <stdlib.h>
#define m 3
#define n 4

int main()
{
    int x[m][n],flag;
    int i,s,j,a,k;

    printf("input %d*%d :\n",m,n);

    for(i=0;i<m;i++)
       {for(j=0;j<n;j++)
        scanf("%d",&x[i][j]);}
        // input m*n

    for(i=0;i<m;i++)
    {
    s=x[i][0];
    a=0;
    for(j=0;j<n;j++)

        if(s<x[i][j])
        {
            s=x[i][j];
            a=j;
        }
        flag=1;
       for(k=0;k<m;k++)
        {
            if(s>x[k][a])
        {
         flag=0;
         break;
        }
       }
        if(flag)
        {
        printf("%d ",s);
        break;
        }
    }
  if(!flag) printf("没有鞍点");

    return 0;
}
