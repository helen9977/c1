#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
    printf("variables of type char occupy %u bytes\n",sizeof(char));
    printf("variables of type double occupy %u bates\n",sizeof(double));
    printf("variables of type long long occupy %u bates\n",sizeof(long long));
    printf("variables of type char store values from %d to %d\n",CHAR_MIN,CHAR_MAX);


    return 0;
    }
