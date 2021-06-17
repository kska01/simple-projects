#include <stdio.h>

void main()
{
    int data[7] = {6, 3, 9, 7, 2, 4, 1};
    int temp;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j <6; j++)
        {
            if (data[j] > data[j+1])
            {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
    for (int k = 0; k < 7; k++)
    {
        printf("%d, ", data[k]);
    }
}