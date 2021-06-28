#include <stdio.h>

int main()
{
    int i, index, max = 0;
    int n[9];

    for(i = 0; i < 9; i++)
    {
        scanf("%d", &n[i]);
        if(n[i] > max) 
        {
            max = n[i];
            index = i + 1;
        }
    }
    printf("%d\n%d\n", max, index);
    return 0;
}