import math

def delta(a, b, c):
    return b ** 2 - (4 * a * c) 

def main():
    a = int(input("Entre com o valor de a: "))
    b = int(input("Entre com o valor de b: "))
    c = int(input("Entre com o valor de c: "))
    imprime_raizes(a, b, c)

def imprime_raizes(a, b, c):

    d = delta(a, b, c)

    if d == 0:
        raiz = - b + math.sqrt(d) / (2 * a) 
        print("As duas raizes são iguais e valem",raiz)
    else:
        if d < 0:
            print("Essa equação não possui raízes reais.")
        else:
            raiz1 = (- b + math.sqrt(d)) / (2 * a) 
            raiz2 = (- b - math.sqrt(d)) / (2 * a) 
            print("A primeira raiz vale",raiz1)
            print("A segunda raiz vale",raiz2)