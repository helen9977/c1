//指针比较大小
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x,y,z,max;
 int *px,*py,*pz;
 px=&x;
 py=&y;
 pz=&z;
 scanf("%d %d %d",&x,&y,&z);
 max=*px;
 if(max<*py)
    max=*py;

 if(max<*pz)
    max=*pz;

 printf("%d",max);
 return 0;
}
*/

//指针找出最大的值
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x[10],max,i;
    int *p;
    srand(time(0));
    p=x;
    for(i=0;i<10;i++)
        {
            x[i]=rand()%10;
            printf("%d ",x[i]);
        }
    max=*p;
        for(i=0;i<10;i++)
        {
            if(max<*(p+i))
                max=*(p+i);
        }
    printf("\n%d",max);
    return 0;

}
*/
// 指针大小写转换
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[100],*p;
    p=s;
    gets(s);
    for(p=s;*p!='\0';p++)
    {
        if(*p>='a'&&*p<='z')
        *p=*p-32;
    }
    puts(s);
    return 0;
}
*/
//行指针求主对角线元素之和
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[3][3]={{1,5,9},{2,6,10},{3,7,11}};
int(*p)[3];
int i,s=0;
p=a;
for(i=0;i<3;i++)
{
    s+=*(*(p+i)+i);
}
printf("%d",s);
return 0;
}
*/
