
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
    printf("\n���������֣�\n");
    scanf("%d",&y);
    if(x==y)
        {printf("���ô���~�¶��� ����ôô����һ��\n");
        Sleep(2500);break;}
    else if(x<y)
        printf("������̫���� Сһ����\n");
    else
        printf("���ԣ���ҪupupŶ~\n");

    Sleep(1500);
    system("cls");
    }
    getchar();
    return 0;
}


/*
//������ɫ�ĸı�

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
//�����������Ľ׳�֮��
/*
#include <stdio.h>
int main()
{
    int m,n,s,x,y,i,sum=0;
    printf("�������������֣�");
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
//�žų˷���
#include <stdio.h>
int main()
{
    int i,j;
    printf("\t\t\t*****9*9�˷���******\n");

    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d * %d = %d ",i,j,i*j);
            printf("\n");
    }
    return 0;
}
*/
//�׼�����


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
//�����Ԫ���η���

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
//���ŵ��
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
