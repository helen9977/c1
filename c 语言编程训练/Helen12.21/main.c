//fibonacci
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
int *px,x[20]={1,1},i;
void fib(int *m);   //��������
px=x;
fib(px);        //��ַ�Ĵ���
for(i=0;i<20;i++)
    printf("%d\t",x[i]);
return 0;
}
//�޷���ֵ ֱ�ӶԵ�ַ���в���
void fib(int *m)
{
    int i;
    for(i=2;i<20;i++)
        *(m+i)=*(m+i-1)+*(m+i-2);
}
*/

//ÿ��Ԫ�ص����ֵ
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x[5][5],i,*a=x[0];
    int (*px)[5]=x; //��ָ�루ÿ�������Ԫ�صģ�
    srand(time(0));
   for(i=0;i<25;i++,a++) //ָ���ж�ά����ʵ����һά����
   {
       *a=rand()%100;  //ͨ��aָ����������������
   }

    int *max(int t[]); //��������
    for(i=0;i<5;i++,px++) //i��������ѭ��������px++ʹָ���ƶ�
    {
        a=max(*px);

         printf("%d\t",*a);
    }
    return 0;
}
int *max(int t[]) //����ָ��ĺ���
{
    int *p=t; //����ֵ��pָ��t[][0]
    int i;
    for(i=0;i<5;i++)  //һ�����������
        if(*p<t[i])   //    *p��t������i���Ƚ�
          p=&t[i];
    return p;
}
*/

//����ָ��
/*
#include<stdio.h>
#include <stdlib.h>
int main()
{
    int a=3,b=9,t;
    int (*p)(int,int);  //����һ��ָ�뺯��
    int add(int x,int y); //����������
    p=add;  //��add�����ĵ�ַ����p ��pָ��add����
    t=(*p)(a,b);//ͨ��ָ����ú�����t���շ���ֵ
    printf("%d ",t);
    return 0;
}
int add(int x,int y)
{
    int c;
    c=x+y;
    return c;
}
*/

//ָ��������ɶ���ַ����Ĵ�ӡ

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    char s[3][200]={"this is a point","this is a string","this is a array"};
    char *c[4];
    char a='5';
    c[3]=&a;  //ָ�򵥸��ַ�
    for(i=0;i<3;i++)
    {
        c[i]=s[i]; //ָ�������ַ����������׵�ַ����������ά�����һ���ַ���
    }
    for(i=0;i<3;i++)
        puts(*(c+i)); //����ַ���
       putchar(*c[3]); //��������ַ�
    return 0;
}
*/
// �������

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    printf("please input a day\n");
    scanf("%d",&n);
    char w[7][20]={"Monday","Tuesday","Wednesday","Thursday","Firday","Saturday","Sunday"};
    char *p[7];
    for(i=0;i<7;i++)
        p[i]=w[i];

    puts(*(p+n-1));
    return 0;
}

