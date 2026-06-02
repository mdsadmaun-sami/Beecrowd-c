#include<stdio.h>
int main()
{
    int DDD;
    scanf("%d",&DDD);
    if ( DDD == 61 )
    {
        printf("Brasilia\n");
    }
    else if ( DDD == 71 )
    {
        printf("Salvador\n");
    }
    else if ( DDD == 11 )
    {
        printf("Sao Paulo\n");
    }
    else if ( DDD == 21 )
    {
        printf("Rio de Janeiro\n");
    }
    else if ( DDD == 32 )
    {
        printf("Juiz de Fora\n");
    }
    else if ( DDD == 19 )
    {
        printf("Campinas\n");
    }
    else if ( DDD == 27 )
    {
        printf("Vitoria\n");
    }
    else if ( DDD == 31 )
    {
        printf("Belo Horizonte\n");
    }
    else
    {
        printf("DDD nao cadastrado\n");
    }
    return 0;
}


______________________________________by switch case___________________________________________


#include<stdio.h>
int main()
{
    int DDD;
    scanf("%d",&DDD);
    switch (DDD)
    {
        case 61: printf("Brasilia\n");
        break;
        case 71: printf("Salvador\n");
        break;
        case 11: printf("Sao Paulo\n");
        break;
        case 21: printf("Rio de Janeiro\n");
        break;
        case 32: printf("Juiz de Fora\n");
        break;
        case 19: printf("Campinas\n");
        break;
        case 27: printf("Vitoria\n");
        break;
        case 31: printf("Belo Horizonte\n");
        break;
        default: printf("DDD nao cadastrado\n");
        break;
    }
    return 0;
}
