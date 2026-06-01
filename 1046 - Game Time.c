#include<stdio.h>
int main()
{
    int h1,h2,duration;
    scanf("%d %d",&h1,&h2);
    if ( h1 < 0 || h2 < 0 || h1 > 24 || h2 > 24 )
    {
        return 0;
    }
    if ( h1 >= h2 )
    {
        duration = 24 - (h1 - h2);
        printf("O JOGO DUROU %d HORA(S)\n",duration);
    }
    else if ( h1 < h2 )
    {
        duration = (h2 - h1);
        printf("O JOGO DUROU %d HORA(S)\n",duration);
    }
    return 0;
}
