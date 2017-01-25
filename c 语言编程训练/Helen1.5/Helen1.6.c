#include<stdio.h>
#include<stdlib.h>
struct sp
{
	int a;
	struct sp *n;
 }A,B,C,*p;
 int main()
 {
 A.a=100;
 B.a=200;
 C.a=300;
 A.n=&B;
 B.n=&C;
 C.n=NULL;
 p=&A;
 printf("%d",p->n->a) ;
 return 0;
 }
