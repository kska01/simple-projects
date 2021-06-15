#include <stdio.h>

int main()
{
    int h, m;
    scanf("%d %d", &h, &m);

    if((m + 15) >= 60)
    {
        m = m + 15 - 60;
        printf("%d %d\n", h, m);
    }
    else if((m + 15) > 14 && (m + 15) < 60)
    {
        h = h - 1;
        if(h < 0) h = 23;
        m = m + 15;
        printf("%d %d\n", h, m);
    }
    return 0;
}