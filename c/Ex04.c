#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a, b, c, d, media;
     printf("Digite a primeira nota: ");
  scanf("%f", &a);
   printf("Digite a segunda nota: ");
  scanf("%f", &b);
   printf("Digite a terceira nota: ");
  scanf("%f", &c);
   printf("Digite a quarta nota: ");
  scanf("%f", &d);
   media =( a + b + c + d)/4; 
    printf("A media da primeira nota %.1f somado com a segunda nota %.1f somado com a terceira nota %.1f e somado com a quarta nota %.1f e igual a :%.2f", a, b, c , d , media);
 
  return 0;
}