//ch11ex2.c
//두 수 중 큰 수 출력하기

#include <stdio.h>

int main()
{
    int num1, num2;
    int large, small;

    printf(" 2개의 수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    large = (num1 > num2) ? num1 : num2;
    small = (num1 < num2) ? num1 : num2;

    printf("큰 수는 %d입니다.\n", large);
    printf("작은 수는 %d입니다.", small);
    return 0;
}
