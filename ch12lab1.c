//ch12lab1.c
#include <stdio.h>

int main()
{
    int num;
    printf("1~5사이의 정수를 입력하세요: ");
    scanf("%d", &num);

    switch(num)
    {
    case 1:
        printf("1 is one");
        break;
    case 2:
        printf("2 is two");
        break;
    case 3:
        printf("3 is three");
        break;
    case 4:
        printf("4 is four");
        break;
    case 5:
        printf("5 is five");
        break;
    default:
        printf("입력오류");


    }
    return 0;
}
