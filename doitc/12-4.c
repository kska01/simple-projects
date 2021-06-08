#include <stdio.h>
#include <string.h>

void main()
{
    char data[10] = "Hello";
    char result[15];

    strcpy(result, data);
    strcat(result, " world");

    printf("%s\n", result);
}