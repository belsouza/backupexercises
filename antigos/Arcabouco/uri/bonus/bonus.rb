def calculabonus( salario, montante)
    return salario + ((montante * 15) / 100)
end

nome = gets.chomp
salario = gets.to_f
montante = gets.to_f
res = calculabonus(salario, montante)
puts "TOTAL = R$ %.2f" % [res]
