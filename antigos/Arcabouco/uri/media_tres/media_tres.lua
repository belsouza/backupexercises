
pesoA = 2.0
pesoB = 3.0
pesoC = 5.0

function media( notaA , notaB, notaC )
    return ((notaA * pesoA) + (notaB * pesoB) + (notaC * pesoC)) / (pesoA + pesoB + pesoC);
end

local notaA, notaB, notaC,  res
notaA = io.read("*n")
notaB = io.read("*n")
notaC = io.read("*n")
res = string.format("%.1f", media( notaA, notaB, notaC ))
print("MEDIA = "..res)
