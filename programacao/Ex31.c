#include<stdio.h>
int main()
{
    int a, b,c, auxiliar, i, n;
    a = 1;
    b = 1;
    c = 1;	
	getch ();
    printf("\nA serie de Bergamaschi ate 20 e:\n\n");
    printf("%d\n%d\n%d\n", a,b,c);
    for(i = 0; i < 17; i++) 
    {
        auxiliar = a + b + c;
        a = b;
        b = c;
        c = auxiliar;
        printf("%d\n", auxiliar);
    }
	return (0);
}