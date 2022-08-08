//ch12lab2.c

#include <stdio.h>

int main()
{
    int n1, n2;
    char op;

    n1 = 40;
    n2 = 5;

    printf("%d과 %d의 연산을 선택하세요(+,-,*,/,%%): ", n1, n2);
    scanf("%c", &op);

    switch(op)
    {
    case '+':
        printf("%d %c %d는 %d입니다", n1, op, n2, n1 + n2);
        break;
    case '-':
        printf("%d %c %d는 %d입니다", n1, op, n2, n1 - n2);
        break;
    case '*':
        printf("%d %c %d는 %d입니다", n1, op, n2, n1 * n2);
        break;
    case '/':
        printf("%d %c %d는 %d입니다", n1, op, n2, n1 / n2);
        break;
    case '%':
        printf("%d %c %d는 %d입니다", n1, op, n2, n1 %n2);
        break;
    default:
        printf("입력오류!");
    }
    return 0;
}
