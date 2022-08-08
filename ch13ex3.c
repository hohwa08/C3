//ch13ex3.c
//
#include <stdio.h>

int main()
{
    int n1, n2;
    char r;

    do {
        printf("정수 2개를 입력하세요: ");
        scanf("%d %d",&n1, &n2);

        printf("%d + %d = %d\n", n1 , n2, n1 + n2);
        printf("연산을 더 할까요?(Y): ");
        scanf(" %c", &r);
    } while(r == 'Y'|| r == 'y');
    return 0;
}
