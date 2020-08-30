# encoding: utf-8

print("Entre com uma sequencia que termine com 0: ")
soma = 0
produto = 1
num = 1

while (num != 0):
    num = int(input("Entre com um numero: "))
    if num != 0:
        produto = produto * num
    soma = soma + num    

print("A soma dos numeros eh: ", soma)
print("O produto dos numeros eh: ", produto)
