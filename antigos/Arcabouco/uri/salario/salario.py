def calculasalario( a, b ):
    return (a * b)

num = int(input())
tempo = int(input())
pagportempo = float(input())

foo = calculasalario(tempo, pagportempo)
print "NUMBER =",num
print "SALARY = U$ {0:.2f}".format(foo)

"""
def calculasalario( a, b ):
    return (a * b)

num = int(input())
tempo = int(input())
pagportempo = float(input())

foo = calculasalario(tempo, pagportempo)
print ("NUMBER =",num)
print ("SALARY = U$ {0:.2f}".format(foo))

"""