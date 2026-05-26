#include<stdio.h>
int main()
{
    int N,H,rN,M,S;
    scanf("%d",&N);
    H = N/3600;
    rN = N % 3600;
    M = rN/60;
    S = rN % 60;
    printf("%d:%d:%d\n",H,M,S);
    return 0;
}
