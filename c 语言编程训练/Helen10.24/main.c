//判定是否为闰年
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int y,a;
    printf("判断任意年份是否为闰年哟~\n");
    printf("\n请输入一个年份y:");
    scanf("%d",&y);
    if (y%4==0)
        if (y%100!=0)
        a=1;
        else
           if (y%400==0)
              a=1;
           else
              a=0;
    else
        a=0;
    if (a)
       printf("%d是闰年哟!",y);
    else
       printf("%d可不是闰年呢~乖啦\n",y);
       system("pause");
    return 0;
}
*/

//判断三角形形状
/*
#include <stdio.h>
int main()
{
    float a,b,c;
    printf("请输入三角的三条边：");
    scanf("%f,%f,%f",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>c)
    {
    if (a==b&&b==c&&c==a)
        printf("这个三角形为等边三角形哟~");
    else if (a==b||a==c||b==c)
        printf("这个三角形为等腰三角形啦~");
    else
        printf("这是一般三角形哦~");
    }
    else
        printf("你个笨蛋，根本不是三角形好吗！");
    return 0;
}
*/
//判断你对海伦有多喜欢
/*
#include <stdio.h>
int main()
{
    float a;
    printf("你对海伦有多爱？~\n");
    printf("请输入喜爱程度，百分制哦~\n");
    scanf("%f",&a);
    if (a>100)
        printf("你也太爱我了吧~满分100啦啦\n");
    else if (a>=90)
        printf("不错不错，我最爱你啦~\n");
    else if (a>=80)
        printf("棒~希望你以后更加爱我哦!\n");
    else if (a>=60)
        printf("好吧，勉为其难的接受啦，至少及格咯了\n");
    else if (a>=0)
        printf("请问~你认识我吗~\n");
    else
        printf("不爱我也不用是负值嘛~");
    return 0;
}
*/
//switch的使用

#include <stdio.h>
int main()
{
    float a;
    int e;
    printf("你对瞳瞳有多爱？~\n");
    printf("请输入喜爱程度，百分制哦~\n");
    scanf("%f",&a);
    if (a>100)
        printf("你也太爱我了吧~满分100啦啦\n");
    else
{
        e=a/10;
        switch(e)
        {
            case 10:printf("瞳瞳也好爱你 哈哈哈哈！");break;
            case 9:printf("不错不错，我最爱你啦~\n");break;
            case 8:printf("棒~希望你以后更加爱我哦!\n");break;
            case 7:
            case 6:printf("好吧，勉为其难的接受啦，至少及格咯了\n");break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0: printf("请问~你认识我吗~\n");break;
        }
}
    return 0;

}


