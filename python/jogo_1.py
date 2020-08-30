v_user = 0
v_comp = 0

def usuario_escolhe_jogada(n, m):

    x = int(input("\nQuantas peças você vai tirar? "))
    return x

def computador_escolhe_jogada(n, m):

    i = 0
    melhor = m
    cond = n % (m+1)
    #retorna  0 caso não haja mais peças
    if n == 0:
        melhor = 0 #para
    else:
        # m e o maximo, mas este maximo deve estar de acordo.
        if n > m:
            while i <= m:
                if ( cond == 0 ):
                    melhor = i
                i = i + 1
        else:
            if n < m:
                melhor = n

    return melhor



def campeonato():
    global v_comp
    global v_user

    print("\n**** Rodada 1 ****\n")
    partida()
    print("\n**** Rodada 2 ****\n")
    partida()
    print("\n**** Rodada 3 ****\n")
    partida()

    print("\n**** Final do campeonato! ****\n")
    print("Placar: Você",v_user, "X", v_comp," Computador" )




def partida():
    global v_user
    global v_comp
    partida_vencedor = ""

    n =  int( input("Quantas peças? ") )
    m =  int( input("Limite de peças por jogada? ") )
    jogada = n % (m+1)
    end = False
    vezpc = ""
    vezuser = ""

    if jogada == 0:
        print("Você começa!")
        vezuser = True
    else:
        print("O computador começa!")
        vezpc = True

    while n > 0 or end != False:
        if vezuser == True:

        if vezpc == True:

    print("Fim do jogo! O ",partida_vencedor,"ganhou!")





def main():

        print("\nBem-vindo ao jogo do NIM! Escolha:\n")
        ss = int( input ("1 - para jogar uma partida isolada\n2 - para jogar um campeonato "))

        if ss == 1:
            print("\nVoce escolheu partida isolada!\n")
            partida()

        if ss == 2:
            print("\nVoce escolheu um campeonato!\n")
            campeonato()

main()