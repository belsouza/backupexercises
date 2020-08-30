program dist(input, output);

uses 
    Sysutils,
    Math;

function diferenca ( xp1:real; yp1:real; xp2:real; yp2:real):real;
var
    p1, p2: real;

begin
    p1 := Power((xp2 - xp1), 2);
    p2 := Power((yp2 - yp1), 2); 
    diferenca := sqrt( p1 + p2 );
end;

var
    xp1, yp1, xp2, yp2, resultado: real;

begin
    readLn(xp1, yp1);
    readLn(xp2, yp2);
    resultado := diferenca(xp1, yp1, xp2, yp2);
    writeln(Format('%.4f',[resultado])) ;
end.

