#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#include<string.h>
#include<locale.h>
int main(int argc, char *argv[], int **numeros, int i, int j, int n, int m, int a, int x, int linha, int coluna, int conf, char repete)
{
	printf ("Digite o numero de linhas: ");
	scanf ("%i", &n);
	
	while ((n<1) || (n>10))
		{
			printf ("\nInvalido! Insira um numero de posicoes positivo e menor ou igual a 10:\n");
    		scanf ("%i", &n);
		}	
	
	printf ("Digite o numero de colunas: ");
	scanf ("%i", &m);
	
	while ((m<1) || (m>10))
		{
			printf ("\nInvalido! Insira um numero de posicoes positivo e menor ou igual a 10:\n");
    		scanf ("%i", &m);
		}
		
	numeros = (int**)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
	{
      numeros[i] = (int*)malloc(m*sizeof(int));
	}
	
  	conf=0;
  	repete='S';
  printf("\n\nDigite os numeros para preencher a matriz de %i x %i:\n", n, m);
  
  for(i=0; i<n; i++)
 	 {
 	 	for(j=0; j<m; j++)
 	 	{
    		scanf("%i", &numeros[i][j]); 	 		
		}
	 }
  printf("Os numeros digitados na matriz foram: \n");
  for(i=0; i<n; i++)
  {
        for(j=0; j<m; j++)
		{
        	printf("%i ", numeros[i][j]);
      	}
      printf("\n");
  }

while (repete=='S') 
{
	printf("\n\nEm qual posicao se encontra o numero: ");
	scanf ("%i", &x);
    for(i=0; i<n; i++)
 	 {
 	 	for(j=0; j<m; j++)
 	 	{
      		if (numeros[i][j]==x)
      		{
      			
      			linha=i+1;   
      			coluna=j+1;
      			conf=1;
      			break;      	
	  		}
     	}
 	 }
  	if (conf==1)
  	{
  		printf("\n\nO numero %d se encontra na linha %i e coluna %i\n", x, linha, coluna);
		repete='N';
	}
	else
	{
		printf("\n\nO numero %d nao se encontra na matriz!", x); 
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