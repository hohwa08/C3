//ch12p1.c
//�޴� ����
#include <stdio.h>

int main()
{
    int num;

    printf("----------------------\n");
    printf("������ �Ͻðڽ��ϱ�? \n");
    printf("1. ���ο� ����ó �߰�\n");
    printf("2. ���� ����ó ����\n");
    printf("3. ����ó ��ȭ\n");
    printf("4. ����ó ���� �޽���\n");
    printf("5. ����\n");
    printf("----------------------\n");
    scanf("%d", &num);

    switch(num)
    {
    case 1:
        printf("1.����ó �߰�");
        break;
    case 2:
        printf("2. ����ó ����");
        break;
    case 3:
        printf("3.����ó ��ȭ");
        break;
    case 4:
        printf("4.����ó �޽���");
        break;
    case 5:
        printf("5. ����");
        break;
    default:
        printf("���ÿ���");

    }

    return 0;
}
