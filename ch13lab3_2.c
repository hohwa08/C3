//ch13lab3_2.c
#include <stdio.h>

int main()
{

    int n, i;
    int f = 1;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);
    for(i = 1; i<= n; i++)
    {
        f *= i;
    }
    printf("%d입니다!\n",f);
    return 0;
}
