#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, area;
     printf("Digite a base: ");
  scanf("%i", &a);
   printf("Digite a altura: ");
  scanf("%i", &b);
   area = a * b;
    printf("A area de %i e %i e igual a: %i\n", a, b, area);
    if (area>100)
  {
      printf("terreno grande");
  }
  
  return 0;
}