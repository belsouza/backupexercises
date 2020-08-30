def ehprimo( n ):
    i = 1
    cont = 0
    while i <= n:

        if(n % i == 0):
            cont = cont + 1
        i = i + 1

    if cont > 2:
        return 1
    else:
        return 0



def maior_primo( n ):
    
    primo = ehprimo(n)

    while primo != 0:
        if primo == 1:
            n = n - 1
            primo = ehprimo(n)
        

    return (n)