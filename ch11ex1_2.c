//ch11ex1_2.c
//¦�� / Ȧ�� �Ǵ��ϱ�

#include <stdio.h>

int main()
{
    int num;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);

    printf("%s", (num %2 ==0) ? "¦��": "Ȧ��");

    return 0;
}
