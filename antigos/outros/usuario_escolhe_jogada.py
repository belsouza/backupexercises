def usuario_escolhe_jogada(n, m):
        
        x = ''
        while x == '':
            try:
                x = int(input("\nQuantas peças você vai tirar? "))
                
                while x > m:                                    
                    print("Oops! Jogada inválida! Tente de novo.\n")
                    x = int(input("\nQuantas peças você vai tirar? "))
                    if x <= m:
                        break

            except ValueError as err:
                print("Oops! Jogada inválida! Tente de novo.")
        
        return x
        
p = usuario_escolhe_jogada(3, 1)
print("Resultado:", p)

q = usuario_escolhe_jogada(7, 4)
print("Segundo Resultado: ", q)