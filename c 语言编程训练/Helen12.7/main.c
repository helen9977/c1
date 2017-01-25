//求已知数组各列元素之和
/*#include <stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3];
    int i;
    void max(int s[3][3],int res[3]);
    max(a,b);
    for(i=0;i<3;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}
void max(int s[3][3],int res[3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        res[i]=0;
        for(j=0;j<3;j++)
        {
            res[i]+=s[i][j];
        }
    }
}
*/

// 求字符串中小写字母的个数
/*
#include <stdio.h>
int main()
{
    char s[100];
    int n;
    int num(char a[100]);
    gets(s);
    n=num(s);
    printf("%d",n);
    return 0;
}
int num(char a[100])
{
    int i,k=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&& a[i]<='z')
            k++;
    }
    return k;
}
*/
//数字字符的个数
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[100];
    int n;
    int sum(char s[100]);
    gets(a);
    n=sum(a);
    printf("%d",n);
    return 0;
}
int sum(char s[100])
{
    int i,k=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            k++;
        }

    }
  return k;
}
*/

//小写字母变大写
/*#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
int main()
{
    char a[100];
    void dx(char s[100]);
    gets(a);
    dx(a);
    puts(a);
    return 0;
}
void dx(char s[100])
{
   int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&& s[i]<='z')
        {
            s[i]-=32;
        }
    }
    //也可以直接使用 strupr函数；


}
*/
//100素数
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,j,k,flag=0;
    for(i=2;i<100;i++)
    {
        k=sqrt(i);
        for(j=2;j<=k;j++)
        {
            if (i%j==0)
            {
            flag=0;
             break;
            }
            else flag =1;
        }
        if(flag)
            printf("%d\t",i);
    }
    return 0;
}
*/
//register
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    register int i; //提高效率
    int sum=0;
    for(i=1;i<=100;i++)
    {
    sum+=i*i;
    }
    printf("%d ",sum);
    return 0;
}
*/
//平均值 最大值 最小值

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    float a[50];
    int i;
    srand(time(0));
    for (i=0;i<50;i++)
    {
        a[i]=rand()%10;
        printf("%.2f ",a[i]);
    }
    return 0;

}
*/

#include <stdio.h>
//#include <stdlib.h>
int fun1(int a,int k)
{
    int s;

    if (a==0)
        return ;
    else
        s=a/k;
        fun1(s,k);

    printf("%d",a%k);
}
int main()
{
    int n,m;

    scanf("%d",&n);
    scanf("%d",&m);
    fun1(n,m);

    return 0;
}


/*#include <stdio.h>
int main()
{
    long long int n,m;
    int i=0,w;
    int x[10000];
    scanf("%lld",&n);
    scanf("%lld",&m);
    while(m!=0)
    {
        x[i]=m%n;
        m=m/n;
        i++;
}
w=i-1;
for(w;w>=0;w--)
{
    if( x[i]<10)
        printf("%d",x[w]);
    else
        printf("%d",x[w]+55);
}
return 0;
}
*/
