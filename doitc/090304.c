#include <stdio.h>

void showmultiplication(int step)   
{                                      
    int i;
    
    for(i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", step, i, step * i);
    }
}

void main()
{
    int step;

    for(step = 2; step <= 9; step++)
    {
        showmultiplication(step);
    }
}