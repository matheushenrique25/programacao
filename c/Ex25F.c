#include<stdio.h>
int main (int argc, char const *argv[])
{
int numero, i, t;
numero = 5;
for (int i=1; i<=10; i++)
 {
    t = numero * i;
    printf("%i x %i = %i\n",numero,i,t);
 }


return 0;
}