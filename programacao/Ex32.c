#include<stdio.h>
int main()
{
	int n,i,num,soma;
	printf ("Digite um numero positivo menor que 100: ");
	scanf ("%i", &n);
	while ((n<0) || (n>100))
	{
		printf ("Invalido! Insira um numero positivo menor que 100:");
    	scanf ("%i", &n);
	}	
	num=2;
	soma=3;
	for (i=1; i<=n; i++)
	{
		printf ("%i\n",num);		
		num=num+soma;
		soma=soma+2;
	}	
return 0;
}
