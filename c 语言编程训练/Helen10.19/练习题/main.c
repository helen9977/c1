//�����ε����

/*#include<stdio.h>
#include<math.h>
int main(void)
{
    double s,a,b,c,area;
    printf("�����������ε����߳���");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%lf\t%lf\t%lf\n",a,b,c);
    printf("���������Ϊ%lf",area);
    }
    else
    {
        printf("�޷�����������");
    }
    return 0;
}
*/

//��Сд�ı仯
/*#include <stdio.h>
#include <ctype.h>
int main()
{
    char y;
    printf("��������ĸ��");
    y=getchar();
    y=toupper(y);
    printf("��дΪ%c\n",y);
    return 0;
}

*/
//��Բ���ܳ������
/*#define p 3.1415926
#include <stdio.h>
int main()
{
double r,circum,area;
printf("������뾶��cm\b\b\b");
scanf("%lf",&r);
circum=2*p*r;
area=p*r*r;
printf("Բ�İ뾶Ϊ%10.2lfcm,�ܳ�Ϊ%10.2lfcm,���Ϊ%10.2lfcm^2\n",r,circum,area);
return 0;
}
*/
//������ı���������
/*

#include <stdio.h>
int main()
{
    double r,S,V;
    printf("����������İ뾶(cm)��");
    scanf("%lf",&r);
    const float p=3.1415926;
        S=4*p*r*r;
    V=4/3*p*r*r*r;
    printf("����İ뾶Ϊ%8.4lfcm,���Ϊ%8.4lfcm^2,���Ϊ%8.4lfcm^3",r,S,V);
    return 0;
}
*/

//�������ľ���
/*
#include <stdio.h>
#include <math.h>
int main()
{

    float x1,y1,x2,y2,D;
    printf("����ƽ��������X��\n");
    scanf("%f,%f",&x1,&y1);
    printf("����ƽ��������Y��\n");
    scanf("%f,%f",&x2,&y2);
    D=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("�����ľ���Ϊ��%8.4f\n",D);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int A,b,c,d;
    printf("������һ����λ��:\n");
    scanf("%d",&A);
    b=A%10;
    c=A%100/10;
    d=A/100;
    printf("��λ��Ϊ%d,ʮλ��Ϊ%d,��λ��Ϊ%d",b,c,d);
    return 0;
}
*/
//������ֵsolution1

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
    printf("�������������֣�");
    scanf("%d,%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("������a=%d,b=%d",a,b);
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
