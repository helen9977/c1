
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,x,y;
    srand(time(0));
    x=rand()%10;

    for(i=1;i<4;i++)
    {
    printf("\n请输入数字：\n");
    scanf("%d",&y);
    if(x==y)
        {printf("哥哥好聪明~猜对啦 爱你么么哒亲一个\n");
        Sleep(2500);break;}
    else if(x<y)
        printf("笨蛋！太大了 小一点嘛\n");
    else
        printf("不对，需要upup哦~\n");

    Sleep(1500);
    system("cls");
    }
    getchar();
    return 0;
}


/*
//背景颜色的改变

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
int main()
{
    system("color 1,2");
    getchar();
    return 0;
}
*/
//任意两个数的阶乘之和
/*
#include <stdio.h>
int main()
{
    int m,n,s,x,y,i,sum=0;
    printf("请输入两个数字：");
    scanf("%d,%d",&m,&n);

    for(x=1,s=1;x<=m;x++)
        {
            s=s*x;
            }
    for(y=1,i=1;y<=n;y++)
        {
            i=i*y;
            }

    sum=s+i;
    printf("%d!+%d!=%d",m,n,sum);
    return 0;
}
*/

/*
//九九乘法表
#include <stdio.h>
int main()
{
    int i,j;
    printf("\t\t\t*****9*9乘法表******\n");

    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d * %d = %d ",i,j,i*j);
            printf("\n");
    }
    return 0;
}
*/
//白鸡问题


/*#include <stdio.h>
int main()
{
    int x,y,z;
    for(x=0;x<=20;x++)
        for(y=0;y<=33;y++)
        {
        z=100-x-y;
        if (15*x+9*y+z==300)
        printf("x=%d y=%d z=%d\n",x,y,z);
        }
    return 0;
}*/

/*
//求解三元三次方程

#include <stdio.h>
int main()
{
    int x,y,z;
    for(x=-5;x<=11;x++)
        for(y=-10;y<=9;y++)
        for(z=-6;z<=18;z++)
        if(x*x*x+y*y*y+z*z*z==3)
        printf("x=%d y=%d z=%d\n",x,y,z);
    return 0;
}
*/
//韩信点兵
/*#include <stdio.h>
int main()
{
    int x;
    for (x=1;;x++)

        if(x%5==1 && x%6==5 && x%7==4 && x%11==10)
    {
        printf("x=%d",x);
        break;
    }
}*/
