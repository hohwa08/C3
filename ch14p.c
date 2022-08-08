//ch14p1.c
//for문
#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i<= 5; i++)
    {
        printf("i: %d\n", i);
    }

    printf("5~1까지 출력\n");
    for(i = 5; i > 0; i--)
    {
        printf("i: %d\n", i);
    }
    printf("1~10까지 홀수 출력\n");
    for(i = 1; i<=10;i+=2)
    {
        printf("i: %d\n", i);
    }
    printf("2~10까지 짝수 출력\n");
    for(i = 2; i<=90000;i+=2)
    {
        printf("i: %d\n", i);
    }

    return 0;
}
