#include <stdio.h>

int main() 
{
    int n,odd;
    scanf("%d",&n);
    if ( n >= 1 && n <= 1000 )
    {
        for ( int i = 0; i<= n; i++ )
        {
            if ( i % 2 != 0 )
           {
            printf("%d\n",i);
           }
        }
    }
    return 0;
}
