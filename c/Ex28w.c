#include<stdio.h>
int main (int argc, char const *argv[]){
 int num, i, r;
 char j;
 num = 1;
 i = 1;
 while(num<=20){
     while(i<=10){
     r = num*i;
     printf("%i x %i = %i\n",num,i, r);
     i = i+1;
    }
 num = num + 1;   
 i = 1;
 printf("\nprecione qualquer tecla para continuar tabuadas...\n");
 getch();
   }
 return 0;
 }