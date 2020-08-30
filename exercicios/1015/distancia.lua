function distancia( xp1, yp1, xp2, yp2 )
    dist = math.pow((xp2 - xp1), 2) + math.pow((yp2 - yp1), 2)
    return math.sqrt(dist)
end

xp1, yp1 = io.read("*n", "*n")
xp2, yp2 = io.read("*n", "*n")
dist = distancia(xp1, yp1, xp2, yp2)
strdist = string.format('%.4f', dist)
io.write(strdist,'\n')