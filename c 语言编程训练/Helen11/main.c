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
		printf("*        1.......����˳���      *");
		printf("*                                *");
		printf("*        2.......��������        *");
		printf("*                                *");
		printf("*        3.......��������        *");
		printf("*                                *");
		printf("*        4.......��������        *");
		printf("*                                *");
		printf("*        5.......ɾ������        *");
		printf("*                                *");
		printf("*        6.......��ʾ����        *");
		printf("*                                *");
		printf("*        7.......��������        *");
		printf("*                                *");
		printf("*        8.......˳���״̬      *");
		printf("*                                *");
		printf("*        9.......ע��˳���      *");
		printf("*                                *");
		printf("*        0.......�˳�����        *");
		printf("*                                *");
		printf("**********************************");
		c=getch();
		system("cls");
		switch(c)
		{
			case '1':
			    srand(time(0));
				printf("���������N��Ԫ�ص�˳���N=0~100 ");
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
					printf("��������ݳ�����Χ�����س������ء�");
					system("pause");
				}
				break;
			case '2':
				printf("\t1.......���̶�������\t\t2.......�ļ���������");
				c1=getch();
				system("cls");
				if('1'==c1)
				{
					printf("�Ӽ�������һ�����ݣ�");
					scanf("%d",&x[po]);
					po++;
				}
				else if('2'==c1)
				{
					FILE *fp;
					fp=fopen("e:\\mydate.txt","r");
					if(NULL==fp)
					{
						printf("�ļ�������");
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
					printf("ѡ����Ч�Ĺ��ܡ�");
					system("pause");
				}
				break;
			case '3':
				break;
			case '4':
				printf("\t1.......�ɴ�С����\t\t2.......��С��������");
				c1=getch();
				system("cls");
				if('1'==c1)
				{ printf("�ɴ�С����\n");

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
                 printf("��С��������\n");
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
					printf("���������ݣ�����ִ��ɾ�����ܡ�");
					system("pause");
					break;
				}
				printf("\t1.......ָ��λ��ɾ��\t\t2.......ָ����ֵɾ��");
				c1=getch();
				system("cls");
				if('1'==c1)
				{
					printf("����ɾ��λ�ã�");
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
						printf("\t����һ����Ч��ɾ��λ�á�");
						system("pause");
					}
				}
				else if('2'==c1)
				{
					f=0;
					printf("����ɾ������ֵ��");
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
						printf("\tû���ҵ���Ҫɾ�������ݡ�");
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
