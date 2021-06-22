#include <stdio.h>

void main()
{
    char input_string[100];
    fgets(input_string, sizeof(input_string), stdin);
    printf("input : %s\n", input_string);
}