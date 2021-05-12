#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int h = i; h < 4; h++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}