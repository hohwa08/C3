//ch13ex2.c
//합 ㄱ하기
#include <stdio.h>

int main()
{
    int num;
    int c = 0, s = 0;

    while(c < 3)
    {
        printf("정수: ");
        scanf("%d", &num);

        s += num;
        c += 1;
    }
    printf("합: %d\n", s);


    return 0;
}
