def timming (n)
    if n > 60
        return timming (n % 60)
    else 
        return (n % 60)
    end
end


n = gets.chomp.to_i
s = timming(n)
m = timming(n / 60)
h = timming(n / 3600)
puts "#{h}:#{m}:#{s}\n"

