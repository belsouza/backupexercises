def media( notaA, notaB, notaC ):
    return ((notaA * 2.0) + (notaB * 3.0)+ (notaC * 5.0)) / 10.0

notaA = float(input())
notaB = float(input())
notaC = float(input())
med = media(notaA, notaB, notaC)
print "MEDIA = {0:.1f}".format(med)
# print ("MEDIA = {0:.1f}".format(med))