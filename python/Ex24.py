sexo = (input("Digite o sexo: F feminino ou M masculino: "))

while (sexo!=("F") and sexo!=("M")):
    sexo = (input("Invalido! Digite o sexo: F feminino ou M masculino: "))

if (sexo==("M")):
    print ("Você selecionou o sexo Masculino!")

else:
    print ("Você selecionou o sexo Feminino!")