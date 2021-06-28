#include <stdio.h>

int main()
{
    int n, i, index, max = 0;

    for(i = 0; i < 9; i++)
    {
        scanf("%d", &n);
        if(n > max)
        {
            max = n;
            index = i + 1;
        }
    }
    printf("%d\n%d\n", max, index);
    return 0;
}