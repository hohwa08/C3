//ch13p2.c
//while
#include <stdio.h>

int main()
{
    int cnt = 1;

    //1 ~10 ���
    printf("1~10\n");
    while(cnt<= 10)
    {
        printf("cnt: %d\n", cnt++);
    }
    //1 ~ 10 Ȧ���� ���

    printf("1~10 Ȧ��\n");
    cnt = 1;
    while(cnt<= 10)
    {
        printf("cnt: %d\n", cnt);
        cnt += 2;
    }
    printf("1~10 ¦��\n");
    cnt = 2;
    while(cnt<= 10)
    {
        printf("cnt: %d\n", cnt);
        cnt += 2;
    }

    return 0;
}

