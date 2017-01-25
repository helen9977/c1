/* #include <stdio.h>
int main()
{
    float a,b,t;
    printf("请输入两个数,么么哒:");
    scanf("%f %f",&a,&b);
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    else
        ;
    printf("笨蛋,让我来告诉你这两个数字的大小关系为:%f<%f\n",a,b);
    return 0;

}*/

// 回文数
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n,d,i,e,s,a;

    scanf("%d %d",&m,&n);
    if(m>n)
    {d=m;
    m=n;
    n=d;}
    else;
    for(i=m;i<=n;i++)
    {
    a=i;
    s=0;
    while(a)
    {
        e=a%10;
        s=s*10+e;
        a=a/10;
    }
    if(s==i)printf("%d\n",i);
    }
    return 0;
}
*/

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,k,l,c;
    scanf("%d %d",&m,&n);
    int x[m*n-1];
    for(i=0;i<=m*n-1;i++)
     {
      scanf("%d",&x[i]);
  }

        k=x[0];
        l=x[0];
        for(i=0;i<=n*m-1;i++)
        {
            if(k<x[i])
                k=x[i];
                else;
        }
       for(i=0;i<=n*m-1;i++)
       {
           if(l>x[i])
           l=x[i];
           else;
       }
       c=k-l;
       printf("%d",c);
       return 0;

}*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n,i,a,c,max=0,min=50;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m*n;i++)
    {
        scanf("%d",&a);
        if(a>max)max=a;
        if(a<min)min=a;
        }
        c=max-min;
        printf("%d",c);
        return 0;
}
