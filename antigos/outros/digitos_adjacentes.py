
n = int(input("Digite um número inteiro: "))

ant = -9999
condicao = 0

while (n > 1):
    digit = int( n % 10 )
    print( digit, ant )
    if (digit == ant):
        condicao = condicao + 1
    ant = digit		
    n = n / 10

if(condicao > 0):
    print("Sim")
else:
    print("Não")
