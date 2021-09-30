#include <stdio.h>

void nrpira(int n)
{
    int i, j, k;
    int width = n;
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= i - 1; ++j)
        {
            putchar(' ');
        }
        for(k = 1; k <= (width - 1) * 2 + 1; ++k)
        {
            printf("%d", i % 10);
        }
        putchar('\n');
        --width;
    }
}

int main(void)
{
    int n;
    printf("피라미드의 단수를 입력하시오. : ");
    scanf("%d", &n);
    nrpira(n);
    return 0;
}