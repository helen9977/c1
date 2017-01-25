
//删除asc码表中奇数的字符串
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100],t[100];
    int i,a=0;
    printf("input a string:\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
    if(s[i]%2==0)
    {
        t[a]=s[i];
        a++;
    }
    }
    puts(t);
    return 0;
}
*/

//对字符串重新排序,字母在前，数字在后。

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100],b[100],c[100];
    int i,n=0,k=0;

    printf("input a string:\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>64 && a[i]<123)
        {
            b[n]=a[i];
            b[n+1]='\0';
            n++;
        }

        else if(a[i]>48 && a[i]<58)
        {
            c[k]=a[i];
            c[k+1]='\0';
            k++;
        }
    }
   strcat(b,c);
   puts(b);
    return 0;
}
*/

//能被三整除且含有5的数

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[3];
    int i,s=0;
    printf("100-1000之间能被3整除且含有5的数字：\n");
    for(i=100;i<1000;i++)
    {
        if(i%3==0)
        {
        x[0]=i/100;
        x[1]=i/10%10;
        x[2]=i%10;

        if(x[0]==5 || x[1]==5 || x[2]== 5)

        {
            s++;
            printf("%d\t",i);
        }
        }


    }
    printf("\n");
    printf("共有%d个数字",s);
    return 0;
}
*/
//反向输出字符串~
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    int i,s;

    printf("input a string \n");
    gets(a);
    s=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[s-i-1];
    }

    b[i]='\0';
    puts(b);

   return 0;
}
*/

//

