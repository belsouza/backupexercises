import math

a = int( input("a: "))
b = int( input("b: "))
c = int( input("c: "))

delta = b ** 2 - (4 * a * c)

if delta == 0:
    x = (- b + math.sqrt(delta)) / (2 * a)
    print("a raiz desta equação é", x)
else:
    if delta > 0:

        x = (- b + math.sqrt(delta)) / (2 * a)
        y = (- b - math.sqrt(delta)) / (2 * a)

        if x < y:
            print("as raízes da equação são",x,"e",y)
        else:
            print("as raízes da equação são",y,"e",x)
        
    else:
        print("esta equação não possui raízes reais")