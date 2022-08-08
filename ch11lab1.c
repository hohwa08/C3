//ch11lab1.c

#include <stdio.h>

int main()
{
    int num1, num2, res;


    printf("정수 2개를 입력하세요: ");
    scanf("%d %d", &num1, num2);

    //res = (num1 > num2) ? num1 - num2 : num1 - num2;
    if(num1> num2)
    {
        res = num1 - num2;
    }
    else
    {
        res = num2 - num1;
    }

    printf("%d\n", res);

    return 0;
}
