#include<stdio.h>
#include<string.h>

int main(){
  char s1[81],s2[81];
  char *p;
  gets(s1);
  gets(s2);
  while(strstr(s1,s2)){
    p=strstr(s1,s2);//记录s2出现的位置
    p[0]='\0';//重置s1的有效字符串
    strcat(s1,p+strlen(s2));//将s1.p位置后的字符串拷贝到s1上。
  }
  printf("%s\n",s1);//输出更新后的s1
  return 0;
}
