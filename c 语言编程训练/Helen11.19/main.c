/*#include <stdio.h>
#include <stdlib.h>
#define M 10
int main()
{
    int x[M];
    int i,sum=0,s=0,aver;
    printf("请输入%d个同学的成绩\n",M);
    for(i=0;i<M;i++)
        scanf("%d",&x[i]);
    for(i=0;i<M;i++)
        sum+=x[i];
    aver=sum/M;
    for(i=0;i<M;i++)
    {
        if(x[i]<aver)
            s+=1;
        else;
    }
    printf("平均分为%d，低于平均分的学生有 %d人",aver,s);
    return 0;
}
*/

/* #include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int x[100],y[100];
    int k,N,n,i,j;
    printf("input numbers:\n");
    scanf("%d",&N);

    for(i=0;i<N;i++)
        scanf("%d",&x[i]);

    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
           if(x[j]>x[j+1])
           {
               k=x[j];
               x[j]=x[j+1];
               x[j+1]=k;
           }
        }
    }
    printf("由小到大的顺序为:\n");
    for(i=0;i<N;i++)
    printf("%d ",x[i]);

    printf("\n请输入指定位置：\n");
    scanf("%d",&n);
    j=0;
    for(i=n;i<N;i++)
    {
        y[j]=x[i];
        j++;
    }
    for(j=0;j<N-n-1;j++)
        {
        for(i=0;i<N-1-n-j;i++)
    {
        if(y[i]<y[i+1])
            {
                k=y[i];
                y[i]=y[i+1];
                y[i+1]=k;
            }
    }
        }
        printf("第%d位后的数字逆序输出：\n",n);
        for(i=0;i<N-n;i++)
        printf("%d ",y[i]);

        return 0;
}
*/
//存储逆序

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int x[10],y[10];
    int i,j,k;
    printf("input numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }



    for(i=0;i<9;i++)
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
for(i=0;i<10;i++)
{
    y[i]=x[9-i];
}

printf("这些数据逆序输出：\n");
   for(i=0;i<10;i++)
     printf("%d ",y[i]);

return 0;
}

