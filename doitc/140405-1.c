#include <stdio.h>

void main()
{
    int num = 0;

    while(1)
    {
        printf("input age : ");
        
        if(scanf("%d", &num) == 0)
        {
            while(getchar() != '\n');
            printf("[Enter] digit number!! \n");
        }
        else
        {
            if(num > 0 && num <= 130)
            {
                break;
            }
            else printf("Incorrect Age!! \n");
        }
    }
    printf("your age : %d \n", num);
}