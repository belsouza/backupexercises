# -*- coding: utf-8 -*-
"""
Created on Wed Jul 24 15:52:09 2019

@author: Izabel Santos
"""

import datetime

#dia = int( input("Entre com o dia: " ))
mes = int( input("Entre com o mes: " ))
tempo = datetime.datetime.now()
anocorrente = tempo.year

contames = 0

for i in range(mes+1):
    if ( i % 2 == 1 and i < 8 ) or ( i % 2 == 0 and ( i >= 8 and i <= 12) ):
        for j in range(32):
            contames = i+j
        
    elif i == 2 and (anocorrente % 400==0 or anocorrente %4 ==0 and anocorrente % 100 != 0 ):
        print('Ano bissexto')    
        


        
    
    
