print ("A tabuada de 1 a 20 no intervalo de 1 a 10 é:" )
num=0
for n in range (1, 21, 1):
    num=num+1
    input ("Pressione enter!")
    for i in range (1, 11, 1):
        mult=num*i
        print (num, "*", i, "=", mult)