#include <stdio.h>

void main()
{
    char name[10];
    float w, t;
    int p;
    char b;

    scanf("%s %f %f %c %d", name, &w, &t, &b, &p);
    printf("이름: %s, 몸무게: %.1fkg, 키: %.1fcm, 혈액형: %c형, 심박수: %d회\n", name, w, t, b, p);
}