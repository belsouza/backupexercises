def media( notaA, notaB ):
    return ((notaA * 3.5) + (notaB * 7.5)) / 11.0

notaA = float(input())
notaB = float(input())
med = media(notaA, notaB)
print "MEDIA = {0:.5f}".format(med)
# print ("MEDIA = {0:.5f}".format(med))