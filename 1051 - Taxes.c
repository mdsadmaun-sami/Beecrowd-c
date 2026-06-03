#include<stdio.h>
int main()
{
    float money,tax=0.0;
    scanf("%f",&money);
    if ( money <= 2000.00 )
    {
        printf("Isento\n");
    }
    else if ( money > 2000.01 && money <= 3000.00 )
    {
        money = money - 2000.00;
        tax = money * 8/100;
        printf("R$ %.2f\n",tax);
    }
    else if ( money >= 3000.01 && money <= 4500.00 )
    {
        money = money - 3000.00;
        tax = money * 18/100;
        tax = tax + 1000.00 * 8/100;
        printf("R$ %.2f\n",tax);
    }
    else if ( money > 4500.00 )
    {
        money = money - 4500;
        tax = money * 28/100;
        tax = tax + 1500.00 * 18/100;
        tax = tax + 1000.00 * 8/100;
        printf("R$ %.2f\n",tax);
    }
    return 0;
}
