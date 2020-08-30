#correcao nim

def tirapecasplural(n):
    if n == 1:
        print("Você tirou uma peça.")
    else:
        print("Você tirou", npecas ,"peças.")

def restapecasplural(n):
    if n == 1:
        print( "Agora resta uma peça no tabuleiro." )
    else:
        print( "Agora restam ", n ,"peças no tabuleiro." )

while n > 0:

                if vezusuario == True and n > 0:

                        npecas = usuario_escolhe_jogada(n,m)
                        n = n - npecas

                        if n >= 0: #as peças não podem ser negativas
                                print("Você tirou", npecas ,"peças.")
                                
                        
                                if npecas == 0:
                                        vezusuario = True
                                else:
                                        vezusuario = False                        
                        
                if vezusuario == False and n > 0:

                        npecas = computador_escolhe_jogada(n,m)
                        n = n - npecas

                        if n >= 0:
                                print("O computador tirou", npecas ,"peças.")
                                print( "Agora restam ", n ,"peças no tabuleiro." ) 
                                                        
                                if npecas == 0:
                                        vezusuario == False
                                else:
                                        vezusuario = True

if vezusuario == True:
                print("Fim do jogo! O computador ganhou!")
                v_comp = v_comp + 1
                
        else:
                print("Fim do jogo! Você ganhou!")
                v_user = v_user + 1