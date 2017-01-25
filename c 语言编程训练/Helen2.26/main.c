/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n=1,i=1;
    double e=1.0;
    do
    {
        n=n*i;
        e=e+1./n;
        i++;
    }while(fabs(1./n)>=1e-5);
    printf("%.6f",e);
    return 0;
}

*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    m=a[0];
    for(i=1;i<n;i++)
    {
        if(m>a[i])
            m=a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=a[i]-m;
        printf("%d ",a[i]);
    }
    return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
void readscore(int x[40])
{
    int i;
    for(i=0;;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]<0)break;
    }

}
int average(int x[40])
{
    int i,a;
    int s=0,m=0;
    for(i=0;x[i]>=0;i++)
    {
        s=x[i]+s;
        a=s/(i+1);
    }
    for(i=0;x[i]>=0;i++)
    {
        if(x[i]>a)
            m++;
    }
   return m;
}

int main()
{
    int a[40],m;
    readscore(a);
    m=average(a);
    printf("%d",m);
    return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void str(char a[20])
{
    int i;
    char n;
    gets(a);
    scanf("%c",&n);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==n)
            a[i]='0';
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='0')
            printf("%c",a[i]);
    }
}

int main()
{
    char a[20];
    str(a);
    return 0;

}
*/
#include <stdio.h>
#include <stdlib.h>
struct candidata
{
   char a[10];
   int n=0;
}A,B,C;
int main()
{
    A.a=zhang;
    B.a=wang;
    C.a=li;
    int i,wrong=0;
    char x[10][10];
    for(i=0;i<10;i++)
    {
        for(j=0;x[i][j]!='\0';j++)
        {
            scanf("%c",x[i][j]);
            if(x[i][j]>'A'&&x[i][j]<'Z')
                x[i][j]=x[i][j]+23;
        }

        if(x=='zhang')
            A.n++;
        if(x=='wang')
            B.n++;
        if(x=='li')
            C.n++;
        else wrong++;
    }


}
