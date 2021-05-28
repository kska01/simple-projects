#include <stdio.h>

void main()
{
    int num = 1, sum = 0;

    do
    {
        printf("num(%d) + sum(%d) = %d\n", num, sum, num + sum);
        sum = sum + num;
        num++;
    } while(num <= 5);
    printf("\nResult : num = %d sum = %d\n", num, sum);   
}