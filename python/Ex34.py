numeros = []
c=0
m=0
for i in range(0, 10, 1):
    x = int(input('Digite um numero: '))
    numeros.append (x)
print('\nOs numeros que você digitou foram:\n') 

for i in range(0, 10, 1):
    print(numeros[i])
    c=numeros[i]
    if (c>m):
        m=c
print ("\n O maior número do vetor é o:", m)