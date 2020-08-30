function media( notaA , notaB )
    return (((notaA * 3.5) + (notaB * 7.5)) / 11.0 )
end

local notaA, notaB, res
notaA = io.read("*n")
notaB = io.read("*n")
res = string.format("%.5f", media( notaA, notaB ))
print("MEDIA = "..res)
