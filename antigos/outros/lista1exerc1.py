"""
 O custo ao consumidor de um carro novo é a soma do custo de
 fábrica com a porcentagem do distribuidor e dos impostos
(aplicados ao custo de fábrica). Desenvolver um algoritmo que
calcule o custo ao consumidor de determinado carro.
"""


cf = int ( input("Entre com o custo de fabrica:") )

pd = int( input("Entre com a porcentagem do distribuidor:") )

imp = int( input("Entre com os impostos: ") )

custo = cf + ( (cf * pd)/100) + imp

print ("O valor do carro eh: ", round(custo, 2))
