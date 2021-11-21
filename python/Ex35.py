numeros = []

for i in range(0, 20, 1):
    x = int(input('Digite os 20 numeros: '))
    numeros.append (x)
y = int(input('\nDigite o fator multiplicativo:'))
for i in range(0, 20, 1):
    numeros[i]=numeros[i]*y 
print('\nOs numeros que você digitou foram:\n')
for i in range(0, 20, 1):
    print(numeros[i])