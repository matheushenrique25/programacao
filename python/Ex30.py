a=0
b=1
print ("A série de Fibonacci ate 30 é")
print ("1")
for i in range (0, 29, 1):
    auxiliar= a+b
    a=b
    b=auxiliar
    print (auxiliar)