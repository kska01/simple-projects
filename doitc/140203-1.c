#include <stdio.h>

void main()
{
    int input_data = getchar();
    while(getchar() != '\n');
    printf("first input : %c\n", input_data);
    input_data = getchar();
    while(getchar() != '\n');
    printf("second input : %c\n", input_data);
}