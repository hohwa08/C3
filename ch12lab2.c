//ch12lab2.c

#include <stdio.h>

int main()
{
    int n1, n2;
    char op;

    n1 = 40;
    n2 = 5;

    printf("%d�� %d�� ������ �����ϼ���(+,-,*,/,%%): ", n1, n2);
    scanf("%c", &op);

    switch(op)
    {
    case '+':
        printf("%d %c %d�� %d�Դϴ�", n1, op, n2, n1 + n2);
        break;
    case '-':
        printf("%d %c %d�� %d�Դϴ�", n1, op, n2, n1 - n2);
        break;
    case '*':
        printf("%d %c %d�� %d�Դϴ�", n1, op, n2, n1 * n2);
        break;
    case '/':
        printf("%d %c %d�� %d�Դϴ�", n1, op, n2, n1 / n2);
        break;
    case '%':
        printf("%d %c %d�� %d�Դϴ�", n1, op, n2, n1 %n2);
        break;
    default:
        printf("�Է¿���!");
    }
    return 0;
}
