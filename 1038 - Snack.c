#include<stdio.h>
int main()
{
   float price;
   int X,Y;
   scanf("%d %d",&X,&Y);
   if( X == 1 )
   {
      price = Y * 4;
      printf("Total: R$ %.2f\n",price);
   }
   else if ( X == 2)
   {
      price = Y * 4.50;
      printf("Total: R$ %.2f\n",price);
   }
   else if ( X == 3)
   {
      price = Y * 5;
      printf("Total: R$ %.2f\n",price);
   }
   else if ( X == 4)
   {
      price = Y * 2;
      printf("Total: R$ %.2f\n",price);
   }
   else if ( X == 5)
   {
      price = Y * 1.50;
      printf("Total: R$ %.2f\n",price);
   }
   return 0;
}
