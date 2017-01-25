#include <stdio.h>
/*#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[80],s2[80];
    int i,len;
    gets(s1);
    gets(s2);
    len=strlen(s2);
    for(i=0;s1[i]!='\0';i++)
    {
        while(s1[i]==s2[j])
        {
            flag=1;
            j++;
        }
    }
}
*/


#include <stdio.h>
void main()
{
	char str[80],c_begin,c_end;
	char *fun(char *p,char c_begin,char c_end);

	scanf("%s",str);
	getchar();
	c_begin=getchar();
	getchar();
	c_end=getchar();
	puts(fun(str,c_begin,c_end));
}
char *fun(char *p,char c_begin,char c_end)
{
    char *q;
    q=p;
    char newstr[80];
    char *news;
    news=newstr;
    int i=0;
    while(*p!=c_begin)
        p++;
    while(*q!=c_end)
        q++;
    for(p;p=q+1;p++)
    {
        newstr[i]=*p;
        i++;
    }

   news=newstr;
   return news;
}
