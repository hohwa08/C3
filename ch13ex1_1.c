//ch13ex2.c
//�� ���ϱ�
#include <stdio.h>

int main()
{
    int num;
    int c = 0, s = 0;

    while(c < 3)
    {
        printf("����: ");
        scanf("%d", &num);

        s += num;
        c += 1;
    }
    printf("��: %d\n", s);


    return 0;
}
