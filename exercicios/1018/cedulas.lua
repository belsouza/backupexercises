local n
n = tonumber( io.read() )
print( string.format("%d nota(s) de R$ 100,00", n / 100) )
n = n % 100
print( string.format("%d nota(s) de R$ 50,00", n / 50) )
n = n % 50
print( string.format("%d nota(s) de R$ 20,00", n / 20) )
n = n % 20
print( string.format("%d nota(s) de R$ 10,00", n / 10) )
n = n % 10
print( string.format("%d nota(s) de R$ 5,00", n / 5) )
n = n % 5
print( string.format("%d nota(s) de R$ 2,00", n / 2) )
n = n % 2
print( string.format("%d nota(s) de R$ 1,00", n ))
