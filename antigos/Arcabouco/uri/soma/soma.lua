function soma(a, b)
    return(a + b)
end

local a, b, total
a = io.read("*n")
b = io.read("*n")
total = soma(a, b)
print("SOMA = "..total)
