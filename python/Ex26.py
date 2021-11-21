num = float(input("Digite um numero positivo: "))

while (num<=0):
    num = float(input("Nao permitido. Digite um numero positivo: "))

print ("A tabuada de", num, "é:")

for i in range (1, 11, 1):

    t= num*i
    print (num,"*", i, "=", t )