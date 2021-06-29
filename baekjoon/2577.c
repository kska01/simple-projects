#include <stdio.h>

int main()
{
    int a, b, c, mul, index;
    int result[10] = {0,};
    scanf("%d %d %d", &a, &b, &c);
    mul = a * b * c;

    while(mul > 0)
    {
        index = mul % 10;
        result[index] += 1;
        mul = mul / 10;
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", result[i]);
    }
    return 0;
}  