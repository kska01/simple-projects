#include <stdio.h>

int min4(int a, int b, int c, int d)
{
    int min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    if(d < min) min = d;
    return min;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("최솟값 : %d\n", min4(a, b, c, d));
    return 0;
}