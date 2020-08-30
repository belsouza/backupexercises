# encode: utf-8

def pot( base, expoente ):
    prod = 1
    i = 0
    while i < expoente:
        prod *= base        
        i += 1
    
    return prod


base = int(input("Entre com o valor da base: "))
expoente = int(input("Entre com o valor do expoente: "))
resultado = pot(base,expoente)
print(resultado)


