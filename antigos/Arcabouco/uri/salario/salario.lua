function foo( a, b )
    return a * b
end

local num, horas, valorhora, resultado
num = io.read("*n")
horas = io.read("*n")
valorhora = io.read("*n")
resultado = string.format("%.2f", foo(horas, valorhora))
print("NUMBER = "..num)
print("SALARY = U$ "..resultado)