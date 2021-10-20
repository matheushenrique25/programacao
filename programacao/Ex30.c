#include<stdio.h>
int main()
{
    int a, b, auxiliar, i, n;
    a = 0;
    b = 1;
	getch ();
    printf("\nA serie de Fibonacci ate 30 e:\n\n");
    printf("%d\n", b);
    for(i = 0; i < 29; i++)
    {
        auxiliar = a + b;
        a = b;
        b = auxiliar;
        printf("%d\n", auxiliar);
    }
	return (0);
}