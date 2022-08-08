//ch14p2.c
//합구하기
#include <stdio.h>

int main()
{
    int i;
    int n= 100;
    int s = 0;

    for (i = 1; i<= n; i++)
    {
        s += i;
    }

    printf("1~%d까지 합: %d\n",n, s);

    return 0;
}
