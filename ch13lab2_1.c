//ch13lab2_1.c
#include <stdio.h>

int main()
{
    int n, i;
    int s = 0;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);
    for(i = 1; i<= n; i++)
    {
        s += i;
    }
    printf("1~%d������ �հ�� %d", n, s);

    return 0;
}
