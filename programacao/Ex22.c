#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, nu;
    printf("Digite um numero positivo: ");
    scanf("%i", &nu);

    while(nu<=0){
        printf("Erro! Digite Somente numeros positivos\nTente novamente: ");
        scanf("%i", &nu);
    }

    return 0;
}
