numeros = []
mult= []
for i in range(0, 20, 1):
    x = int(input('Digite um numero: '))
    numeros.append (x)
y = int(input('\nDigite o multiplicador:'))
for i in range(0, 20, 1):
    z= numeros[i]*y 
    mult.append (z)
print('\nOs numeros que você digitou foram:\n')
for i in range(0, 20, 1):
    print(mult[i])