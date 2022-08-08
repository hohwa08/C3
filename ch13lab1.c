//ch13lab1.c
#include <stdio.h>

int main()
{
    int c, n;
    c = 1;
    while(c<=3)
    {
        printf("%d번째 정수를 입력하세요: ", c);
        scanf("%d", &n);
        printf("입력된 정수는 %d입니다.\n", n);
        c++;
    }
    return 0;
}
