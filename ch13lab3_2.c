//ch13lab3_2.c
#include <stdio.h>

int main()
{

    int n, i;
    int f = 1;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);
    for(i = 1; i<= n; i++)
    {
        f *= i;
    }
    printf("%d�Դϴ�!\n",f);
    return 0;
}
