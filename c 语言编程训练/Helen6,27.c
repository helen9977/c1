#include <stdio.h>
#include <stdlib.h>
typedef int Status;/* Status �Ǻ���������,��ֵ�Ǻ������״̬����*/
typedef char ElemType;/* ElemType ���͸���ʵ������������������Ϊ int */

typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node;

typedef struct Node* LinkList;

int main()
{
    LinkList p,q,*head;
    int n,i;
    *head=p=(LinkList)malloc(sizeof(Node));//ͷָ��ָ���һ�����
    if(!p)return 0;
    scanf("%c",p->data);
    while(p->data!='\n')
    {
        q=(LinkList)malloc(sizeof(Node));
        if(!q) return 0;
        p->next=q;
        p=q;
        scanf("%c",p->data);

    }
    p->next=*head; /*ʹ����βָ������ͷ �γ�ѭ������*/
    scanf("%c",&n);
    for(i=1;i<n;i++)
    {
        q=*head;
        q=q->next;//�ҵ�Ҫ���Ƶ�λ��
    }
    printf("%c",q->data);
    q=q->next;
    while(q!=(*head))
    {
        printf("%c",q->data);
        q=q->next;
    }

    return 0;
}


