#include<stdio.h>
int main(int argc, char *argv[], int i, int a){
  
int numeros[10];
  printf("Digite os 10 numeros:\n"); 
  for(i=0; i<10; i++)
  {
    scanf("%i", &numeros[i]);
    if (numeros[i]>a)
    {
    	a=numeros[i];
	}
  } 
 	a=0;
  printf("\n\nOs numeros digitados foram:\n");
  for(i=9; i>=0; i--)
  {
      printf("%i \n", numeros[i]);
  }
  printf("\n\nO maior numero e: %i", a);   
  return 0;
}
