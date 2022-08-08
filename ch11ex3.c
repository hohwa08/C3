//ch12p1.c
//메뉴 선택
#include <stdio.h>

int main()
{
    int num;

    printf("----------------------\n");
    printf("무엇을 하시겠습니까? \n");
    printf("1. 새로운 연락처 추가\n");
    printf("2. 기존 연락처 편집\n");
    printf("3. 연락처 전화\n");
    printf("4. 연락처 문자 메시지\n");
    printf("5. 종료\n");
    printf("----------------------\n");
    scanf("%d", &num);

    switch(num)
    {
    case 1:
        printf("1.연락처 추가");
        break;
    case 2:
        printf("2. 연락처 편집");
        break;
    case 3:
        printf("3.연락처 전화");
        break;
    case 4:
        printf("4.연락처 메시지");
        break;
    case 5:
        printf("5. 종료");
        break;
    default:
        printf("선택오류");

    }

    return 0;
}
