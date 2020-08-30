def distanciadp( xp1, yp1, xp2, yp2 )
    base = ((xp2 - xp1) ** 2) + ((yp2 - yp1) ** 2)
    return (Math.sqrt( base ))
end

xp1, yp1 = (gets.chomp).split(" ")
xp2, yp2 = (gets.chomp).split(" ")
dist = distanciadp( xp1.to_f, yp1.to_f, xp2.to_f, yp2.to_f )
puts "%.4f" % [dist]

