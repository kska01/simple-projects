#include <stdio.h>

int main(void)
{
    int i, tmp;
    int a[7] = {22, 57, 11, 32, 91, 68, 70};

    printf("정렬 전: ");
    for (i = 0; i < 7; i++) {
        printf("%d, ", a[i]);
    }
    putchar('\n');

    for (i = 0; i < 3; i++)
    {
        tmp = a[i];
        a[i] = a[6 -i];
        a[6 -i] = tmp;
    }

    printf("정렬 후: ");
    for (i = 0; i < 7; i++) {
        printf("%d, ", a[i]);
    }
    putchar('\n');
}