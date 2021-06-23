#include <stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    k = n;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < k - 1; j++)
        {
            printf(" ");
        }
        for(j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        k--;
    }
    return 0;
}