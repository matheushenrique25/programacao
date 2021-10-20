#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#include<string.h>
#include<locale.h> 
int main(int argc, char *argv[], int i, int n, int a, int x, int posicao, int conf, char repete)
{
	printf ("Digite o numero de posicoes do vetor: ");
	scanf ("%i", &n);
	while ((n<1) || (n>20))
		{
			printf ("\nInvalido! Insira um numero de posicoes positivo e menor ou igual a 20:\n");
    		scanf ("%i", &n);
		}
  
  	int numeros[n];
  	conf=0;
  	repete='S';	
  printf("\n\nDigite os numeros para preencher as %i posicoes do vetor:\n", n);
  
  for(i=0; i<n; i++)
 	 {
    scanf("%i", &numeros[i]);
	 }
 	
  printf("\n\nOs numeros digitados foram:\n");
  for(i=0; i<n; i++)
  {
      printf("%i; ", numeros[i]);
  }
while (repete=='S') 
{
	printf("\n\nEm qual indice se encontra o numero: ");
	scanf ("%i", &x);
  for(i=0; i<n; i++)
  {
      if (numeros[i]==x)
      {
      	posicao=i;    
      	conf=1;
      	break;      	
	  }
  }
  	if (conf==1)
  	{
  		printf("\n\nO numero %d se encontra na posicao %i do vetor\n", x, posicao);
		repete='N';
	}
	else
	{
		printf("\n\nO numero %d nao se encontra no vetor!", x); 
		printf("\n\nDeseja encontrar um outro valor? (S-Sim) (N-Nao)\n"); 
		scanf ("%s", &repete);
		while (repete!='S' && repete!='N')
		{
			printf ("\nInvalido!\nDigite (S-Sim) (N-Nao): ");
			scanf ("%s", &repete);	
		}
	}  
}

  return 0;
}