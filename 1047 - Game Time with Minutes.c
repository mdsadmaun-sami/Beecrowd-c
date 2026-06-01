int main()
{
    int h1,h2,m1,m2,duration_h,duration_m;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if ( h1 == h2 && m1 == m2 )
    {
        duration_h = 24 - (h1 - h2);
        duration_m = m1 - m2;   
    }
    else if (h1 < h2)
    {
        if (m1 <= m2)
        {
            duration_h = h2 - h1;
            duration_m = m2 - m1;
        }
        else
        {
            duration_h = (h2 - h1) - 1;
            duration_m = (m2 + 60) - m1;
        }
    }  
    else if (h1 > h2)
    {
        if (m1 <= m2)
        {
            duration_h = (24 - h1) + h2;
            duration_m = m2 - m1;
        }
        else
        {
            duration_h = ((24 - h1) + h2) - 1;
            duration_m = (m2 + 60) - m1;
        }
    }
    else if (h1 == h2)
    {
        if (m1 < m2)
        {
            duration_h = 0;
            duration_m = m2 - m1;
        }
        else
        {
            duration_h = 23;
            duration_m = (m2 + 60) - m1;
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duration_h,duration_m);
    return 0;
}
