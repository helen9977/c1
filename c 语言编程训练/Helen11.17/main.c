//cat strcat�ַ��������Ӻ��� strcpy �ַ����ĸ��� strcmp�ַ����ıȽ� strlen �ַ�������
// strlwr�ַ���Сд strupr �ַ�����д
/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[30]="7289qdjaowe290rjd";
   strupr(s);
     puts(s);
    return 0;
}
*/

//ͳ�ƻ�ð�������ѡƱ�ĺ�ѡ��
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
int x[10]={0};
int sum,empty,i;
sum=0;empty=0;
printf("����������֧�ֵ�ѡ�ֱ�ţ�\n");
scanf("%d",&i);
while(i>0)
{ if(i>=1 && i<=10)
    x[i-1]++;
    else
        empty++;
    sum++;
    scanf("%d",&i);
}
for(i=0;i<10;i++)

    printf("�� %d λѡ���� %d Ʊ;\n",i+1,x[i]);
    printf("\n��Ʊ�� %d Ʊ����Ʊ %d Ʊ\n",sum,empty);
for(i=0;i<10;i++)
{
    if(x[i]>=sum/2)
    { printf("\n��%dλѡ�ֻ�ð�Ʊ���ϵ�ѡƱ,��%dƱ\n",i+1,x[i]);break;
           }
}
return 0;
}
*/
//���� �ַ����ľ�������

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char x[60];
    int i;


    for(i=0;i<60;i++)
        x[i]=' ';
    x[i]='\0';

    for(i=0;i<10;i++)
    {
        x[30+i]='*';
        x[30-i]='*';
      puts(x);
    }

    for(i=9;i>0;i--)
    {
        x[30+i]=' ';
        x[30-i]=' ';
       puts(x);
    }
    return 0;
}

