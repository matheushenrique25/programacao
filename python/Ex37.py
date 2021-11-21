numeros = []
repete= 'S'
n = int(input('Digite o numero de posições do vetor (1 a 20): '))
while (n<0 or n>20):
    n = int(input('\nInvalido! Digite o numero de posições do vetor (1 a 20): '))
for i in range(0, n, 1):
        x = int(input('Digite um numero: '))
        numeros.append (x)
print('\nOs numeros que você digitou foram:\n')
for i in range(0, n, 1):
    print(numeros[i])
while (repete=='S'):
    busca = int(input('\nDigite o numero que deseja localizar no vetor: '))
    conf=0
    for i in range(0, n, 1):
        numeros[i]
        if (numeros[i]== busca):
            indice=i
            conf=1
            break
    if (conf==1):
        print ("\nO número que você busca está no índice: ", indice)
        break 
    repete= input('\nNúmero não encontrado! Deseja repetir a busca? (S-Sim) (N-Não): ')
    while (repete!='N' and repete!='S'):
        repete= input('\nResposta invalida! Deseja repetir a busca? (S-Sim) (N-Não): ')