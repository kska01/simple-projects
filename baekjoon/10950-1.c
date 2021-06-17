#include <stdio.h>

int main()
{
    int t;
    int num[] = {0,};
    scanf("%d", &t);

    for(int i = 0; i < t * 2; i += 2)
    {
        scanf("%d %d", &num[i], &num[i+1]);
    }

    for(int j = 0; j < t * 2; j += 2)
    {
        printf("%d\n", num[j] + num[j+1]);
    }
    return 0;
}