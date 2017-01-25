//计算字符串的长度
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x[50];
    int i,s=0;
    printf("input a string:\n");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        s++;
    }
    printf("%d",s);
    return 0;
}
*/
//连接字符串
/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[50],b[20];
    int i,s=0;
    printf("input a string1:\n");
    gets(a);
    printf("input a string2:\n");
    gets(b);


    for(i=0;a[i]!='\0';i++)
    {
        s++;
    }
    for(i=s;b[i-s]!='\0';i++)
    {
        a[i]=b[i-s];
    }
    a[i]='\0';

    printf("string1+string2=:\n");
    puts(a);
    return 0;
}*/

// 字符串对应的asc表
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;
    scanf("%c",&c);
    printf("%d",c);
    return 0;
}
*/

//将k前的a拷贝到b中
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[50],b[100];
    int k,i;
    printf("input a string:\n");
    gets(a);
    printf("input k \n");
    scanf("%d",&k);
    for(i=0;i<=k;i++)
    {
        b[i]=a[i];
    }
    printf("第%d位前的字符串为：\n",k);
    puts(b);
    return 0;
}
*/

/*对于一个已排好序的字符数组，要求输入一个字符，按照字符顺序插入数组中。

已知数组为char ch[20]="acfmr"，
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch[20]={"acfmr"},a[10];
    int i,k,m=0;

    printf("input 1 word:\n");
    scanf("%c",&ch[6]);

    for(i=0;i<5;i++)
    {

        if(ch[6]<=ch[i])
        {
            k=i;
            break;
        }
    }


    for(i=k;i<6;i++)
    {

        a[m]=ch[i];
        m++;
    }
    ch[k-1]=ch[6];
    ch[6]='\0';

    strcat(ch,a);
    puts(ch);
return 0;
}



a
