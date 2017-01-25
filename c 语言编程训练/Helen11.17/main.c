//cat strcat字符串的连接函数 strcpy 字符串的复制 strcmp字符串的比较 strlen 字符串长度
// strlwr字符串小写 strupr 字符串大写
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

//统计获得半数以上选票的候选人
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
int x[10]={0};
int sum,empty,i;
sum=0;empty=0;
printf("请输入你所支持的选手编号：\n");
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

    printf("第 %d 位选手有 %d 票;\n",i+1,x[i]);
    printf("\n总票数 %d 票，空票 %d 票\n",sum,empty);
for(i=0;i<10;i++)
{
    if(x[i]>=sum/2)
    { printf("\n第%d位选手获得半票以上的选票,即%d票\n",i+1,x[i]);break;
           }
}
return 0;
}
*/
//菱形 字符串的经典运用

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

