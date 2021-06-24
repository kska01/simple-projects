#include <stdio.h>
#include <string.h>

void main()
{
    char first[32], second[32];
    int length;

    printf("input first string : ");
    fgets(first, 32, stdin);
    printf("input second string : ");
    fgets(second, 32, stdin);

    length = strlen(first);
    if(length > 0) first[length - 1] = 0;
    strcat(first, second);
    printf("%s\n", first);
}