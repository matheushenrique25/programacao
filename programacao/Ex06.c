#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float d, r;
     printf("a cotacao do dolar para reais atualmente e de 5.26.");
     printf("Digite o valor em dolares: ");
  scanf("%f", &d);
   r= d*5.26;
    printf(" %.f dolares e igual %.2f reais", d, r);
 
  return 0;
}