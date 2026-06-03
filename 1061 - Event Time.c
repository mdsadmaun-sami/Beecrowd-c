#include <stdio.h>

int main() 
{
    int d1,h1,m1,s1;
    int d2,h2,m2,s2;
    scanf("Dia %d",&d1);
    scanf("%d : %d : %d\n",&h1,&m1,&s1);
    scanf("Dia %d",&d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    int start = s1 + (m1 * 60) + (h1 * 3600) + (d1 * 86400);
    int end = s2 + (m2 * 60) + (h2 * 3600) + (d2 * 86400);
    int diff = end - start;
    printf("%d dia(s)\n", diff / 86400);
    diff %= 86400;
    printf("%d hora(s)\n", diff / 3600);
    diff %= 3600;
    printf("%d minuto(s)\n", diff / 60);
    printf("%d segundo(s)\n", diff % 60);
    return 0;
}
