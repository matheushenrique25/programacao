#include<stdio.h>
int main(int argc, char const *argv[])
{
    float p1, p2, m;

    printf("Digite o Valor da P1: ");
    scanf("%f",&p1);

    m=5;
    p2 = ((3*m)-p1)/2;

    printf("\n o aluno devera tirar na P2: %.1f", p2);
    scanf("%f", &p2);

    return 0;
}