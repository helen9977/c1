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
    end--;//ָ��β��
    reverse1(begin,end);//���巴ת

    begin=s;
    end=begin;
    char *wordend=NULL;
    do
    {
        if(*end==' '||*end=='\0')
        {
            wordend=end-1;//ָ��ո��ǰ�棬���ʵ�β��
            reverse1(begin,wordend);
            begin=end;
            while(*begin==' ')//ָ����һ�����ʿ�ͷ
                {
                    begin++;
                }
        }
        end++;//�ҵ���һ�����ʵ�β��
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
            if(a[i-1]!=' ')//ǰһ�����ǿո���������ֻ�����һ���ո�
                printf("%c",a[i]);
        i++;
    }

    return 0;

}
