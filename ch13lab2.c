//ch13lab2.c
#include <stdio.h>

int main()
{
    int n, s, c;
    s = 0;
    c = 1;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    while(c <= n)
    {
        s +=c;
        c++;

    }
    printf("1~%d까지의 합계는 %d.\n", n, s);
    return 0;
}
