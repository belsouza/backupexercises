
import math

def distanciadp( xp1, yp1, xp2, yp2 ):
    base = pow((xp2 - xp1) ,2) + pow((yp2 - yp1), 2)
    return (math.sqrt( base ))

xp1, yp1 = (raw_input()).split(" ", 2)
xp2, yp2 = (raw_input()).split(" ", 2)
res = distanciadp (float(xp1), float(yp1), float(xp2), float( yp2))
print "%.4f" % res 

"""
import math

def distanciadp( xp1, yp1, xp2, yp2 ):
    base = pow((xp2 - xp1) ,2) + pow((yp2 - yp1), 2)
    return (math.sqrt( base ))

xp1, yp1 = (input()).split(" ", 2)
xp2, yp2 = (input()).split(" ", 2)
res = distanciadp (float(xp1), float(yp1), float(xp2), float( yp2))
print("%.4f" % res)

"""