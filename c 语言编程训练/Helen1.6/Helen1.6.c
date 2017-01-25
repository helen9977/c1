//两点间的距离
/* 
#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
struct sopt
{
	float x;
	float y;
}a[2];
int main()
{
	int i;
	float s;
	for(i=0;i<2;i++)
   scanf("%f,%f",&a[i].x,&a[i].y);
   s=sqrt((a[0].x-a[1].x)*(a[0].x-a[1].x)+(a[0].y-a[1].y)*(a[0].y-a[1].y));
   printf("%f",s);
   return 0;
}
*/

// 删除链表
/* 
#include<stdio.h>
#include<stdlib.h>
struct sp
{
	int a;
	struct sp *n; //每一个模块下含有一个NEXT指针，用于存放后一个模块的地址。 
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
 p->n->a=p->n->n->a; //p->n= A.n = &B  p是A的地址。 
 p->n=p->n->n;
 printf("%d",p->n->a) ;
 return 0;
 }
 */
//三个函数 
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[1000];
    int i;
    gets(s);
    void sort(char x[]);
    sort(s);
    void save(char x[]);
    save(s);
    void print(char x[]);
    print(s); 
    return 0;
}
void sort(char x[])
{

    int i,j,n;
    char t;
    n=strlen(x);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(x[j]>x[j+1])
            {
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
    }
}
void save(char x[])
{
    FILE *fp;
    int i=0,n;
    n=strlen(x);
    fp=fopen("myfile.txt","w");
    if(NULL==fp)
    {
        printf("cannot open the file.\n");
        exit(0);
    }
  for(i=0;i<n;i++)
    {
        fprintf(fp,"%c",x[i]);
    }
     fclose(fp);
}
void print(char x[])
{
  puts(x);
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int main()
{
	char s[100];
	int x[4];
	int i,n; 
	void read(char a[]);
	int length(char a[]);
	void count(char a[],int x[]);
	read(s); 
	n=length(s);
	count(s,x);
	printf("%d\n",n);
	for(i=0;i<4;i++)
	printf("%d\t",x[i]);
	return 0;	
} 
void read(char a[])
{
	gets(a);
}
int length(char a[])
{
	int m;
	m=strlen(a);
	
	return m;
}
void count(char a[],int x[])
{
	int i;
	for(i=0;i<4;i++)
	x[i]=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			 x[0]++;
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			x[1]++;
		}
		else if(a[i]>='A'&&a[i]<='Z')
		{
			x[2]++;
		}
		else
		x[3]++;
	}
}
*/


