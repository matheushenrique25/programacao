a = float(input("Digite o valor da aceleração(m/s2): "))
vi = float(input("Digite a velocidade inicial(m/s): "))
t = float(input("Digite o tempo de percurso(s): "))
vf = vi + a * t
if(vf <= 40):
    print("Veiculo muito lento")
else:
    if(vf <= 60):
        print("Veiculo em velocidade permitida")
    else:
        if(vf <= 80):
            print("Veiculo em velocidade de cruzeiro")
        else:
            if(vf <= 120):
                print("Veiculo rápido")
            else:
                print("Veiculo muito rápido")
