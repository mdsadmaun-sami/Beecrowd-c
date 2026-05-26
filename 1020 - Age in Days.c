#include<stdio.h>
int main()
{
    int days,year,rdays,months,rmonths;
    scanf("%d",&days);
    year = days/365;
    rdays = days % 365;
    months = rdays/30;
    days = rdays % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,months,days);
    return 0;
}
