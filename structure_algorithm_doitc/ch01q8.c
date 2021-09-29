#include <stdio.h>

int main()
{
    int input = 0, sum = 0;
    printf("정수값을 입력하세요. : ");
    scanf("%d", &input);

    if (input % 2 != 0)
    {
        sum = (1 + input) * (input / 2) + ((input + 1) / 2);
    }
    else sum = (1 + input) * input/2;

    printf("1부터 %d까지의 합은 %d입니다.\n", input, sum);

    return 0;
}