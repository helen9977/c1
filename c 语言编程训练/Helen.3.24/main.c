/*#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <malloc.h>
#define  MAX 100
int main()
{
	int i,j,k,n,po=0,f=0;
	int x[MAX];
	char c,c1,c2;
	while(1)
	{
		system("cls");
        printf("**********************************\n");
        printf("          1.......��������        \n");
        printf("                                  \n");
		printf("          2.......��������        \n");
		printf("                                  \n");
		printf("          3.......��������        \n");
		printf("                                  \n");
		printf("          4.......��������        \n");
		printf("                                  \n");
		printf("          5.......ɾ������        \n");
		printf("                                  \n");
		printf("          6.......��ʾ����        \n");
		printf("                                  \n");
		printf("          7.......ע������        \n");
		printf("                                  \n");
		printf("          0.......�˳�����        \n");
		printf("                                  \n");
		printf("**********************************\n");
		c=getch();
		system("cls");
		switch(c)
		{
        case '1':
            printf("���������ݸ�����\n");
            scanf("%d",&n);
            break;
        case'2':
            printf("\t1.......���̶�������\t\t2.......�ļ���������");
            c1=getch();
            system("cls");
            if('1'==c1)
            {
                printf("�Ӽ����������ݣ�");
                struct stu
                 {
                   long num;
                   float score;
                   struct stu *next;
                 };
             struct stu *creat()
           {
              struct stu *head;
              struct stu *p1,*p2;
              head=NULL;
              p1=p2=(struct stu*)malloc(sizeof(struct stu));
              scanf("%ld %f",&p1->num,&p1->score);
              p1->next=NULL;
    while(p1->num<=n)
    {
        if(head==NULL) head=p1;
        else p2->next=p1;
        p2=p1;
        p1=(struct stu*)malloc((sizeof(struct stu)));
        scanf("%ld %f",&p1->num,&p1->score);
    }
    p2->next=NULL;
    return head;
}
void print (struct stu * head)
{
    struct stu *p;
    p=head;
    while(p!=NULL)
    {
        printf("%ld %5.1f\n",p->num,p->score);
        p=p->next;
    }
}

int main()
{
    struct stu *creat();
    void print(struct stu*head);
    struct stu *head;
    head=creat();
    print(head);
    return 0;
}
}
				else if('2'==c1)
				{
					FILE *fp;
					fp=fopen("e:\\mydata.txt","r");
					if(NULL==fp)
					{
						printf("error");
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
		}
*/
