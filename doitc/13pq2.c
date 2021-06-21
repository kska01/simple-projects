#include <stdio.h>

int main()
{
    int data = 0x12345678;
    int *p;
    
    p = &data;
    printf("befor : 0x%X\n", *p);
    
    *(short *)p = 0x0412;
    printf("after : 0x%X\n", *p);
    return 0;
}