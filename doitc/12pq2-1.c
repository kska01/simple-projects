#include <stdio.h>

void main()
{
    short data[9] = {4, 6, 9, 8, 7, 2, 5, 1, 3};
    int result = 0;

    for(int i = 0; i < 9; i++)
    {
        if(i % 2 == 0) result += data[i];
        else continue;
    }
    printf("%d\n", result);
}