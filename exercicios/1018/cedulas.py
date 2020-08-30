""" 
n = int (input())
print ('{0} nota(s) de R$ 100,00' . format( n / 100))
n = n % 100
print ('{0} nota(s) de R$ 50,00' . format( n / 50))
n = n % 50
print ('{0} nota(s) de R$ 20,00' . format( n / 20))
n = n % 20
print ('{0} nota(s) de R$ 10,00' . format( n / 10))
n = n % 10
print ('{0} nota(s) de R$ 5,00' . format( n / 5))
n = n % 5
print ('{0} nota(s) de R$ 2,00' . format( n / 2))
n = n % 2
print ('{0} nota(s) de R$ 1,00' . format( n ))

"""

import math

n = int (input())
print ('{0} nota(s) de R$ 100,00' . format( math.floor( n / 100) ))
n = n % 100
print ('{0} nota(s) de R$ 50,00' . format( math.floor( n / 50) ))
n = n % 50
print ('{0} nota(s) de R$ 20,00' . format( math.floor( n / 20) ))
n = n % 20
print ('{0} nota(s) de R$ 10,00' . format( math.floor( n / 10) ))
n = n % 10
print ('{0} nota(s) de R$ 5,00' . format( math.floor( n / 5) ))
n = n % 5
print ('{0} nota(s) de R$ 2,00' . format( math.floor( n / 2) ))
n = n % 2
print ('{0} nota(s) de R$ 1,00' . format( math.floor( n ) ))