//ch14p1.c
//for��
#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i<= 5; i++)
    {
        printf("i: %d\n", i);
    }

    printf("5~1���� ���\n");
    for(i = 5; i > 0; i--)
    {
        printf("i: %d\n", i);
    }
    printf("1~10���� Ȧ�� ���\n");
    for(i = 1; i<=10;i+=2)
    {
        printf("i: %d\n", i);
    }
    printf("2~10���� ¦�� ���\n");
    for(i = 2; i<=90000;i+=2)
    {
        printf("i: %d\n", i);
    }

    return 0;
}
