#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  float l01, l02, l03;
  
  printf("\n Digite o tamanho do lado 01: ");
  scanf("%f", &l01);
 
  printf("Digite o tamanho do lado 02: ");
  scanf("%f", &l02);
 
  printf("Digite o tamanho do lado 03: ");
  scanf("%f", &l03);
 
  if ( ((l01 + l02) > l03) &&
       ((l01 + l03) > l02) &&
       ((l02 + l03) > l01) )
       {
           if ( (l01 == l02) && (l01 == l03) )
           {
               printf("Triangulo Equilatero!");
           }
           else if( (l01 != l02) && (l01 != l03) )
           {
               printf("Triangulo Escaleno!");
           }
           else
           {
               printf("Triangulo Isosceles!");
           }
       }
       else
       {
           printf("Nao e Triangulo!");
       }
 
  return 0;
}
