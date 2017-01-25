#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*int main()
{
    int i,n,j=0;
    char a[100],b[100];
    gets(a);
    scanf("%d",&n);
    for(i=n-1;a[i]!='\0';i++)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        b[j]=a[i];
        j++;

    }

    b[j]='\0';
    puts(b);
    return 0;

}
*/
/*
int main()
{
    int i=0,s=1;
    char a[100];
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]==' '&&a[i+1]!=' ')
            s++;
        i++;
    }
    printf("%d",s);
    return 0;
}
*/

/*

void reverse_print(char *str)
{
    int len=strlen(str);
    int i=len-1;
    int last =len;
    char tmp;
    while(i>=0)
    {
        if(str[i]==' '||i==0)
        {
            tmp=str[last];
            str[last]='\0';
            if(i==0&&str[i]!='\0')
            {
                printf("%s",str+i);
            }
            else
            {
                printf("%s",str+i+1);
            }
            str[last]=tmp;
            last=i;
        }
        i--;
    }
}
int main()
{
    char *buf=NULL;
    int len=0;
    len=getline(&buf,&len,stdin);
    if (len==-1)
    {
        printf("getline error.\n");
        return -1;
    }
    else
    {
        buf[len]='\0';
        buf[len-1]='\0';
        reverse_print(buf);
        if(buf)
        {
            free(buf);
        }
    }
    return 0;
}
*/
/*
int main()
{
    int i=0,j,k=0,s=1;
    char a[1024],b[1024][1024];
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]==' '&&a[i+1]!=' ')
            s++;
        i++;
    }
    for(i=0;i<s;i++)
    {
        j=0;
        do
        {
            if(a[k]!=' ')
            {
                b[i][j]=a[k];
                k++;
            }
            else
            {
               k++;

            }

        }while(a[k]==' '&&a[k+1]!=' ');
    }
    for(i=s-1;i>=0;i--)
        printf("%s ",b[i]);
    return 0;
}

*/

int main()
{
    int i=0,j=0;
    char a[1024],b[1024];
    gets(a);
    while(a[i]!='\0')
    {
        b[j]=a[i];
    }
}
