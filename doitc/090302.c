#include <stdio.h>

void showmultiplication()
{
    int i;
    for(i = 1; i <= 9; i++)
    {
        printf("2 * %d = %d\n", i, 2 * i);
    }
}

void main()
{
    showmultiplication();
}