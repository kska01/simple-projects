#include <stdio.h>

int main(void)
{
    int num = 0, digit = 1;

    printf("양의 정수를 입력하시오 : "); scanf("%d", &num);

    while ((num /= 10) != 0)
    {
        digit++;
    }

    printf("그 수는 %d자리입니다.\n", digit);
}