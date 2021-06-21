#include <stdio.h>

int main()
{
    int n, j;
    scanf("%d", &n);
    j = n;

    for(int i = 1; i <= n; i++)
    {
        printf("%d\n", j);
        j--;
    }
    return 0;
}