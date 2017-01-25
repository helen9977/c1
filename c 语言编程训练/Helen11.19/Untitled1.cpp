#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,flag;
    int x[50];

    printf("ÇëÊäÈëÎ»Êı£º\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    for(i=0;i<n;i++)
      {
          for(j=i+1;j<n;j++)
      {
          if(x[i]!=x[j])
            flag=1;
          else flag=0;
      }
       if(flag)
       { printf("%d",x[i]);
        break;
        } 
      }
      return 0;
}
