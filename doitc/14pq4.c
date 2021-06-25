#include <stdio.h>

void main()
{
    char name1[10], name2[10], name3[10];
    int k1, e1, m1, k2, e2, m2, k3, e3, m3;

    printf("1 번째 학생 이름 : ");
    scanf("%s", name1);
    printf("국어 점수: ");
    scanf("%d", &k1);
    printf("영어 점수: ");
    scanf("%d", &e1);
    printf("수학 점수: ");
    scanf("%d", &m1);

    printf("2 번째 학생 이름 : ");
    scanf("%s", name2);
    printf("국어 점수: ");
    scanf("%d", &k2);
    printf("영어 점수: ");
    scanf("%d", &e2);
    printf("수학 점수: ");
    scanf("%d", &m2);

    printf("3 번째 학생 이름 : ");
    scanf("%s", name3);
    printf("국어 점수: ");
    scanf("%d", &k3);
    printf("영어 점수: ");
    scanf("%d", &e3);
    printf("수학 점수: ");
    scanf("%d", &m3);

    printf("----------------------------------------\n");
    printf("  이름    국어 영어 수학 총점 평균 등수\n");
    printf("----------------------------------------\n");
    printf(" %s    %d   %d   %d  %d   %d   %d등\n", name3, k3, e3, m3, k3 + e3 + m3, (k3+e3+m3)/3, 1);
    printf(" %s    %d   %d   %d  %d   %d   %d등\n", name2, k2, e2, m2, k2 + e2 + m2, (k2+e2+m2)/3, 2);
    printf(" %s    %d   %d   %d  %d   %d   %d등\n", name1, k1, e1, m1, k1 + e1 + m1, (k1+e1+m1)/3, 3);
}