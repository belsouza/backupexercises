i = 0
    melhor = m

    if n % (m+1) == 0:
        while i <= m:
            if (n % (m+1) == 0):
                melhor = i
                i = i + 1

    return melhor