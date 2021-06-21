#include <stdio.h>

int main()
{
    char a = 0x12, b = 0x34;
    short c = 0x5678;
    int t = c;
    char *p = (char *)&t;
    *(p + 2) = b;
    *(p + 3) = a;

    printf("t : 0x%X\n", t);
    return 0;
}