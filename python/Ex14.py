valor1 = float(input("Digite o valor1: "))
valor2 = float(input("Digite o valor2: "))
valor3 = float(input("Digite o valor3: "))
if(valor1 > valor2):
    maior = valor1
else:
    maior = valor2

if(maior > valor3):
    print(f"Maior: {maior: .2f}")
else:
    print(f"Maior: {valor3: .2f}")