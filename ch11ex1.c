//ch11ex1.c

#include <stdio.h>

int main()
{
    int num;

    num = 3;

    printf("���� %d���� ��%s �Ծ���.\n", num, (num > 1) ? "����" : "��");

    num = 1;
    printf("���� %d���� ��%s �Ծ���.\n", num, (num > 1) ? "����" : "��");

    return 0;
}
