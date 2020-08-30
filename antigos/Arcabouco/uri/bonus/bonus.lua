local salario, montante

function meusalario( salario, montante )
    return (salario + ((montante * 15)/100))
end

nome = io.read()
salario = io.read("*n")
montante = io.read("*n")

resultado = string.format("%.2f", meusalario(salario, montante))
print ("TOTAL = R$ "..resultado)