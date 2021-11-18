n1 = float(input("Digite o primeiro numero: "))
n2 = float(input("Digite o segundo numero: "))
if(n1==n2):
    print(f"Os dois numeros tem o mesmo valor:{n1: .2f}")
else:
    if(n1 > n2):
        print(f"maior valor é:{n1: .2f}")
    else:
        print(f"maior valor é:{n2: .2f}")