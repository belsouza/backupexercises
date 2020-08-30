function areadocirculo( raio )
    return 3.14159 * raio * raio
end

local raio, area
raio = io.read("*n")
area = string.format( "%.4f", areadocirculo( raio ) )
print("A="..area)
