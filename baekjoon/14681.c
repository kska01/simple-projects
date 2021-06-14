#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    if((a == 0 && b == 0) || (a == 0 || b == 0)) return 0;
    else if(a > 0 && b > 0) printf("1\n");
    else if(a > 0 && b < 0) printf("4\n");
    else if(a < 0 && b > 0) printf("2\n");
    else printf("3\n");
    return 0;
}