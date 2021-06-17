#include <stdio.h>

void main()
{
    short data[9] = {4, 6, 9, 8, 7, 2, 5, 1, 3};
    int temp;

    for (int i = 0; i < 8; i++)
    {
        if (data[i] < data[i+1]) continue;
        else 
        {
            temp = data[i+1];
            data[i+1] = data[i];
            data[i] = temp;
        }
    }
    printf("가장 큰 값은 %d이다.\n", data[8]);
}