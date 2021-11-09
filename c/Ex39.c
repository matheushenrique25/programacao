#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#include<string.h>
#include<locale.h>
int main(int argc, char *argv[])
{
  int numeros[3][4]; int i; int j; int mult;
  printf("Digite os numeros para matriz 3 x 4 \n");
  for(i=0; i<3; i++)
  {
      for(j=0; j<4; j++){
        scanf("%i", &numeros[i][j]);
      }
  }
  	printf("\n\nDigite o fator multiplicativo:");
	scanf("%i", &mult);
 
  printf("Os numeros digitados na matriz foram: \n");
  for(i=0; i<3; i++){
      for(j=0; j<4; j++){
      	numeros[i] [j]= numeros [i] [j]*mult;
        printf("%i ", numeros[i][j]);
      }
      printf("\n");
  }
 
  return 0;
}