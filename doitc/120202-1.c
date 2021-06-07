#include <stdio.h>

int getstringlength(char data[ ])
{
     int count = 0;
     while(data[count] != 0)
     {
         count++;
     }
     return count;
}

void main()
{
    int data_length;
    char data[10] = "happy";

    data_length = getstringlength(data);
    printf("data length = %d\n", data_length);
}