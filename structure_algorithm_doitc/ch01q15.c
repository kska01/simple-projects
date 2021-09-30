#include <stdio.h>

int main(void)
{
    int i, j;
    int height, width;

    printf("직사각형을 출력합니다.\n");
    printf("높이 : "); scanf("%d", &height);
    printf("너비 : "); scanf("%d", &width);

    for (i = 0; i < height; ++i)
    {
        for (j = 0; j < width; ++j)
        {
            printf("* ");
        }
        putchar('\n');
    }
    return 0;
}