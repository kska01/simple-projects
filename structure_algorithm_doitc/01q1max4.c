#include <stdio.h>

int max4(int a, int b, int c, int d)
{
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;
    return max;
}

int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("최대값 : %d\n", max4(a, b, c, d));
    return 0;
}