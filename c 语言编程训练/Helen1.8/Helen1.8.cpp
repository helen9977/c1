//电话号码结构
/* 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct tel
{
	char a[100],b[100];
}s1,s2;
int main()
{
    scanf("%s",s1.a);
    scanf("%s",s1.b);
    scanf("%s",s2.a);
    scanf("%s",s2.b);
	if(strcmp(s1.a,s2.a)!=0)
      printf("%s%s",s2.a,s2.b);
	else
      puts(s2.b);
	return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
struct num
{
	int a;
	struct num *p;
 }A,B,*h;
 int main()
 {
 	struct num C;
 	h=&A;
 	A.a=100;
 	A.p=&B;
 	B.a=200;
 	B.p=NULL;
 	C.a=300;
 	C.p=&B;
 	A.p=&C;
 	printf("%d",h->p->a);
 	return 0;
 	
 }
