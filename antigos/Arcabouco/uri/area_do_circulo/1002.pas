program foo (Input, Output);
{foo}

function areadocirculo( var raio: Double ) : Double;
begin
    areadocirculo := 3.14159 * raio * raio;
end;

var 
    raio: Double;
    area: Double;

begin
    readLn (raio);
    area := areadocirculo( raio );
    writeln ('A=', area : 0 : 4);
end.