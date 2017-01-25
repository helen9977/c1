/*对于一个已排好序的字符数组，要求输入一个字符，按照字符顺序插入数组中。

已知数组为char ch[20]="acfmr"，
*/

/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[20]={"acfmr"},a,k;
    int i,j;

    printf("input a key：\n");
    scanf("%c",&a);
    ch[5]=a;
    for(i=0;i<5;i++)
       {
           for(j=0;j<5-i;j++)
    {
        if(ch[j]>ch[j+1])
           {k=ch[j];
            ch[j]=ch[j+1];
            ch[j+1]=k;}
    }
       }
    ch[6]='\0';
    puts(ch);
    return 0;
}
*/

/*输入

   输入包括两行：
   第一行是n（1 <= n <= 1000）。
   第二行是n个整数，邻近两数之间用一个空格隔开。

输出

   输出大于平均数的整数个数*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,s=0,i,b=0;
    int x[1024];
    float a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        b=x[i]+b;
    }
    a=(b/n)*1.0;
    for(i=0;i<n;i++)
    {
        if(x[i]>a)
            s++;
    }
    printf("%d",s);
    return 0;
}
*/

//第一个不相同的字符串的asc码之差；
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[50],s2[50];
    int a,b,c,t,i;
    printf("input a string1:\n");
    gets(s1);
    printf("input a string2:\n");
    gets(s2);
    b=strlen(s1);
    c=strlen(s2);
    if(b>c)
    {
        t=b;
        b=c;
        c=t;
    }

    for(i=0;i<b;i++)
    {
        if(s1[i]!=s2[i])
        {
            if(s1[i]>s2[i])
                a=s1[i]-s2[i];
            else
                a=s2[i]-s1[i];
                break;
        }
    }
    printf("%d",a);
    return 0;

}
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*fp;
    char c;
    fp=fopen("E:\\Helenの小时光\\Helen11.23\\bin\\Debug\\Helen11.exe","r");
    if(NULL==fp)
    {
        printf("not open the file!");
        system("pause");
        return 13;
    }
    while(!feof(fp))
    {
        c=fgetc(fp);
        putchar(c);
    }
    getchar();
    return 0;
}
