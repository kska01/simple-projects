#include <stdio.h>

void main()
{
    int sum = 0, num;
    for(num = 1; num <= 5; num++)
    {
        printf("num(%d) + sum(%d) = %d\n", num, sum, num + sum);
        sum = sum + num;
    }
    printf("Result : num = %d sum = %d\n", num, sum);
}
