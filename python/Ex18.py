sexo = float(input("Digite F: para sexo feminino, qualquer coisa para sexo Masculino:"))
peso = float(input("Digite o peso em kg: "))
altura = float(input("Digite o altura em m: "))
IMC = peso / altura**2
if(sexo == 1):
    IMC = IMC + 1
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
