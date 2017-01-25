//绩是否合格
 /*#include <stdio.h>
int main()
{
    float s;
    printf("请输入你的分数：");
    scanf("%f",&s);
    if(s>=60.0)
        printf("pass");
    else
        printf("failure");
    return 0;
}
*/

//4的倍数
/* #include <stdio.h>
int main()
{
    int A;
    printf("请输入一个数字");
    scanf("%d",&A);
    if(A%4==0)
        printf("OK\n");
    else
        printf("NO\n");
    return 0;
}
*/

//比大小
 /*#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入三个数字：");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
            printf("%d是最小值",a);
        else
            printf("%d是最小值",c);
    }
    else
    {
        if(b<c)
            printf("%d是最小值",b);
        else
            printf("%d是最小值",c);
    }
    return 0;
}
*/


//判断字符的类型
 #include <stdio.h>
int main()
{
    char ch;
    printf("\n请输入字符：\n");
    scanf("%c",&ch);
    if (ch>=48 && ch<=57)
        printf("%c 是数字\n",ch);
      else if(ch>=65 && ch<=90)
         printf("%c 是大写字母\n",ch);
        else if(ch>=97 && ch<=122)
          printf("%c 是小写字母\n",ch);
    else
        printf("错误\n");
    return 0;
}


// 3,5,7整除

/* #include <stdio.h>
int main()
{
    int a;
    printf("\n请输入一个数字：");
    scanf("%d",&a);
    if(a%3==0 && a%5==0 && a%7==0)
        printf("%d 能同时被3,5,7整除！\n",a);
            else if(a%3==0 && a%5==0 && a%7!=0)
            printf("\n %d 能被3和5整除！\n",a);
            else if(a%3==0 && a%5!=0 && a%7==0)
            printf("\n %d 能被3和7整除！\n",a);
            else if(a%3!=0 && a%5==0 && a%7==0)
            printf("\n %d 能被5和7整除！\n",a);
            else if(a%3!=0 && a%5!=0 && a%7==0)
            printf("\n %d 能被7整除！\n",a);
            else if(a%3!=0 && a%5==0 && a%7!=0)
            printf("\n %d 能被5整除！\n",a);
            else if(a%3==0 && a%5!=0 && a%7!=0)
            printf("\n %d 能被3整除！\n",a);
    else
        printf("不能被3,5,7任一数整除！\n");
        return 0;
}
*/

//付款金额

/*#include <stdio.h>
int main()
{
    int x;
    float a,sum;
    printf("\n请输入商品原价格： ");
    scanf("%f",&a);
    printf("\n请输入购买件数:    ");
    scanf("%d",&x);
    if (x<5)
        printf("应该付款 %6.2f 元 ",sum=a);
    else if(x>=5 && x<10)
        printf("应该付款 %6.2f 元 ",sum=x*0.99*a);
    else if(x>=10 && x<20)
        printf("应该付款 %6.2f 元 ",sum=x*0.98*a);
    else if(x>=20 && x<30)
        printf("应该付款 %6.2f 元 ",sum=x*0.96*a);
    else
        printf("应该付款 %f ",x*0.94*a);

return 0;

}
*/

// 用switch 语句算价格；

/*  #include <stdio.h>
int main()
{
    float a,sum;
    int x,e;
    printf("\n请输入单价：");
    scanf("%f",&a);
    printf("\n请输入购买个数：");
    scanf("%d",&x);
    e=x/5;
    switch(e)
    {
        case 0:sum=x*a;printf("pay %6.2f yuan",sum);break;
        case 1:sum=x*a*0.99;printf("pay %6.2f yuan",sum);break;
        case 2:
        case 3:sum=x*a*0.98;printf("pay %6.2f yuan",sum);break;
        case 4:
        case 5:sum=x*a*0.96;printf("pay %6.2f yuan",sum);break;
        default:sum=x*a*0.94;printf("pay %6.2f yuan",sum);break;
    }
    return 0;
}
*/
