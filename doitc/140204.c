#include <stdio.h>

void main()
{
    char input_string[100];
    gets(&input_string[0]);
    printf("input : %s\n", input_string);
}