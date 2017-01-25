//十个数字最大及其位置
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10];
    int max,i,k;
    printf("input 10 numbers:\n");
    for(i=0;i<=9;i++)
    {
    scanf("%d",&x[i]);
    }
    max=x[0];
    k=0;
    for(i=1;i<=9;i++)
    {
        if(x[i]>max)
        {max=x[i];
        k=i;}
        else;
    }
        printf("%d %d",max,k);
        return 0;

}
*/

//十个数最小并与第一个整数对换
/* #include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[10];
    int min,i,k,a;
    for(i=0;i<10;i++)
        scanf("%d",&x[i]);
    min=x[0];
    for(i=1;i<=9;i++)
    {
        if(x[i]<min)
           {min=x[i];
            a=i;}
    }
    printf("%d\n",min);
    k=x[0];
    x[0]=min;
    x[a]=k;
    for(i=0;i<10;i++)
    {
        printf("%d ",x[i]);
    }
    return 0;
}
*/

//fibonacci 数列
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[20]={1,1};
    int i;
    for(i=2;i<20;i++)
    {
        x[i]=x[i-1]+x[i-2];
    }
    for(i=0;i<20;i++)
    {
        if(i%5==0)printf("\n");
        printf("%d\t",x[i]);
    }
    return 0;
}
*/
// 十个数按大小排列
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10];
    int i,k,m,j;
    for(i=0;i<10;i++)
    scanf("%d",&x[i]);
    printf("\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<9-i;j++)
    {
        if(x[j]>x[j+1])
        {
            k=x[j];
            x[j]=x[j+1];
            x[j+1]=k;
        }
    }
    }
    printf("这十个数从小到大顺序为：\n");
      for(i=0;i<10;i++)
            printf("%d ",x[i]);
      return 0;
}
*/

//寻找输入的数是否在数组中存在
/* #include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[10];
    int k,i;

    printf("input 10 numbers:\n");

    for(i=0;i<10;i++)
    scanf("%d",&x[i]);
    printf("\n");

    printf("input the key number:\n");
    scanf("%d",&k);

    for(i=0;i<10;i++)
    {
        if(x[i]==k)
           {printf(" %d 在数组中的第 %d 位\n",k,i+1);break;}
    }
    if(i==10)
        printf("not found %d",k);
    else;
}
*/
//在数组中查找k出现的次数
 #include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[10];
    int k,i,c=0;

    printf("input 10 numbers:\n");

    for(i=0;i<10;i++)
    scanf("%d",&x[i]);
    printf("\n");

    printf("input the key number:\n");
    scanf("%d",&k);

    for(i=0;i<10;i++)
    {
        if(x[i]==k)
        c=c+1;
        }
        if(c==0)
            printf("%d没有出现在数组中！\n",k);
        else
        printf("%d出现了%d次",k,c);

        return 0;
}
