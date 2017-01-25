#include <stdio.h>
#include<stdlib.h>
#define N 24
int main()
{
    int n,i,j,k,m=0;
    int s[N];
    scanf("%d",&n);
    for(i=n;i<n+4;i++)
        for(j=n;j<n+4;j++)
            if(i!=j)
            {
                for(k=n;k<n+4;k++)
                    if(i!=k && j!=k)
                    {
                        s[m]=i*100+j*10+k;
                        m++;
                    }
            }
    for(m=0;m<24;m++)
    {
        printf("%d ",s[m]);
        if((m+1)%6==0)
            printf("\n");
    }

    return 0;

}
