#include <stdio.h>

void main()
{
    int a, b, c;
    double average;

    printf("input first value : ");
    scanf("%d", &a);
    printf("input second value : ");
    scanf("%d", &b);
    printf("input third value : ");
    scanf("%d", &c);
    average = (a + b + c) / 3.0;

    printf("(%d + %d + %d) / 3 = %f\n", a, b, c, average);
}