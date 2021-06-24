#include <stdio.h>
#include <string.h>

void main()
{
    char first[100] = {0,};
    char second[100] = {0,};
    int length;

    fgets(first, sizeof(first), stdin);
    fgets(second, sizeof(second), stdin);

    length = strlen(first);
    if(length > 0) first[length - 1] = 0;
    strcat(first, second);
    printf("%s", first);
}