#*********************************** Python 2 **************************************

def calculabonus( salario, montante):
    return salario + ((montante * 15)/100)

nome = raw_input()
salario = float(input())
montante = float(input())
total = calculabonus(salario, montante)
print "TOTAL = R$ {0:.2f}".format(total)

#*********************************** Python 3 ************************************

def calculabonus( salario, montante):
    return salario + ((montante * 15)/100)

nome = input()
salario = float(input())
montante = float(input())
total = calculabonus(salario, montante)
print ("TOTAL = R$ {0:.2f}".format(total))