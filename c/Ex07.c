#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a, b, c, d, e, v, p, t;
     printf("Digite o valor do primeiro produto: ");
  scanf("%f", &a);
   printf("Digite o valor do segundo produto: ");
  scanf("%f", &b);
   printf("Digite o valor do terceiro produto: ");
  scanf("%f", &c);
   printf("Digite o valor do quarto produto: ");
  scanf("%f", &d);
   printf("Digite o valor do quinto produto: ");
  scanf("%f", &e);
   v=( a + b + c + d + e ); 
    printf("valor total dos produtos e igual: %.2f  ", v);
   
    printf("Digite o valor pago: ");
  scanf("%f", &p);
   t=p-v;
    printf("valor do troco e igual %.2f", t);
 
  return 0;
}