//ch13ex2.c
//1~10¦�� ���
#include <stdio.h>

int main()
{
    int c = 1;

    while(c <= 10)
    {
        if (c %2 ==0)
        {
            printf("c: %d\n", c);
        }

        c++;
    }


    return 0;
}
