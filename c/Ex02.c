#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int l, area;
     printf("Digite o lado do quadrado: ");
  scanf("%i", &l);
   area = l * l;
    printf("A area do quadrado de lado %i igual a %i", l, area);
 
  return 0;
}