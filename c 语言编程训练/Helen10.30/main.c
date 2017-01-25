
#include <stdio.h>
int main()
{
    float c,F;

    scanf("%f",&F);
    c=(5*(F-32))/9.0;
    printf("c=%.2f",c);
    return 0;
}
/*
 #include <stdio.h>
int main()
{
    int a,b,c,max;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
           max=a;
        else
            max=c;
    }
    else
    {
        if(b>c)
            max=b;
        else
            max=c;
    }
printf("%d",max);
return 0;
}
*/


