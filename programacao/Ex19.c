#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, v0, t, v;
    printf("Digite o Valor da aceleracao(m/s2):  ");
    scanf("%i", &a);

    printf("Digite o Valor da velocidade inicial(m/s): ");
    scanf("%i", &v0);

    printf("Digite o Tempo de percurso(s): ");
    scanf("%i", &t);

    v = v0 + (a*t);
     printf("A velocidade deu: %i km/h", v);

    if(v<=40){
        printf("\nVeiculo muito lento");
    }
    else if(v<=60){
        printf("\nVelocidade permitida");

    }
    else if(v<=80){
        printf("\nVelocidade de cruzeiro");
    }
    else if(v<=120){
        printf("\nVeiculo rapido");
    }
    else{
        printf("\nVeiculo muito rapido");
    }

    return 0;
}