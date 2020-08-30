
v_user = 0
v_comp = 0

def usertirapecasplural(npecas):
    if npecas == 1:
        print("Você tirou uma peça.")
    else:
        print("Você tirou", npecas ,"peças.")

def restapecasplural(n):
    if n == 1:
        print( "Agora resta apenas uma peça no tabuleiro.\n" )
    else:
        print( "Agora restam ", n ,"peças no tabuleiro.\n" )

def computadortirapecasplural(npecas):
    if npecas == 1:
        print("O computador tirou uma peça.")
    else:
        print("O computador tirou", npecas ,"peças.")



def usuario_escolhe_jogada(n, m):
    x = ''
    while x == '':
        try:
            x = int(input("\nQuantas peças você vai tirar? "))
            while x > m:

                if x <= m and x != 0:
                    break
                else:
                    print("Oops! Jogada inválida! Tente de novo.\n")
                    x = int(input("\nQuantas peças você vai tirar? "))

        except ValueError:
            print("Oops! Jogada inválida! Tente de novo.")
    return x


def computador_escolhe_jogada(n, m):

    i = 0
    melhor = m
    cond = n % (m+1)
    #retorna  0 caso não haja mais peças
    if n == 0:
        return 0
    else:
        # m e o maximo, mas este maximo deve estar de acordo.
        if n > m:
            while i <= m:
                if ( cond == 0 ):
                    melhor = i
                    i = i + 1
        else:
            if n < m:
                return n
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
    npecas = 0
    n = m = ''
    controlcode = 0 #se eh 2, a vez eh do usuario , se eh 5 a vez eh do pc


    while n == '':
        try:
            n =  int( input("Quantas peças? ") )

            while n <= 0:
                if n <= 0:
                    print("Oops! Entrada inválida! Tente de novo.")
                    n =  int( input("Quantas peças? ") )
                else:
                    break
        except ValueError:
            print("Oops! Entrada inválida! Tente de novo.")

    while m == '':
        try:
            m = int( input("Limite de peças por jogada? "))
            while m <= 0:
                if m <= 0:
                    print("Oops! Entrada inválida! Tente de novo.")
                    m =  int( input("Limite de peças por jogada? ") )
                else:
                    break

        except ValueError:
            print("Valor errado. Tente de novo")

# Jogadas subsequentes

    jogada = n % (m+1)
    vencedor = ''

    if jogada == 0 and npecas == 0:
        print("\nVocê começa!")
        npecas = usuario_escolhe_jogada(n,m)
        n = n - npecas
        usertirapecasplural(npecas)
        restapecasplural(n)

        controlcode = 5

    else:
        print("\nComputador começa!")
        npecas = computador_escolhe_jogada(n,m)

        if npecas > 0 and n > 0:
            n = n - npecas
            computadortirapecasplural(npecas)
            restapecasplural(n)

        controlcode = 2

    while (n >= 0) or (controlcode != 0):

            if controlcode == 2:
                npecas = usuario_escolhe_jogada(n,m)
                n = n - npecas
                #
                if n > 0:
                    usertirapecasplural(npecas)
                    restapecasplural(n)
                else:
                    if n == 0:
                        controlcode = 0
                        vencedor = "user"
                        controlcode = 5
                        break

            if controlcode == 5:
                npecas = usuario_escolhe_jogada(n,m)
                n = n - npecas
                #
                if n > 0:
                    usertirapecasplural(npecas)
                    restapecasplural(n)
                else:
                    if n == 0:
                        controlcode = 0
                        vencedor = "computador"
                        controlcode = 2
                        break

    if vencedor == "computador":
        print("Fim do jogo! O computador ganhou!")
        v_comp = v_comp + 1


    if vencedor == "user":
        print("Fim do jogo! Você ganhou!")
        v_user = v_user + 1



def main():

        print("\nBem-vindo ao jogo do NIM! Escolha:\n")

        option = ''
        while option == '':
                try:
                        ss = int( input ("1 - para jogar uma partida isolada\n2 - para jogar um campeonato "))

                        if ss == 1:
                                print("\nVoce escolheu partida isolada!\n")
                                partida()
                                break
                        if ss == 2:
                                print("\nVoce escolheu um campeonato!\n")
                                campeonato()
                                break
                        else:
                                print("\nOpção Inválida! Tente de novo!\n")
                                continue

                except ValueError:
                        print("\nOpção Inválida! Tente de novo!\n")

main()
