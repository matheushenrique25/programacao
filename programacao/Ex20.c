#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a, b, media;
     printf("Digite a primeira nota: ");
  scanf("%f", &a);
   printf("Digite a segunda nota: ");
  scanf("%f", &b);
   media = (a+(2*b))/3;
    printf("A media de %.1f e %.1f e igual a: %.2f\n", a, b, media);
    if (media>=5)
  {
      printf("aluno aprovado");
  }
   else
  {
      printf("aluno reprovado");
  }
  return 0;
}