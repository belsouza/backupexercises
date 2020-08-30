def media (notaA, notaB, notaC)
    return ((notaA * 2.0) + (notaB * 3.0) + (notaC * 5.0)) / 10.0
end

notaA = gets.to_f
notaB = gets.to_f
notaC = gets.to_f
med = media(notaA, notaB, notaC)
puts "MEDIA = %.1f" % [med]