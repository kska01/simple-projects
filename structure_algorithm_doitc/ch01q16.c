#include <stdio.h>

void triangleLB(int n)
{
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("* ");
        putchar('\n');
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