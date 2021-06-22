#include <stdio.h>

int main()
{
    char name[10];
    fgets(name, sizeof(name), stdin);
    printf("my name is %s.\n", name);
    return 0;
}