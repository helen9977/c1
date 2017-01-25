//某日是某年的第几天

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[3],x[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 int s=0,i;
 printf("input a year a month a day\n");
 scanf("%d %d %d",&a[0],&a[1],&a[2]);
 if((a[0]%4==0&&a[0]%100!=0)||a[0]%400==0)
 {
     x[1]=29;
 }
 else x[1]=28;
 for(i=0;i<a[1]-1;i++)
 {
     s+=x[i];
 }
 s=s+a[2];
 printf("%d",s);
 return 0;

}
*/
