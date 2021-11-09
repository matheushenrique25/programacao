#include <stdio.h>
 
int main(int argc, char *argv[]){
  float n1, n2;
  
  printf("Digite o valor do primeiro numero: ");
  scanf("%f", &n1);
 
  printf("Digite o valor do segundo numero: ");
  scanf("%f", &n2);
 
  if (n1 < n2)
  {
      printf("o numero menor e %.2f", n1);
  }
  else
  {
      printf("o numero menor e %.2f", n2);
  }
    
  return 0;
}
