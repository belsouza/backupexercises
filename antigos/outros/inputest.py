
print("\nBem-vindo ao jogo do NIM! Escolha:\n")

option = ''
while option == '':
    try:
        ss = int( input ("1 - para jogar uma partida isolada\n2 - para jogar um campeonato "))
        
        if ss == 1:
            print("Voce escolheu partida isolada!")
            break
        if ss == 2:
            print("Voce escolheu um campeonato!")
            break
        else:
            print("Opção Inválida! Tente de novo!")
            continue            
        
    except ValueError:
        print("Opção Inválida! Tente de novo!") 

