#include <stdio.h>

int main() 
{
    int a, c_even=0,c_odd=0,c_positive=0, c_negative =0;
    for ( int i = 0; i < 5; i++)
    {
        scanf("%d",&a );
        if ( a % 2 == 0 )
        {
            c_even++;
        }
        if ( a % 2 != 0 )
        {
            c_odd++;
        }
        if ( a > 0 )
        {
            c_positive++;
        }
        if ( a < 0 )
        {
            c_negative++;
        }
    }
    printf("%d valor(es) par(es)\n",c_even);
    printf("%d valor(es) impar(es)\n",c_odd);
    printf("%d valor(es) positivo(s)\n",c_positive);
    printf("%d valor(es) negativo(s)\n",c_negative);
    return 0;
}
