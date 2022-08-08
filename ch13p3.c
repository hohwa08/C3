//ch13p3.c
//do~while
#include <stdio.h>

int main()
{
    int cnt = 1;

    do{
        printf("cnt = %d\n", cnt);
        cnt++;
    }while(cnt<=5);

    return 0;
}
