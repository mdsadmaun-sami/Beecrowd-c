#include <stdio.h>

int main() 
{
    int n,count=0;
    scanf("%d",&n);
    for ( count = 0; count < 6;  )
    {
      if ( n % 2 != 0 )
      {
        printf("%d\n",n);
        count++;
      }
      n++;
    }
    return 0;
}


-----------------------by while loop------------------------

#include <stdio.h>

int main() 
{
    int n,count=0;
    scanf("%d",&n);
    while ( count < 6 )
    {
      if ( n % 2 != 0 )
      {
        printf("%d\n",n);
        count++;
      }
      n++;
    }
    return 0;
}
