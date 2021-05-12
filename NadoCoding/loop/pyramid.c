#include <stdio.h>

int main()
{
    int floor;
    int i, j, k;
    printf("몇 층으로 쌓겠느냐? ");
    scanf("%d", &floor);
    for (i = 0; i < floor; i++)
    {
        for (j = i; j < floor - 1; j++)
        {
            printf(" ");
        }
        for (k = 0; k < i * 2 + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}