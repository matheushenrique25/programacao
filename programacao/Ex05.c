#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a, f;
     printf("Digite o valor em graus celsius: ");
  scanf("%f", &a);
   f= (a*1.8)+32;
    printf(" %.1f em graus celsius e igual a %.2f fahrenheit", a, f);
 
  return 0;
}