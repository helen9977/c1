//���Ƿ�ϸ�
 /*#include <stdio.h>
int main()
{
    float s;
    printf("��������ķ�����");
    scanf("%f",&s);
    if(s>=60.0)
        printf("pass");
    else
        printf("failure");
    return 0;
}
*/

//4�ı���
/* #include <stdio.h>
int main()
{
    int A;
    printf("������һ������");
    scanf("%d",&A);
    if(A%4==0)
        printf("OK\n");
    else
        printf("NO\n");
    return 0;
}
*/

//�ȴ�С
 /*#include <stdio.h>
int main()
{
    int a,b,c;
    printf("�������������֣�");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
            printf("%d����Сֵ",a);
        else
            printf("%d����Сֵ",c);
    }
    else
    {
        if(b<c)
            printf("%d����Сֵ",b);
        else
            printf("%d����Сֵ",c);
    }
    return 0;
}
*/


//�ж��ַ�������
 #include <stdio.h>
int main()
{
    char ch;
    printf("\n�������ַ���\n");
    scanf("%c",&ch);
    if (ch>=48 && ch<=57)
        printf("%c ������\n",ch);
      else if(ch>=65 && ch<=90)
         printf("%c �Ǵ�д��ĸ\n",ch);
        else if(ch>=97 && ch<=122)
          printf("%c ��Сд��ĸ\n",ch);
    else
        printf("����\n");
    return 0;
}


// 3,5,7����

/* #include <stdio.h>
int main()
{
    int a;
    printf("\n������һ�����֣�");
    scanf("%d",&a);
    if(a%3==0 && a%5==0 && a%7==0)
        printf("%d ��ͬʱ��3,5,7������\n",a);
            else if(a%3==0 && a%5==0 && a%7!=0)
            printf("\n %d �ܱ�3��5������\n",a);
            else if(a%3==0 && a%5!=0 && a%7==0)
            printf("\n %d �ܱ�3��7������\n",a);
            else if(a%3!=0 && a%5==0 && a%7==0)
            printf("\n %d �ܱ�5��7������\n",a);
            else if(a%3!=0 && a%5!=0 && a%7==0)
            printf("\n %d �ܱ�7������\n",a);
            else if(a%3!=0 && a%5==0 && a%7!=0)
            printf("\n %d �ܱ�5������\n",a);
            else if(a%3==0 && a%5!=0 && a%7!=0)
            printf("\n %d �ܱ�3������\n",a);
    else
        printf("���ܱ�3,5,7��һ��������\n");
        return 0;
}
*/

//������

/*#include <stdio.h>
int main()
{
    int x;
    float a,sum;
    printf("\n��������Ʒԭ�۸� ");
    scanf("%f",&a);
    printf("\n�����빺�����:    ");
    scanf("%d",&x);
    if (x<5)
        printf("Ӧ�ø��� %6.2f Ԫ ",sum=a);
    else if(x>=5 && x<10)
        printf("Ӧ�ø��� %6.2f Ԫ ",sum=x*0.99*a);
    else if(x>=10 && x<20)
        printf("Ӧ�ø��� %6.2f Ԫ ",sum=x*0.98*a);
    else if(x>=20 && x<30)
        printf("Ӧ�ø��� %6.2f Ԫ ",sum=x*0.96*a);
    else
        printf("Ӧ�ø��� %f ",x*0.94*a);

return 0;

}
*/

// ��switch �����۸�

/*  #include <stdio.h>
int main()
{
    float a,sum;
    int x,e;
    printf("\n�����뵥�ۣ�");
    scanf("%f",&a);
    printf("\n�����빺�������");
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
