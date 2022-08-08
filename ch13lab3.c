//ch13lab3.c
#include <stdio.h>

int main()
{
    int n, c, f;
    c = 1;
    f = 1;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    while(c<=n)
    {
        f *=c;
        printf("c:%d, f: %d\n", c, f);
        c++;
    }
    printf("---------------------------\n");
    printf("%d입니다!\n", f);

    return 0;
}
