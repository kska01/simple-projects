#include <stdio.h>

void main()
{
    int step, i;

    for(step = 2; step <= 5; step++)
    {
        for(i = 1; i <= 9; i++)
        {
            printf("%d * %d = %d\n", step, i, step * i);
        }
    }
}