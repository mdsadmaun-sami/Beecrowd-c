#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    if ( 5 < N && N < 2000 )
    {
        for ( i = 2 ; i <= N ; i+=2 )
        {
            printf("%d^2 = %d\n", i, i * i);
        }
    }
    else
    {
        return 0;
    }
}
