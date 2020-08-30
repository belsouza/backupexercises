function produto( x, y )
    return x * y
end

local a, b, prod
a = io.read("*n")
b = io.read("*n")
prod = produto(a, b)
print("PROD = "..prod)