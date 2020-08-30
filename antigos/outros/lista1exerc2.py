# Elabore um algoritmo que, dada a idade de um
# nadador, classifique-o em uma das seguintes
# categorias:
# Categoria -  Faixa de idade
# infantil A : 0 - 4 anos
# infantil B : 5 - 7 anos
# infantil C : 8-10 anos
# juvenil A : 11-13 anos
# juvenil B : 14-17 anos
# Adulto : 18 anos ou mais

idade = int(input("Entre com a idade: "))

if idade < 4:
    print("Infantil A")
elif idade < 7:
    print("Infantil B")
elif idade < 10:
    print("Infantil C")
elif idade < 13:
    print("Juvenil A")
elif idade < 17:
    print("Juvenil B")
else:
    print("Adulto")

