def total_caracteres(x, y, z):
    return len(x) + len(y) + len(z)

x = "dfsdfsdfds"
y = "nannanananananannan"
z = "sdf"

print( total_caracteres(x,y,z) )

def leitura():
    x = -1
    while x <= 0:
        x = int(input("Entre com um valor: "))
    return x

leitura()



def multiplica (a, b):
    return a * b

print(multiplica(4,5))

def troca(x, y):
    aux = x
    x = y
    y = aux

x = 10
y = 20
troca (x,y)
print("x =", x,"e y =",y)
