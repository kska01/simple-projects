#include <stdio.h>

void showmultiplication(int step)   //책의 문제와 달리 원하는 단수를 입력받아 구구단을
{                                   //출력하는 코드로 바꿔 보았음   
    int i;
    
    for(i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", step, i, step * i);
    }
}

void main()
{
    int step;

    scanf("%d", &step);
    showmultiplication(step);
}