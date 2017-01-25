#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s1[80],s2[80],s3[80];
    int i,j,len;
    gets(s1);
    gets(s2);
    len=strlen(s2);
    for(i=0;s1[i]!='\0';i++)
    {
        while(s1[i]==s2[j])
        {
            for(k=j+1;k<j+len;k++)
            {
                i++;
              if(s1[i]==s2[k])
            }
        }
    }

}
