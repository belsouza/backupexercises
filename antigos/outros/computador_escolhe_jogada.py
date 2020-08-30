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

u = computador_escolhe_jogada(3, 2)
print(u)