/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,i,k=1;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m<a[i])
            k++;
    }
    printf("%d",k);
    return 0;
}
*/
#include<iostream>
using namespace std;
typedef int List ;
typedef int ElemType;
void Union(List &La, List Lb) {  // �㷨2.1
  // �����������Ա�Lb�е�����La�е�����Ԫ�ز��뵽La��
  int La_len,Lb_len,i;
  ElemType e;
  La_len = ListLength(La);          // �����Ա�ĳ���
  Lb_len = ListLength(Lb);
  for (i=1; i<=Lb_len; i++) {
    GetElem(Lb, i, e);              // ȡLb�е�i������Ԫ�ظ���e
    if (!LocateElem(La, e, equal))  // La�в����ں�e��ͬ������Ԫ��
      ListInsert(La, ++La_len, e);  // ����
  }
} // union
