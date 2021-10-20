#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%i", &a);

    printf("Digite outro numero maior que o primeiro: ");
    scanf("%i", &b);

    while(b<a){
        printf("Erro!\nDigite novamente um numero maior que o primeiro: ");
        scanf("%i", &b);
    }
    return 0;
}