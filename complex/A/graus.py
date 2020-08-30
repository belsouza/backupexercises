def converter(grau, referencia ):
	return (( grau * referencia ) / 360 )


def coordenar( horas, minutos ):	
	a = converter( horas, 12 )
	b = converter( minutos, 60 )
	za = str(a).zfill(2)
    zb = str(b).zfill(2)
    print "%02d" % a


while( True ):

    try:
        line = input()	
        mi = line.split('')
        horas = int(mi[0])
        minutos = int(mi[1])
        coordenar( horas, minutos );
    except EOFError:
        break		


