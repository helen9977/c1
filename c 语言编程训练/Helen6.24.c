#include<stdio.h>
#include<string.h>

int main(){
  char s1[81],s2[81];
  char *p;
  gets(s1);
  gets(s2);
  while(strstr(s1,s2)){
    p=strstr(s1,s2);//��¼s2���ֵ�λ��
    p[0]='\0';//����s1����Ч�ַ���
    strcat(s1,p+strlen(s2));//��s1.pλ�ú���ַ���������s1�ϡ�
  }
  printf("%s\n",s1);//������º��s1
  return 0;
}
