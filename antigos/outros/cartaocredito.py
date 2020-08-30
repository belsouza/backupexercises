# encode: utf-8

cartao = int(input("Número do cartão: "))

cartaolido = 1

# variavel de passagem
cartaonalista = False

while cartaolido != 0 and not cartaonalista:
    cartaolido = int(input("Digite o numero do proximo cartão: "))
    if cartaolido == cartao:
        cartaonalista = True
    
if cartaonalista:
    print("Boa! Cartão na lista")
else:
    print("Deu ruim")

