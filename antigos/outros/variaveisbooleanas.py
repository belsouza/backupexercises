# encode: utf-8

# Variáveis booleanas

decrescente = True
anterior = int(input("Entre com o primeiro valor da sequencia: "))
valor = 1


while valor != 0 and decrescente:
    valor = int(input("Entre com um valor para a sequencia: "))
    if valor > anterior:
        decrescente = False
    anterior = valor

if decrescente == True:
    print("A sequencia está em ordem decrescente :D ")
else:
    print("A sequencia não está em ordem decrescente D: ")

