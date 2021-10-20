#include <stdio.h>
#include <stdlib.h>  

int main(int argc, char *argv[])
{
  float peso, altura, imc;
  char sexo;

   printf("Digite o sexo(M ou F): " );
  scanf("%s",&sexo);
  printf("Digite o seu peso em Kg: ");
  scanf("%f", &peso);
  printf("Digite a sua altura em M: ");
  scanf("%f", &altura);
  imc = peso / (altura*altura);
 if(sexo ==  'F' )
 {
    if(imc<19)
    {
      printf("Abaixo do peso" );
    }  
    else if(imc>=19 && imc <24)
     {
      printf("Peso ideal" );
    }
    else
    {
      printf("Acima do peso" );
    }  
    printf("\n seu imc e %.2f", imc);
 }

 else if(sexo ==  'M' )
  {
    if(imc<20)
    {
      printf("Abaixo do peso" );
    }  
    else if(imc>=20 && imc <25) 
    {
      printf("Peso ideal" );
    }
    else
    {
      printf("Acima do peso" );
    }  
    printf("\n seu imc e %.2f", imc);
  }

      
  return 0;
}