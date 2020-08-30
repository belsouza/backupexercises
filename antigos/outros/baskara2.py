# encode: utf-8

import math

def thebaskara( a, b, c):

    delta = b ** 2 - (4 * a * c)

    if delta == 0:
        xpos = ( - b + math.sqrt(delta) ) / (2 * a)
        print("Delta = 0, Raízes iguais. O resultado é: ", xpos)

    else:
        if delta < 0:
            print("A equação não tem raízes reais.")
        else:
            xpos = ( - b + math.sqrt(delta) ) / (2 * a)
            xpospos = ( - b - math.sqrt(delta) ) / (2 * a)
            print("Raizes: ", xpos, "e", xpospos )
    

print("Entre com o valor de a: ")
a = input()

print("Entre com o valor de b: ")
b = input()

print("Entre com o valor de c: ")
c = input()

thebaskara(float(a), float(b), float(c))

#py.test baskara2.py