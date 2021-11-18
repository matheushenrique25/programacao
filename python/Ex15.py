peso = float(input("Digite o peso: "))
altura = float(input("Digite o altura: "))
IMC = peso / altura**2
if(IMC < 20):
    print("Pessoa esta abaixo do peso")
else:
    if(IMC < 25):
        print("Pessoa tem peso normal")
    else:
        if(IMC < 30):
            print("Pessoa esta acima do peso")
        else:
            print("Pessoa esta Obesa")
