//�����ĵ���
/*#include <stdio.h>
#include <stdlib.h>
int jc(int n)
{
    int i,s=1;
    for(i=2;i<=n;i++)
        s=i*s;
    return s;
}
int main()
{
    int n,s;
    scanf("%d",&n);
    s=jc(n);
    printf("%d�Ľ׳���%d",n,s);
    return 0;
}
*/

//�������е����ֵ

/*#include <stdio.h>
float m(float a, float b)
{
    float c;
    c=(a>b)?a:b;
    return c;
}
int main ()
{
    float a,b,c;
    scanf("%f%f",&a,&b);
     c=m(a,b);
    printf("%.2f",c);
    return 0;
}
*/

//�ۼ� �����ĵ���

/*#include <stdio.h>
int Sum(int n)
{
    int s=0,i;

    for(i=0;i<=n;i++)
    {
        s=s+i;
    }
    return s;
}
int main()
{
    int n,s;
    scanf("%d",&n);
    s=Sum(n);
    printf("%d",s);
    return 0;
}
*/

//����� �������� ������������
/*
#include <stdio.h>
int sort(int x[3])
{
    int t,i,j;
    for(i=0;i<2;i++)
    for(j=0;j<2-i;j++)
    {
        if(x[j]<x[j+1])
        {
            t=x[j];
            x[j]=x[j+1];
            x[j+1]=t;
        }
    }

}
int main()
{
    int x[3];
    int i;
    for(i=0;i<3;i++)
        scanf("%d",&x[i]);

    sort(x);
    for(i=0;i<3;i++)
        printf("%d\n",x[i]);
    return 0;
}
*/

//���� ��ĸ˫������


/*
#include<stdio.h>
#include<string.h>
int main()
{
    char name[3][20],str[20];
    float grade[3][3],sum[3];
    float t;
    int _class[3];
    int i,j,k;

    for(i=0;i<3;i++)
        {
            scanf("%d",&_class[i]);
            scanf("%s",name[i]);
            for(j=0;j<3;j++)           //һ��ͬѧ�������ɼ�����ά����
             scanf("%f",&grade[i][j]);
        }
        //�ɼ�����
    sum[0]=grade[0][0]+grade[0][1]+grade[0][2];
    sum[1]=grade[1][0]+grade[1][1]+grade[1][2];
    sum[2]=grade[2][0]+grade[2][1]+grade[2][2];

    for(j=0;j<2;j++)
        {
            for(i=0;i<2-j;i++)   //ð������
            {
                if(_class[i]>_class[i+1])   //������༶
                {
                    k=_class[i];
                    _class[i]=_class[i+1];
                    _class[i+1]=k;           //�༶�Ľ���
                    strcpy(str,name[i]);
                    strcpy(name[i],name[i+1]);
                    strcpy(name[i+1],str);  //���֡��ַ����Ľ��� ����ʹ��strcpy����
                    t=sum[i];
                    sum[i]=sum[i+1];
                    sum[i+1]=t;   //�ܷ����Ľ���
                    }

                    if(_class[i]==_class[i+1])
                        {
                            if(strcmp(name[i],name[i+1])>0)// �༶��ͬ �Ƚ���������ĸ strcmp�������ԱȽ��ַ����Ĵ�С
                            {
                                strcpy(str,name[i]);
                                strcpy(name[i],name[i+1]);
                                strcpy(name[i+1],str);//�����Ľ���
                                t=sum[i];
                                sum[i]=sum[i+1];
                                sum[i+1]=t;
                            }
                        }
            }
        }
        for(i=0;i<3;i++)
            printf("%d,%s,%5.1f\n",_class[i],name[i],sum[i]);//��˳�������������
        return 0;
}
*/




