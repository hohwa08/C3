//ch11ex1_2.c
//짝수 / 홀수 판단하기

#include <stdio.h>

int main()
{
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    printf("%s", (num %2 ==0) ? "짝수": "홀수");

    return 0;
}
