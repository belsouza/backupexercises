def calculasalario( a, b )
    return (a * b)
end

num = gets.to_i
tempo = gets.to_i
pagportempo = gets.to_f

foo = calculasalario(tempo, pagportempo)
puts "NUMBER = %d" % [num]
puts "SALARY = U$ %.2f" % [foo]