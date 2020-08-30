def maximo( x, y, z ):

    maior = -99999

    if x >= y and x >= z:
        maior = x
    else:

        if y >= x and y >= z:
            maior = y

        else:
            if z >= y and z >= x:
                maior = z

    return maior

# print( maximo(7, 7, 7) )

# print( maximo(4, 12, 5) )

# print( maximo(12, 0, 565) )

# print( maximo(1, -99, -87) )
