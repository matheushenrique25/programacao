a=1
b=1
c=1
print ("A serie de Bergamaschi ate 20 é:")
print ("1")
print ("1")
print ("1")
for i in range (0, 17, 1):
    auxiliar= a+b+c
    a=b
    b=c
    c=auxiliar
    print (auxiliar)