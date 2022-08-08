//ch13lab2_1.c
#include <stdio.h>

int main()
{
    int n, i;
    int s = 0;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);
    for(i = 1; i<= n; i++)
    {
        s += i;
    }
    printf("1~%d까지의 합계는 %d", n, s);

    return 0;
}
