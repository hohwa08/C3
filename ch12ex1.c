//ch12ex1.c
//��޿� ���� ���� ���

#include <stdio.h>

int main()
{
    char grade;

    printf("����� �Է��ϼ���(A ~F): ");
    scanf("%c", &grade);

    switch(grade)
    {
    case 'A': case 'a':
        printf("90 ~100�� ����");
        break;
    case 'B': case 'b':
        printf("80~ 89�� ����");
        break;
    case 'C': case 'c':
        printf("70 ~79�� ����");
        break;
    case 'D': case 'd':
        printf("60 ~69�� ����");
        break;
    case 'E' : case 'e':
    case 'F': case 'f':
        printf("0 ~59�� ����");
        break;
    default:
        printf("�Է� ����");

    }
    return 0;
}
