//石头剪子布 若甲赢了则输出“FIRST”，若乙赢了输出“SECOND”，若平了则输出“DEUCE”。
/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if(a=='S'&&b=='S')printf("DEUCE");
    else if(a=='S'&&b=='J')printf("FIRST");
    else if(a=='S'&&b=='B')printf("SECOND");
    else if(a=='J'&&b=='S')printf("SECOND");
    else if(a=='J'&&b=='J')printf("DEUCE");
    else if(a=='J'&&b=='B')printf("FIRST");
    else if(a=='B'&&b=='S')printf("FIRST");
    else if(a=='B'&&b=='J')printf("SECOND");
    else if(a=='B'&&b=='B')printf("DEUCE");

    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main()
{



    int n,a=0,s=0,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        {a=a+i;
        s=s+a;}
        printf("%d",s);
        return 0;

}*/

/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,k,l,d;
    int x[m*n];
    scanf("%d %d",&m,&n);
    for(i=0;i<=m*n-1;i++)
     {
      scanf("%d ",&x[i]);
      if((i+1)%n==0)
      printf("\n");
  }

        k=x[0];
        l=x[0];
        for(i=0;i<=n*m-1;i++)
        {
            if(k<x[i])
                k=x[i];
        }
       for(i=0;i<=n*m-1;i++)
       {
           if(l>x[i]);
           l=x[i];
       }
       d=k-l;
       printf("%d",d);
       return 0;

}*/

//秒数差
/* #include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    int x[6];
    scanf("%d:%d:%d",&x[0],&x[1],&x[2]);
    scanf("%d:%d:%d",&x[3],&x[4],&x[5]);
    a=x[0]*3600+x[1]*60+x[2];
    b=x[3]*3600+x[4]*60+x[5];
    c=a-b;
    printf("%d",c);
    return 0;
}
*/
//回文数

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n,i,e,s=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
    while(i)
    {
        e=i%10;
        s=s*10+e;
        i=i/10;
    }
    if(s==i)printf("%d",i);
    else;
    }
    return 0;
}
