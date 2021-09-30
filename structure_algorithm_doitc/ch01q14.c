#include <stdio.h>

int main(void)
{
    int input, i, j;

    printf("사각형을 출력합니다.\n");
    printf("입력할 수 : "); scanf("%d", &input);

    for (i = 0; i < input; i++)
    {
        for (j = 0; j < input; j++)
        {
            printf("* ");
        }
        putchar('\n');
    }
    return 0;
}