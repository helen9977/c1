//�ж��Ƿ�Ϊ����
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int y,a;
    printf("�ж���������Ƿ�Ϊ����Ӵ~\n");
    printf("\n������һ�����y:");
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
       printf("%d������Ӵ!",y);
    else
       printf("%d�ɲ���������~����\n",y);
       system("pause");
    return 0;
}
*/

//�ж���������״
/*
#include <stdio.h>
int main()
{
    float a,b,c;
    printf("���������ǵ������ߣ�");
    scanf("%f,%f,%f",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>c)
    {
    if (a==b&&b==c&&c==a)
        printf("���������Ϊ�ȱ�������Ӵ~");
    else if (a==b||a==c||b==c)
        printf("���������Ϊ������������~");
    else
        printf("����һ��������Ŷ~");
    }
    else
        printf("����������������������κ���");
    return 0;
}
*/
//�ж���Ժ����ж�ϲ��
/*
#include <stdio.h>
int main()
{
    float a;
    printf("��Ժ����жమ��~\n");
    printf("������ϲ���̶ȣ��ٷ���Ŷ~\n");
    scanf("%f",&a);
    if (a>100)
        printf("��Ҳ̫�����˰�~����100����\n");
    else if (a>=90)
        printf("�������������~\n");
    else if (a>=80)
        printf("��~ϣ�����Ժ���Ӱ���Ŷ!\n");
    else if (a>=60)
        printf("�ðɣ���Ϊ���ѵĽ����������ټ�����\n");
    else if (a>=0)
        printf("����~����ʶ����~\n");
    else
        printf("������Ҳ�����Ǹ�ֵ��~");
    return 0;
}
*/
//switch��ʹ��

#include <stdio.h>
int main()
{
    float a;
    int e;
    printf("���ͫͫ�жమ��~\n");
    printf("������ϲ���̶ȣ��ٷ���Ŷ~\n");
    scanf("%f",&a);
    if (a>100)
        printf("��Ҳ̫�����˰�~����100����\n");
    else
{
        e=a/10;
        switch(e)
        {
            case 10:printf("ͫͫҲ�ð��� ����������");break;
            case 9:printf("�������������~\n");break;
            case 8:printf("��~ϣ�����Ժ���Ӱ���Ŷ!\n");break;
            case 7:
            case 6:printf("�ðɣ���Ϊ���ѵĽ����������ټ�����\n");break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0: printf("����~����ʶ����~\n");break;
        }
}
    return 0;

}


