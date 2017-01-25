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
void Union(List &La, List Lb) {  // 算法2.1
  // 将所有在线性表Lb中但不在La中的数据元素插入到La中
  int La_len,Lb_len,i;
  ElemType e;
  La_len = ListLength(La);          // 求线性表的长度
  Lb_len = ListLength(Lb);
  for (i=1; i<=Lb_len; i++) {
    GetElem(Lb, i, e);              // 取Lb中第i个数据元素赋给e
    if (!LocateElem(La, e, equal))  // La中不存在和e相同的数据元素
      ListInsert(La, ++La_len, e);  // 插入
  }
} // union
