n = 0
m = 0
comp = False
winner = ""

def usuario_escolhe_jogada(n, m):

    #segundo if ve se o valor é inteiro maior que 0

    while True:

        try:
            x = input("\nQuantas peças você vai tirar? ")
            x = int(x)
            if x <= m:
                if x <= 0:
                    print("Oops! Jogada inválida!\nTem que tirar pelo menos",m,"peças.\nTente de novo.\n")  #valor nulo
                else:
                    return x
            else:
                print("Oops! Jogada inválida!\n Você só pode tirar no máximo",m,"peças.\nTente de novo.\n") #valor acima do esperado

        except ValueError:
            print("Oops! Jogada inválida! Tente de novo.\n") #campo com texto



def computador_escolhe_jogada(n, m):

    npecas = 0

    if(n >= m):
        print("O computador tirou",m,"peças")
        npecas = m
    else:
        if(n < m):
            print("O computador tirou",n,"peças")
            npecas = n

    return npecas


def partida():

    global n
    global m
    global comp
    global winner

    comp = False
    n = input("Quantas peças? ")
    m = input("Limite de peças por jogada? ")
    n = int(n)
    m = int(m)

    if n % (m + 1) == 0:
        comp = False
        print("Você Começa!")
    else:
        comp = True
        print("O computador começa!")

    while n > 0:

        if comp == True: #se eh a vez do computador:
            npc = computador_escolhe_jogada(n,m) # o computador tirara as maiores pecas
            n = n - npc  #atualiza o valor de n
            comp = False #atualiza o jogador
            if n == 0: # ai vê se o numero de peças é igual a 0
                winner = "computador" # se for, a variável vencedor fica com o valor "comptador"
                break # E para o loop

        if comp == False: #se eh a vez do usuario:
            nu = usuario_escolhe_jogada(n,m)  # o usuario tirara as pecas
            n = n - nu #atualiza o valor de n
            comp = True #atualiza o jogador
            if n == 0: # ai vê se o numero de peças é igual a 0
                winner = "usuario" # se for, a variável vencedor fica com o valor "comptador"
                break # E para o loop

partida()


def campeonato():

    print("**** Rodada 1 ****")
    partida()

    print("**** Rodada 2 ****")
    partida()

    print("**** Rodada 3 ****")
    partida()

