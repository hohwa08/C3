//ch13lab1.c
#include <stdio.h>

int main()
{
    int c, n;
    c = 1;
    while(c<=3)
    {
        printf("%d��° ������ �Է��ϼ���: ", c);
        scanf("%d", &n);
        printf("�Էµ� ������ %d�Դϴ�.\n", n);
        c++;
    }
    return 0;
}
