//ʮ������������������0�ĸ���
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10];
    int s=0,m=0,n=0,i;
    for(i=0;i<10;i++)
    {scanf("%d",&x[i]);
    if(x[i]>0)
    s=s+1;
    else if(x[i]<0)
    m=m+1;
    else
        n=n+1;}
    printf("������%d����������%d����0��%d��",s,m,n);
    return 0;
}
*/
//3*4��ά�������ֵ
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[3][4];
    int max,r,c,i,j;
    for(i=0;i<3;i++)
       {

       for(j=0;j<4;j++)
        scanf("%d",&x[i][j]);
       }
    max=x[0][0];
    r=0;
    c=0;
   for(i=0;i<3;i++)
       {

       for(j=1;j<4;j++)
       {
           if(x[i][j]>max)
            {
            max=x[i][j];
            r=i;
            c=j;
            }
       }
       }
       printf("max=%d, r=%d, c=%d",max,r,c);
       return 0;
}
*/

//����ת��
/* #include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3][3],b[3][3];
    int i,j;
    for(i=0;i<3;i++)
        {

            for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);

        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            b[i][j]=a[j][i];

        for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
            printf("%d  ",b[i][j]);
            printf("\n");
            }

        return 0;

}
*/

//ÿ�ſε�ƽ��ֵ
/*
#include <stdio.h>
#include <stdlib.h>
#define m 5
#define n 3
int main()
{
    int x[m][n];
    int c,i,j,sum;
    for(i=0;i<m;i++)
    {
        printf("�������%dλͬѧ�ĳɼ�\n",i+1);
        for(j=0;j<n;j++)
       {
         scanf("%d",&x[i][j]);
         }
    }
    for(j=0;j<n;j++)
    {
        sum=0;

        for(i=0;i<m;i++)
        {
        sum=sum+x[i][j];
        c=sum/m;
        }
        printf("��%d��ѧ�Ƶ�ƽ����Ϊ��%d\n",j+1,c);
    }
    return 0;
}
*/
 //ɾ���ַ�����ָ������
/* #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 int main()
 {
     char a[30],b[30];
     int i,j;
     char k;
      gets(a);
      printf("input key number:\n");
      k=getchar();
      for(i=0,j=0;a[i]!='\0';i++)
       {


           if(a[i]!=k)
        {b[j]=a[i];
      j=j+1;}
      }

      b[j]='\0';
      printf("\n%s\n",b);

      return 0;
 }
*/
//������ �������䣡
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char x[60];
    int i;
    for(i=0;i<59;i++)
        {x[i]=' ';}

        x[i]='\0';
    for(i=0;i<10;i++)
       {
        x[30+i]='*';
        x[30-i]='*';
        puts(x);
       }
       return 0;
}
