#include <stdio.h>

int main()
{
    int n, i, result, count = 0;
    int tens, units;
    scanf("%d", &n);
    i = n;
    
    while(1)
    {
        tens =  i / 10;
        units = i % 10;
        result = tens + units;
        result = units * 10 + result % 10;
        i = result;
        count++;        
        if(n == i) break;
    }
    printf("%d\n", count);
    return 0;
}