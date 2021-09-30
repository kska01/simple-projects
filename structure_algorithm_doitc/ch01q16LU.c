#include <stdio.h>

void triangleLB(int n)
{
    int i, j;
    int width = n;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= width; j++)
            printf("* ");
        putchar('\n');
        --width;
    }
}

int main(void)
{
    int i, j, n;

    do {
        printf("몇 단 삼각형입니까? : ");
        scanf("%d", &n);
    } while (n <= 0);

    triangleLB(n);

    return 0;
}