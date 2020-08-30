local ql, v, th
th = tonumber( io.read() )
v = tonumber( io.read() )
ql = (th * v) / 12.0
print( string.format("%.3f", ql) )