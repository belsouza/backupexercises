

n = int(input("Digite um número inteiro: "))
i = 1
cont = 0

while n >= i:

    if n % i == 0:
        cont = cont + 1
    i = i + 1

if cont > 2:
    print("não primo")
else:
    print("primo")



