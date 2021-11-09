#include<stdio.h>
int main (int argc, char const *argv[])
{
char sexo;
printf("Digite o sexo:(M)para masculino e (F)para feminino:");
scanf("%s",&sexo);
while (sexo != 'F' && sexo != 'M'){   
printf("Nao identificado. \nDigite apenas F para feminino ou M para masculino:  ");
scanf("%s",&sexo);
}
printf("Obrigado!");
    return 0;  

}