#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#include<string.h>
#include<locale.h> 
int main(int argc, char *argv[], int i, int mult, int a)
{
  	int numeros[20];
	int numeros2[20];
  printf("Digite os 20 numeros:\n");
  
  for(i=0; i<20; i++)
 	 {
    scanf("%i", &numeros[i]);
	 }
  printf("\n\nOs numeros digitados foram:\n");
  for(i=0; i<20; i++)
  {
      printf("%i; ", numeros[i]);
  }
  
  	printf("\n\nDigite o fator multiplicativo:");
	scanf("%i", &mult);
	
  for(i=0; i<20; i++)
 	 {
    	numeros2[i]=numeros[i]*mult ;
	 }
	 
	printf("\n\nO vetor multiplicado e:\n\n");	 
  	for(i=0; i<20; i++)	 
		{
     		printf("%i; ", numeros2[i]);
  		}
 
  return 0;
}