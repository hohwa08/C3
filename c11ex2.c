//ch11ex2.c
//�� �� �� ū �� ����ϱ�

#include <stdio.h>

int main()
{
    int num1, num2;
    int large, small;

    printf(" 2���� ���� �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2);

    large = (num1 > num2) ? num1 : num2;
    small = (num1 < num2) ? num1 : num2;

    printf("ū ���� %d�Դϴ�.\n", large);
    printf("���� ���� %d�Դϴ�.", small);
    return 0;
}
