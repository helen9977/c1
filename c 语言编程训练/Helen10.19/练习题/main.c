//三角形的面积

/*#include<stdio.h>
#include<math.h>
int main(void)
{
    double s,a,b,c,area;
    printf("请输入三角形的三边长：");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%lf\t%lf\t%lf\n",a,b,c);
    printf("三角形面积为%lf",area);
    }
    else
    {
        printf("无法构成三角形");
    }
    return 0;
}
*/

//大小写的变化
/*#include <stdio.h>
#include <ctype.h>
int main()
{
    char y;
    printf("请输入字母：");
    y=getchar();
    y=toupper(y);
    printf("大写为%c\n",y);
    return 0;
}

*/
//求圆的周长，面积
/*#define p 3.1415926
#include <stdio.h>
int main()
{
double r,circum,area;
printf("请输入半径：cm\b\b\b");
scanf("%lf",&r);
circum=2*p*r;
area=p*r*r;
printf("圆的半径为%10.2lfcm,周长为%10.2lfcm,面积为%10.2lfcm^2\n",r,circum,area);
return 0;
}
*/
//求球体的表面积，体积
/*

#include <stdio.h>
int main()
{
    double r,S,V;
    printf("请输入球体的半径(cm)：");
    scanf("%lf",&r);
    const float p=3.1415926;
        S=4*p*r*r;
    V=4/3*p*r*r*r;
    printf("球体的半径为%8.4lfcm,面积为%8.4lfcm^2,体积为%8.4lfcm^3",r,S,V);
    return 0;
}
*/

//求两点间的距离
/*
#include <stdio.h>
#include <math.h>
int main()
{

    float x1,y1,x2,y2,D;
    printf("输入平面上坐标X：\n");
    scanf("%f,%f",&x1,&y1);
    printf("输入平面上坐标Y：\n");
    scanf("%f,%f",&x2,&y2);
    D=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("两点间的距离为：%8.4f\n",D);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int A,b,c,d;
    printf("请输入一个三位数:\n");
    scanf("%d",&A);
    b=A%10;
    c=A%100/10;
    d=A/100;
    printf("个位数为%d,十位数为%d,百位数为%d",b,c,d);
    return 0;
}
*/
//交换数值solution1

/*#include <stdio.h>
int main()
{
    int a,b,c;
    a=4,b=5,c=6;
    c=a;
    a=b;
    b=c;
    printf("a=%d,b=%d",a,b);
    return 0;
}
*/
//solution2
/*#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入两个数字：");
    scanf("%d,%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("交换后a=%d,b=%d",a,b);
    return 0;
    }
*/
#define p 3.14
#include <stdio.h>
int main()
{
float r,h,C1,Sa,Sb,Va,Vb;
scanf("%f %f",&r,&h);
C1=2*p*r;
Sa=p*r*r;
Sb=4*p*r*r;
Va=(4.00/3)*p*r*r*r;
Vb=Sa*h;
printf("C1=%.2f\n",C1);
printf("Sa=%.2f\n",Sa);
printf("Sb=%.2f\n",Sb);
printf("Va=%.2f\n",Va);
printf("Vb=%.2f\n",Vb);
return 0;
}
