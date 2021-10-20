#include <stdio.h>
 
int main(int argc, char *argv[]){
  
  int numeros[10];
  
  printf("Digite os 10 numeros: ");
  for(int i=0; i<10; i++){
      scanf("%i", &numeros[i]);
  }
  printf("Os numeros digitados foram: ");
  for(int i=9; i>=0; i--){
      printf("%i \n", numeros[i]);
  }
 
  return 0;
}
