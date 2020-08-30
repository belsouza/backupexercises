x = int(input("Primeiro número: "))
y = int(input("Segundo número: "))
z = int(input("Terceiro número: "))

if x < y and y < z:
    print("crescente")
else:
    print("não está em ordem crescente")