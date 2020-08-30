n = m = '' 
while n == '':
    try: 
        n =  int( input("Quantas peças? ") )        
    except ValueError as err:
        print("Valor errado. Tente de novo")
        
while m == '':
    try:
        m = int( input("Limite de peças por jogada? "))
    except ValueError as err:
        print("Valor errado. Tente de novo")

jogada = n % (m+1)
npecas = 0
vezusuario = True

if jogada == 0 and npecas == 0:
    print("\nVocê começa\n")
    npecas = usuario_escolhe_jogada(n,m)
    n = n - npecas
    print("Você tirou", npecas ,"peça.")
    print( "Agora restam ", n ,"peças no tabuleiro." )
    vezusuario = False
else:
    print("\nComputador começa\n")
    npecas = computador_escolhe_jogada(n,m)
    n = n - npecas
    print("O computador tirou", npecas ,"peças.")
    print( "Agora restam ", n ,"peças no tabuleiro." )
    vezusuario = True

while n >= 0:

    if vezusuario == True:
        npecas = usuario_escolhe_jogada(n,m)
        n = n - npecas
        print("Você tirou", npecas ,"peça.")
        print( "Agora restam ", n ,"peças no tabuleiro." )
        vezusuario = False
                
    if vezusuario == False:
        npecas = computador_escolhe_jogada(n,m)
        n = n - npecas
        print("O computador tirou", npecas ,"peças.")
        print( "Agora restam ", n ,"peças no tabuleiro." )
        vezusuario = True
                
        if n == 0:
            break

        if vezusuario == True:
                print("Fim do jogo! O computador ganhou!")
        else:
                print("Fim do jogo! Você ganhou!")