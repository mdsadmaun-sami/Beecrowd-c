#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,media,more_score,r_avg;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1)) / (2+3+4+1) ;
    printf("Media: %.1f\n",media);
    if ( media >= 7.0 )
    {
        printf("Aluno aprovado.\n");
    }
    else if ( media < 5.0 )
    {
        printf("Aluno reprovado.\n");
    }
    else if ( 5.0 <= media && media <= 6.9 )
    {
        printf("Aluno em exame.\n");
        scanf("%f",&more_score);
        printf("Nota do exame: %.1f\n",more_score);
        r_avg= ( more_score + media ) / 2;
        if ( r_avg >= 5.0 )
        {
           printf("Aluno aprovado.\n");
        }
        else 
        {
           printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",r_avg);
    }
    return 0;
}
