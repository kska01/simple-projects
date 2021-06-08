#include <stdio.h>
#include <string.h>

void main()
{
    char data[10] = "abc";
    char result[16];

    strcpy(result, data);
    strcat(result, "def");

    printf("%s + \"def\" = %s\n", data, result);
}