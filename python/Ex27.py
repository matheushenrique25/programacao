x = float(input("Digite um numero positivo para que seja feita a tabuada: "))

while (x<=0):
    x = float(input("Invalido! Digite um número positivo: "))

print ("Digite o primeiro intervalo da tabuada:")

a = int(input("Valor 1: "))

b = int(input("Valor 2: "))

while (a>b):
    print ("Invalido! O Valor 2 deve ser maior que o valor 1! Digite novamente:")

    a = int(input("Valor 1: "))
    b = int(input("Valor 2: "))
print ("A tabuada de", x, "no intervalo de", b, "a", a, "é:" )

for i in range (b, a-1, -1):

    tabuada= x*i
    print (x,"*", i, "=", tabuada )