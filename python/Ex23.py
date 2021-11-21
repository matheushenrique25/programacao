a= float(input("Digite o primeiro número: "))
b = float(input("Digite um número maior que o primeiro: "))

while (a>=b):
    b = float(input("Invalido! Digite um número maior que o primeiro: "))

print ("Correto!" ,b , "é maior que", a)