# Exercicios binomial

def fatorial(n):
    fat = 1
    while(n > 1):
        fat = fat * n
        n = n - 1
    return fat

def teste():
    i = 1
    while i < 10:
        print(fatorial(i))
        i = i + 1

def binomial(num, den):
    return fatorial(num) / (fatorial(den) * fatorial(num - den))

teste()
