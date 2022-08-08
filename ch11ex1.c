//ch11ex1.c

#include <stdio.h>

int main()
{
    int num;

    num = 3;

    printf("나는 %d개의 배%s 먹었다.\n", num, (num > 1) ? "들을" : "를");

    num = 1;
    printf("나는 %d개의 배%s 먹었다.\n", num, (num > 1) ? "들을" : "를");

    return 0;
}
