//ch13ex1.c
//5�� ���� �Է¹޾� �ձ��ϱ�
#include <stdio.h>

int main()
{
    int num;
    int cnt = 0, sum = 0;

    while(cnt < 5)
    {
        printf("���� �Է�: ");
        scanf("%d", &num);

        sum += num;
        cnt++;
        printf("%d. num: %d, sum: %d\n", cnt, num, sum);
    }
    printf("5�� ������ ��: %d\n", sum);

    return 0;
}
