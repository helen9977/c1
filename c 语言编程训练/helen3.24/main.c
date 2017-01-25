/*#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
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
*/


