#include <stdio.h>

int main()
{
    int a,b,s;
    double L;
    scanf("%d",&a);
    scanf("%d",&b);
    s = a * b;
    L = s*1.0 / 12;
    printf("%.3lf\n",L);
}
