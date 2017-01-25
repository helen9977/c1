#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#define MAX 100
using namespace std;
int main()
{
	int i,j,t,k,n,po=0,f=0;
	int x[MAX];
	char c,c1,c2;
	while(1)
	{
		system("cls");
		printf("**********************************");
		printf("*        1.......建立顺序表      *");
		printf("*                                *");
		printf("*        2.......读入数据        *");
		printf("*                                *");
		printf("*        3.......插入数据        *");
		printf("*                                *");
		printf("*        4.......数据排序        *");
		printf("*                                *");
		printf("*        5.......删除数据        *");
		printf("*                                *");
		printf("*        6.......显示数据        *");
		printf("*                                *");
		printf("*        7.......保存数据        *");
		printf("*                                *");
		printf("*        8.......顺序表状态      *");
		printf("*                                *");
		printf("*        9.......注销顺序表      *");
		printf("*                                *");
		printf("*        0.......退出程序        *");
		printf("*                                *");
		printf("**********************************");
		c=getch();
		system("cls");
		switch(c)
		{
			case '1':
			    srand(time(0));
				printf("随机建立有N个元素的顺序表，N=0~100 ");
				scanf("%d",&n);
				if(n<MAX && n>=0 )
				{
					po=n;
					for(i=0;i<po;i++)
					{
						x[i]=rand()%200;
					}
				}
				else
				{
					printf("输入的数据超出范围，按回车键返回。");
					system("pause");
				}
				break;
			case '2':
				printf("\t1.......键盘读入数据\t\t2.......文件输入数据");
				c1=getch();
				system("cls");
				if('1'==c1)
				{
					printf("从键盘输入一个数据：");
					scanf("%d",&x[po]);
					po++;
				}
				else if('2'==c1)
				{
					FILE *fp;
					fp=fopen("e:\\mydate.txt","r");
					if(NULL==fp)
					{
						printf("文件名错误。");
						system("pause");
						continue;
					}
					while(!feof(fp))
					{
						fscanf(fp,"%d",&x[po]);
						po++;
						if(po>=MAX)
						{
							break;
						}
					}
					fclose(fp);
				}
				else
				{
					printf("选择无效的功能。");
					system("pause");
				}
				break;
			case '3':
				break;
			case '4':
				printf("\t1.......由大到小排序\t\t2.......由小到大排序");
				c1=getch();
				system("cls");
				if('1'==c1)
				{ printf("由大到小排序：\n");

				  for(i=0;i<po-1;i++)
                  {
                      for(j=0;j<po-1-i;j++)
                      {
                          if(x[j]<x[j+1])
                          {
                              t=x[j];
                              x[j]=x[j+1];
                              x[j+1]=t;
                          }
                      }
                  }
                  for(i=0;i<po;i++)
                    printf("%d  ",x[i]);
                    system("pause");
				}
				else if('2'==c1)
                {
                 printf("由小到大排序：\n");
				  for(i=0;i<po-1;i++)
                  {
                      for(j=0;j<po-1-i;j++)
                      {
                          if(x[j]>x[j+1])
                          {
                              t=x[j];
                              x[j]=x[j+1];
                              x[j+1]=t;
                          }
                      }
                  }
                  for(i=0;i<po;i++)
                    printf("%d  ",x[i]);
                    system("pause");
                }
				break;
			case '5':
				if(0==po)
				{
					printf("现在无数据，不能执行删除功能。");
					system("pause");
					break;
				}
				printf("\t1.......指定位置删除\t\t2.......指定数值删除");
				c1=getch();
				system("cls");
				if('1'==c1)
				{
					printf("输入删除位置：");
					scanf("%d",&n);
					if(n>=0 && n<po)
					{
						for(j=n;j<po-1;j++)
						{
							x[j]=x[j+1];
						}
						po--;
					}
					else
					{
						printf("\t输入一个无效的删除位置。");
						system("pause");
					}
				}
				else if('2'==c1)
				{
					f=0;
					printf("输入删除的数值：");
                    scanf("%d",&n);
                    for(i=0;i<po;i++)
                    {
                    	if(x[i]==n)
						{
							for(j=i;j<po-1;j++)
							{
								x[j]=x[j+1];
							}
							po--;
							f=1;
						}
					}
					if(f==0)
					{
						printf("\t没有找到需要删除的数据。");
						system("pause");
					}
			    }
				break;
			case '6':
				for(i=0;i<po;i++)
				{
					printf("%d\t",x[i]);
				}
				system("pause");
				break;
			case '7':
				break;
			case '8':
				break;
			case '9':
				po=0;
				break;
			case '0':
				exit(0);
			default:continue;
		}
	}
	return 0;
}
