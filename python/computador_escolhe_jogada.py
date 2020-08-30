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



npecas = computador_escolhe_jogada(3,1)
print (npecas)