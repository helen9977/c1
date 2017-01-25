#include<stdio.h>

#include<string.h>
void swap(char *a,char *b)
{

    char t;
    t=*a;
    *a=*b;
    *b=t;
}
void reverse1(char *begin,char *end)
{

    while(begin<end)
    {
        swap(begin,end);
        begin++;
        end--;
    }
}
void reverse(char*s)
{

    char *begin=s;
    char *end=begin;
    while(*end!='\0')
    {
        end++;
    }
    end--;//指向串尾部
    reverse1(begin,end);//整体反转

    begin=s;
    end=begin;
    char *wordend=NULL;
    do
    {
        if(*end==' '||*end=='\0')
        {
            wordend=end-1;//指向空格的前面，单词的尾部
            reverse1(begin,wordend);
            begin=end;
            while(*begin==' ')//指向下一个单词开头
                {
                    begin++;
                }
        }
        end++;//找到下一个单词的尾部
        }while(*(end-1)!='\0');
}

int main()
{
    char a[100];
    gets(a);
    reverse(a);
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]!=' ')
            printf("%c",a[i]);
        if(a[i]==' ')
            if(a[i-1]!=' ')//前一个不是空格才输出。即只输出第一个空格
                printf("%c",a[i]);
        i++;
    }

    return 0;

}
