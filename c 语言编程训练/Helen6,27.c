#include <stdio.h>
#include <stdlib.h>
typedef int Status;/* Status 是函数的类型,其值是函数结果状态代码*/
typedef char ElemType;/* ElemType 类型根据实际情况而定，这里假设为 int */

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
    *head=p=(LinkList)malloc(sizeof(Node));//头指针指向第一个结点
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
    p->next=*head; /*使链表尾指向链表头 形成循环链表*/
    scanf("%c",&n);
    for(i=1;i<n;i++)
    {
        q=*head;
        q=q->next;//找到要左移的位置
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


