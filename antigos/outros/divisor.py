n = int( input("Entre com o numero: "))
j = 1
ncont = 0

# conta o numero de algarismos.
while j <= n:
    ncont += 1
    j*=10

print(ncont)

i = 1
while i <= j:
    
    p = n * 10 / j 
    q = n * 10 // j

    
    if p - q == 0:
        print(p-q)
    else:
        print(p,q)
    i*=10



