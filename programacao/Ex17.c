#include<stdio.h> 
int main(int argc, char const *argv[])
{
    int h, ca, co, S, M;
    printf("Lado 1: " );
    scanf("%i",&h);

    printf("Lado 2: " );
    scanf("%i",&ca);

    printf("Lado 3: " );
    scanf("%i",&co);

    S = h*h;
    M = (co*co) + (ca*ca);

    if(S == M)
    {
        printf("E um triangulo retangulo" );
    }
    else
    {
        printf("Nao e um triangulo retangulo" );
    }

    return 0;
}