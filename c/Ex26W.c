#include<stdio.h>
int main (int argc, char const *argv[])
{
int num,t,i;
printf("Digite um numero positivo: ");
scanf("%i",&num);
while(num<=0 || 11<=num){
    printf("Nao permitido. Digite um numero positivo:\n ");
    scanf("%i",&num);
}
i = 1;
while(i<=10){
    t = num*i;
    printf("%i x %i = %i\n",num,i, t);
    i = i+1;
}
return 0;
}