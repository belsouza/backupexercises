def adj(n):

    # n = int(input("Digite um número inteiro: "))

    ant = -9999
    condicao = 0

    while (n > 1):
        
        digit = int( n % 10 )
        if (digit == ant):
            condicao = condicao + 1
        ant = digit		
        n = n / 10

    if(condicao > 0):
        return("Sim")
    else:
        return("Não")


def test_coisa():
    assert adj(1010) == "Não"

def test_coisado():
    assert adj(1000) == "Sim"

def test_coisna():
    assert adj(10000150) == "Sim"
