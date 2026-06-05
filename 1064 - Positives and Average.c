#include <stdio.h>

int main() 
{
    float a,avg,sum = 0.0;
    int count=0;
    for ( int i = 0; i < 6; i++)
    {
        scanf("%f",&a );
        if ( a > 0 )
        {
            count++;
            sum = a + sum;
        }
    }
    printf("%d valores positivos\n",count);
    if ( count > 0 )
    {
        avg = sum / count ;
        printf("%.1f\n",avg);
    }
    return 0;
}
