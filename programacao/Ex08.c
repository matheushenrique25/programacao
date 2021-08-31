#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a, b, imc;
     printf("Digite o peso em kg: ");
  scanf("%f", &a);
   printf("Digite a altura em M: ");
  scanf("%f", &b);
   imc =a/(b*b);
    printf("o imc dessa pessoa e: %.2f", imc);
 
  return 0;
}