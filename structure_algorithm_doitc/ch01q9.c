#include <stdio.h>

int sumof(int a, int b)
{
    int min = 0, max = 0;
    int result = 0;

    if(a > b) 
    {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    while (min <= max)
    {
        result += min;
        min++;
    }

    return result;
}

int main()
{
    int a, b, sum;

    printf("정수 두개를 입력하시오. : ");
    scanf("%d %d", &a, &b);
    sum = sumof(a, b);
    printf("두 정수와 사잇값을 모두 합한 값은 %d입니다.\n", sum);

    return 0;
}