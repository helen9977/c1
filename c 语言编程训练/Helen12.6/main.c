//�׳� �ݹ�
/*#include <stdio.h>
int jc(int n)
{
    if (n==1)
        return 1;
    else
        return n*jc(n-1);
}
int main()
{
    int n,res;
    scanf("%d",&n);
    res=jc(n);
    printf("%d",res);
    return 0;
}*/
//��� �ݹ�
/*
#include <stdio.h>

int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}
int main()
{
    int n,r;
    scanf("%d",&n);
    r=sum(n);
    printf("%d",r);
    return 0;
}
*/
//һά������ƽ��ֵ
/*
#include <stdio.h>
int main()
{
    int a[10]={4,7,9,1,54,67,88,2,21,3};
    float ave;
    float aver(int a[10]);
    ave=aver(a);
    printf("%.2f",ave);
    return 0;
}
float aver(int a[10])
{
    int i,sum=0;
    for(i=0;i<10;i++)
        sum=sum+a[i];
    return sum/10.00;
}
*/

//���������е�ż������
/*#include <stdio.h>
int main()
{
    int a[10]={4,7,9,1,54,67,88,2,21,3};
    int sum(int n);
    int i, s=0;
    for (i=0;i<10;i++)
        s=s+sum(a[i]);//��ÿ��Ԫ�ش��ݸ��Զ��庯��
    printf("%d",s);
    return 0;
}
int sum(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
*/
//ð������


/* #include <stdio.h>
int main()
{
    int a[10]={10,5,73,8,9,45,34,55,23,6};
    int i;
    void popo(int a[]);     //��������
    popo(a);           // ����
    for (i=0;i<10;i++)
        printf("%d\t",a[i]);  // ���
    return 0;
}
void popo(int a[])
{
    int i,j,t;
    for(i=0;i<9;i++)    // �ı���������Ԫ��
        for(j=0;j<9-i;j++)
    {
        if(a[j]<a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
}
*/

// �����ÿ�����ֵ
/*
#include <stdio.h>
int main()
{
    int x[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int m[3];
    int i;
    void max(int x[3][4],int res[3]);
    max(x,m);
    for (i=0;i<3;i++)
    printf("%d  ",m[i]);
    return 0;
}

void max(int x[3][4],int res[3])
{
  int i,j;

  for(i=0;i<3;i++)
  {
      res[i]=x[i][0];
      for(j=0;j<4;j++)
      {
          if (res[i]<x[i][j])
            res[i]=x[i][j];
      }
  }
}
*/

// ���Խ�Ԫ�����ֵ
#include <stdio.h>
  int main()
{
    int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int max(int s[3][3]);
    int res;
    res=max(x);
    printf("%d ",res);
    return 0;
}

int max(int s[3][3])
{
    int k,i;
    k=s[0][0];
    for(i=1;i<3;i++)
    {
       if(k<s[i][i])
       {
           k=s[i][i];
       }
    }
    return k;
}
