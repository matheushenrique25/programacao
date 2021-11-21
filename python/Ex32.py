n = int(input("Digite um numero positivo menor que 100: "))
while (n<0 or n>100):
    n = int(input("Invalido! insira um numero positivo menor que 100: "))    
num=2
soma=3
for i in range (1, n, 1):
    print (num)
    num=num+soma
    soma=soma+2