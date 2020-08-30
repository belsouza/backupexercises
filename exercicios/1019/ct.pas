program ct (input, output);
Uses sysutils;

function timming (n: LongInt): LongInt;
begin
    if(n > 60) then  
        timming := timming (n mod 60)
    else
        timming := (n mod 60)  
end;
var
    n, s, m, h: LongInt;

begin
    readLn(n);
    s := timming(n);
    m := timming (n div 60);
    h := timming (n div 3600) ; 
    writeln (h,':',m,':',s );   
end.