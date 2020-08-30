n = gets.chomp.to_i
kep = [100, 50, 20, 10, 5, 2, 1]
kep.each{ |x|
    puts "#{n / x} nota(s) de R$ #{x},00\n"
    n = n % x
}





=begin
def placeitpls ( n , x = 1 )
    if x > 0 
        puts "#{n / x} nota(s) de R$ #{x},00\n"
        return n % x  
    end
end

n = gets.chomp.to_i
n = placeitpls(n, 100)
n = placeitpls(n, 50)
n = placeitpls(n, 20)
n = placeitpls(n, 10)
n = placeitpls(n, 5)
n = placeitpls(n, 2)
n = placeitpls(n, 1)
=end





