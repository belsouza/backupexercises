program tefoo;

var
    a, b: integer;

function soma(x, y: integer):integer;
begin
    soma := x + y;
end;

begin
    readln(a);
    readln(b);
    Writeln('X = ', soma(a, b));
end.

// Compilar : fpc tefoo.pas
// Executar: tefoo