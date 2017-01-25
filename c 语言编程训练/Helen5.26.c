#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,m,k,a;
    int i,e,s;
    scanf("%d",&n);
    m=pow(10,n-1);
    for(i=m;i<m*10;i++)
    {
        e=i;
        s=0;
        while(e)
        {
            a=e%10;
            e=e/10;
            s+=pow(a,n);
        }
        if(s==i)
            printf("%d\n",i);
    }
    return 0;
}

int main()
{
    int m,n,r,e,s;
    scanf("%d%d",&m,&n);
    s=m*n;
    while(m)
    {
        r=n%m;
        n=m;
        m=r;
    }
    printf("最大公约数：%d 最小公倍数：%d",n,s/n);
    return 0;
}


int main()
{
    int n,m,i,j,s,k,r,flag=0;
    int a[100];
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        s=0;
        k=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
                {
                    s+=j;
                    a[k]=j;
                    k++;
                }
        }
        if(s==i)
        {
            flag=1;
            printf("%d=",i);
            for(r=0;r<k-1;r++)
            {
                printf("%d+",a[r]);
            }
            printf("%d\n",a[r]);
        }
    }
    if(flag==0)
        printf("None!");
    return 0;
}
