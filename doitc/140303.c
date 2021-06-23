#include <stdio.h>
#include <string.h>

void main()
{
    int num = 0, i, count;
    char num_string[4] = "123";

    count = strlen(num_string);

    for(i = 0; i < count; i++)
    {
        num = (num + (num_string[i] - '0')) * 10;
    }
    num = num / 10;
    printf(" %s -> %d\n", num_string, num);
}