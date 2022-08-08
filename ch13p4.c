//ch13p4.c
//do~while
#include <stdio.h>

int main()
{
    int score;

    do {
        printf("점수를 입력하세요(0, 100): ");
        scanf("%d", &score);
    }while(score < 0 || score > 100);

    printf("입력된 점수는 %d점입니다.\n", score);


    return 0;
}
