/*插入数据
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[8]={5,10,29,36,48,67,68};
    int n,i;
    scanf("%d",&n);
    arr[7]=n;
    void fun(int arr[],int x);
    fun(arr,n);
    for(i=0;i<8;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void fun(int arr[], int x)
{
    int i,j,t;
    for(i=0;i<7;i++)
    {
        for(j=0;j<7-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }

    }
}
*/
//插入数组 整体后移
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int arr[8]={5,10,29,36,48,67,68};
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<7;i++)
    {
        if(n>arr[i])
        j=i;

    }
    for(i=7;i>j+1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=n;
    for(i=0;i<8;i++)
    {
        printf("%d ",arr[i]);
    }
   return 0;

}
