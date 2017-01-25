//fibonacci
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
int *px,x[20]={1,1},i;
void fib(int *m);   //函数声明
px=x;
fib(px);        //地址的传递
for(i=0;i<20;i++)
    printf("%d\t",x[i]);
return 0;
}
//无返回值 直接对地址经行操作
void fib(int *m)
{
    int i;
    for(i=2;i<20;i++)
        *(m+i)=*(m+i-1)+*(m+i-2);
}
*/

//每行元素的最大值
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x[5][5],i,*a=x[0];
    int (*px)[5]=x; //行指针（每行有五个元素的）
    srand(time(0));
   for(i=0;i<25;i++,a++) //指针中二维数组实质是一维数组
   {
       *a=rand()%100;  //通过a指针把随机数赋给数组
   }

    int *max(int t[]); //函数声明
    for(i=0;i<5;i++,px++) //i用来控制循环次数，px++使指针移动
    {
        a=max(*px);

         printf("%d\t",*a);
    }
    return 0;
}
int *max(int t[]) //返回指针的函数
{
    int *p=t; //赋初值，p指向t[][0]
    int i;
    for(i=0;i<5;i++)  //一行有五个数字
        if(*p<t[i])   //    *p与t【】【i】比较
          p=&t[i];
    return p;
}
*/

//函数指针
/*
#include<stdio.h>
#include <stdlib.h>
int main()
{
    int a=3,b=9,t;
    int (*p)(int,int);  //定义一个指针函数
    int add(int x,int y); //函数的声明
    p=add;  //把add函数的地址赋给p 即p指向add函数
    t=(*p)(a,b);//通过指针调用函数，t接收返回值
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

//指针数组完成多个字符串的打印

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    char s[3][200]={"this is a point","this is a string","this is a array"};
    char *c[4];
    char a='5';
    c[3]=&a;  //指向单个字符
    for(i=0;i<3;i++)
    {
        c[i]=s[i]; //指向三个字符串常量的首地址，但包含二维数组的一行字符，
    }
    for(i=0;i<3;i++)
        puts(*(c+i)); //输出字符串
       putchar(*c[3]); //输出单个字符
    return 0;
}
*/
// 输出星期

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

