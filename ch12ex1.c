//ch12ex1.c
//등급에 따른 성적 출력

#include <stdio.h>

int main()
{
    char grade;

    printf("등급을 입력하세요(A ~F): ");
    scanf("%c", &grade);

    switch(grade)
    {
    case 'A': case 'a':
        printf("90 ~100점 사이");
        break;
    case 'B': case 'b':
        printf("80~ 89점 사이");
        break;
    case 'C': case 'c':
        printf("70 ~79점 사이");
        break;
    case 'D': case 'd':
        printf("60 ~69점 사이");
        break;
    case 'E' : case 'e':
    case 'F': case 'f':
        printf("0 ~59점 사이");
        break;
    default:
        printf("입력 오류");

    }
    return 0;
}
