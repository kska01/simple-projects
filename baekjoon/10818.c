#include <stdio.h>

int main()
{
    int n, temp;
    int num[1000001] ={0,};
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(int j = 0; j < n; j++)
    {
        for(int k = j + 1; k < n; k++)
        {
            if(num[j] > num[k])
            {
                temp = num[j];
                num[j] = num[k];
                num[k] = temp;
            }
        }
    }
    printf("%d %d\n", num[0], num[n-1]);
    return 0;
}