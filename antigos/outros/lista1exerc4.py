# -*- coding: utf-8 -*-
"""
Created on Wed Jul 24 12:48:25 2019

@author: Izabel Santos
"""

x = int(input("Entre com a quantia: "))

a = int( x/100 ) #notas de 100
x = x % 100
print(a, " notas de 100\n")

b = int( x/50 ) #notas de 50
x = x % 50
print(b, " notas de 50\n")

c = int( x/20 ) #notas de 20
x = x % 20
print(c, " notas de 20\n")

d = int( x/10 ) #notas de 10
x = x%10
print(d, " notas de 10\n")

e = int( x/5 ) # notas de 5
x = x%5
print(e, " notas de 5\n")

f = int( x/2 ) #notas de 2
x = x%2
print(f, " notas de 2\n")

print(x, " moedas de 1\n")
