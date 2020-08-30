function timming( n )
    if n > 60 then return timming( n % 60) else return (n % 60) end
end


local n, s, m, h
n = tonumber( io.read() )
s = timming(n)
m = timming(n/60)
h = timming(n/3600)
print( string.format("%d:%d:%d",h,m,s) )
