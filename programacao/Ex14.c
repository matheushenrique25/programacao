#include <stdio.h>
 
int main(int argc, char *argv[]){
  float n1, n2, n3;
  
  printf("Digite o valor do primeiro numero: ");
   scanf("%f", &n1);
  printf("Digite o valor do segundo numero: ");
   scanf("%f", &n2);
  printf("Digite o valor do terceiro numero: ");
   scanf("%f", &n3);
  if (n1 > n2)
  {
    if(n1>n3)
    {
      printf("o numero maioir e %.2f", n1);
    }
   else
   {
      printf("o numero maioir e %.2f", n3);
   }
  } 
    else
   {
      if(n2>n3) 
    {
      printf("o numero maioir e %.2f", n2);
     }
     else
     {
      printf("o numero maioir e %.2f", n3);
     }
   }
    
  return 0;
}
