//ʮ�����������λ��
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

//ʮ������С�����һ�������Ի�
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

//fibonacci ����
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
// ʮ��������С����
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
    printf("��ʮ������С����˳��Ϊ��\n");
      for(i=0;i<10;i++)
            printf("%d ",x[i]);
      return 0;
}
*/

//Ѱ����������Ƿ��������д���
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
           {printf(" %d �������еĵ� %d λ\n",k,i+1);break;}
    }
    if(i==10)
        printf("not found %d",k);
    else;
}
*/
//�������в���k���ֵĴ���
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
            printf("%dû�г����������У�\n",k);
        else
        printf("%d������%d��",k,c);

        return 0;
}
