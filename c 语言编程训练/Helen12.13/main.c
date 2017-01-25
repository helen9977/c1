//最小公倍数
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    int max(int x,int y);
    c=max(a,b);
    printf("%d",c);
    return 0;
}
int max(int x,int y)
{
    int c;
    if(x>y)
    c=x;
    else
    c=y;
    while (c%x!=0||c%y!=0)
    {
        c++;
    }
    return c;
}
*/

// 水仙花数
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    int flw(int x);
    b=flw(a);
    if(b==1)
        printf("yes!");
    else
        printf("no!");
    return 0;

}
int flw(int x)
{
    int w,y,z;
    int flag;
    w=x/100;
    y=x/10%10;
    z=x%10;
    if(w*w*w+y*y*y+z*z*z==x)
        flag =1;
    else
        flag =0;
    return flag;
}
*/

