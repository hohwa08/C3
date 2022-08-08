//ch13ex1.c
//5개 정수 입력받아 합구하기
#include <stdio.h>

int main()
{
    int num;
    int cnt = 0, sum = 0;

    while(cnt < 5)
    {
        printf("정수 입력: ");
        scanf("%d", &num);

        sum += num;
        cnt++;
        printf("%d. num: %d, sum: %d\n", cnt, num, sum);
    }
    printf("5개 정수의 합: %d\n", sum);

    return 0;
}
