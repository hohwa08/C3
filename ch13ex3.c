//ch13ex3.c
//
#include <stdio.h>

int main()
{
    int n1, n2;
    char r;

    do {
        printf("���� 2���� �Է��ϼ���: ");
        scanf("%d %d",&n1, &n2);

        printf("%d + %d = %d\n", n1 , n2, n1 + n2);
        printf("������ �� �ұ��?(Y): ");
        scanf(" %c", &r);
    } while(r == 'Y'|| r == 'y');
    return 0;
}
