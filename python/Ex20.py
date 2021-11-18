a = float(input("Digite a primeira nota: "))
b = float(input("Digite a segunda nota: "))
media = (a+(2*b))/3
print(f"o valor da media e: {media:.2f} ")
if(media >= 5):
    print(f"aluno aprovado")
else:
    print(f"aluno reprovado")