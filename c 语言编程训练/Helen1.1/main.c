//最大公约数
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,r;
    int *px,*py;
    px=&x;
    py=&y;
    scanf("%d %d",&x,&y);
    while(*py!=0)
    {
        r=*px%*py;
        *px=*py;
        *py=r;
    }
    printf("最大公约数为：%d",*px);
    return 0;
}
*/

//冒泡排序
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[10];
    int *p,i,j,t;
    p=x;
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<10;i++)
    {
        p=&x[0];
        for(j=0;j<9;j++)
        {
            if(*p>*(p+1))
            {
                t=*p;
                *p=*(p+1);
                *(p+1)=t;
            }
            p++;
        }
    }
    p=x;
    for(i=0;i<10;i++)
    {
        printf("%d ",*p++);
    }
    return 0;
}
*/

//逆序输出
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[10];
    int *p,i;
    p=x;
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    p=&x[9];
    for(i=0;i<10;i++)
        printf("%d ",*p--);
    return 0;
}
*/
//统计字符串中空格的个数
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[100];
    char *p;
    int t=0;
    gets(s);
    for(p=s;*p!='\0';p++)
    {
        if(*p=='')
            t++;
    }
    printf("%d",t);
    return 0;
}
*/
//将数字改为*
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100];
    char *p;
    gets(s);
    for(p=s;*p!='\0';p++)
    {
        if(*p>='0'&&*p<='9')
        {
            *p='*';
        }
    }
    puts(s);
    return 0;
}
*/
//函数统计小写字母的个数
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[100];
    int n;
    gets(s);
    int sum(char s[]);
    n=sum(s);
    printf("%d",n);
    return 0;

}
int sum(char s[])
{
    int a=0,i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a'&&s[i]<='z')
            a++;
            i++;
    }
    return a;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[100],*p;
    p=s;
    int n;
    gets(s);
    int sum(char x[100]);
    n=sum(*p);
    printf("%d",n);
    return 0;

}
int sum(char x[])
{
    int a=0;
    char *z=x;
    while(*z!='\0')
    {
        if(*z>='a'&&*z<='z')
            a++;
    }
    return a;
}
*/
//矩阵的转置

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[5][5];
    int i,j;
    int (*p)[5]=a;
    srand(time(0));
    for (i=0;i<5;i++)
        for(j=0;j<5;j++)
        a[i][j]=rand()%100;



}
