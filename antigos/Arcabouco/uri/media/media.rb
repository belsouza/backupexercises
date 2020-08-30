def media (notaA, notaB)
    return ((notaA * 3.5) + (notaB * 7.5)) / 11.0
end

notaA = gets.to_f
notaB = gets.to_f
med = media(notaA, notaB)
puts "MEDIA = %.5f" % [med]