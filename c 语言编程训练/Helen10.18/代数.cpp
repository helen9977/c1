#include <stdio.h>

int main (void)
{
    int cookies = 45;
    int children = 7;
    int per = 0;
    int left = 0;

    per = cookies / children;
    printf("���� %d �����,�� %d ������\n", cookies, children);
    printf("�ָ�ÿ������ %d �����\n", per);
    left = cookies % children;
    printf("ʣ�µı����� %d ��\n", left);
    return 0;
}

