#include <stdio.h>

void main()
{
    int sum = 0;
    int num = 1;
    for( ; ; )
    {
        printf("num(%d) + sum(%d) = %d\n", num, sum, num + sum);
        sum = sum + num;
        num++;
        if(num > 5) break;
    }
    printf("Result : num = %d sum = %d\n", num, sum);
}