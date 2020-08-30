def areadocirculo (raio)
    return 3.14159 * raio * raio
end

raio = gets.to_f
area = areadocirculo(raio)
puts "A=%.4f" % [area]