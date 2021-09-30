#include <stdio.h>

void spira(int n)
{
    int i, j, k;
    int width = n;

    for(i = 1; i <= n; ++i)
    {
        for (j = 1; j < width; ++j)
        {
            putchar(' ');
        }
        for (k = 1; k <= (i - 1) * 2 + 1; ++k)
        {
            putchar('*');
        }
        putchar('\n');
        --width;
    }
}

int main(void)
{
    int n;
    printf("피라미드 단수 입력하시오. : ");
    scanf("%d", &n);
    spira(n);
    return 0;
}