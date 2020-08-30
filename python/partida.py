    global v_user = 0
    global v_comp = 0
    
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
                npecas = int(input("nQuantas peças você vai tirar?"))
                #teste para ver se o numero digitado esta de acordo
                if n > npecas:
                    n = n - npecas
                    print("Você tirou", npecas ,"peças.\nAgora restam ", n ,"peças no tabuleiro.\n")
                    vezpc = True
                    vezuser = False
                else:
                    while n <= npecas:
                        if npecas > n:
                            print("Jogada não válida.O mázimo de peças que podem ser retiradas eh", m,"\nTente de novo!")
                            npecas = int(input("Entre com o valor: "))
                            if npecas < m:
                                print("Numero nao valido")
                            else:
                                break
                        else:
                            n = n - npecas
                            break

                    print("Você tirou", npecas ,"peças")
                    if npecas == 0:
                        print("Fim de Jogo!")
                        v_user = v_user + 1
                        partida_vencedor = "Usuário"
                        vezpc = True
                        vezuser = False
                        end = True
                        break
                    else:
                        vezpc = True
                        vezuser = False


            if vezpc == True:

                        npecas = m
                        if n > npecas:
                            n = n - npecas
                            print("O computador tirou", npecas ,"peças.\nAgora restam ", n ,"peças no tabuleiro.\n")
                            vezpc = False
                            vezuser = True
                        else:
                            if n <= npecas:
                                n = npecas
                                print("O computador tirou", n ,"peças.\nAcabou!.\n")
                                v_comp = v_comp + 1
                                partida_vencedor = "Computador"
                                end = True
                        break