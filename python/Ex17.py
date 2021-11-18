lado1 = float(input("Digite o tamanho do lado1: "))
lado2 = float(input("Digite o tamanho do lado2: "))
lado3 = float(input("Digite o tamanho do lado3: "))
if(lado1 < lado2):
    temp = lado1
    lado1 = lado2
    lado2 = temp
if(lado2 < lado3):
    temp = lado2
    lado2 = lado3
    lado3 = temp
if(lado1 < lado2):
    temp = lado1
    lado1 = lado2
    lado2 = temp
print(f"lado1 : {lado1: .2f}")
print(f"lado2 : {lado2: .2f}")
print(f"lado3 : {lado3: .2f}")
if(lado1**2  == (lado2**2 + lado3**2)):
    print("É triangulo retângulo")
else:
    print("Os lados não formam um triangulo retângulo")