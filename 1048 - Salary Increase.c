#include<stdio.h>
int main()
{
    float salary,i_salary,increase;
    int rate;
    scanf("%f",&salary);
    if ( salary >= 0 && salary <= 400.00 )
    {
        rate = 15;
    }
    else if ( salary >= 400.01 && salary <= 800.00 )
    {
        rate = 12;
    }
    else if ( salary >= 800.01 && salary <= 1200.00 )
    {
        rate = 10;
    }
    else if ( salary >= 1200.01 && salary <= 2000.00 )
    {
        rate = 7;
    }
    else if ( salary > 2000.00 )
    {
        rate = 4;
    }
    increase = salary * rate/100;
    i_salary = increase + salary;
    printf("Novo salario: %.2f\n",i_salary);
    printf("Reajuste ganho: %.2f\n",increase);
    printf("Em percentual: %d %%\n",rate);
    return 0;
}
