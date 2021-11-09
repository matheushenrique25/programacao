#include <stdio.h>
int main(int argc, char *argv[])
{
  float peso, altura, imc;
  
  printf("Digite o seu peso em Kg: ");
  scanf("%f", &peso);
  printf("Digite a sua altura em M: ");
  scanf("%f", &altura);
  imc = peso / (altura*altura);
  if (imc < 20)
  {
      printf("Abaixo do peso!");
  }
  else if(imc < 25)
  {
      printf("Peso ideal");
  }
  else
  {
      printf("Acima do peso!");
  }
 
  return 0;
}