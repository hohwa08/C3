//ch13lab2.c
#include <stdio.h>

int main()
{
    int n, s, c;
    s = 0;
    c = 1;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &n);

    while(c <= n)
    {
        s +=c;
        c++;

    }
    printf("1~%d������ �հ�� %d.\n", n, s);
    return 0;
}
