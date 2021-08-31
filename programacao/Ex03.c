#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, area;
     printf("Digite a base do triangulo: ");
  scanf("%i", &a);
   printf("Digite a altura do triangulo: ");
  scanf("%i", &b);
   area =( a * b)/2;
    printf("A area do triangulo de base %i e altura %i e igual a %i", a, b, area);
 
  return 0;
}