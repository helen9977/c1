#include <stdio.h>

int main (void)
{
    int cookies = 45;
    int children = 7;
    int per = 0;
    int left = 0;

    per = cookies / children;
    printf("你有 %d 块饼干,有 %d 个孩子\n", cookies, children);
    printf("分给每个孩子 %d 块饼干\n", per);
    left = cookies % children;
    printf("剩下的饼干有 %d 块\n", left);
    return 0;
}

