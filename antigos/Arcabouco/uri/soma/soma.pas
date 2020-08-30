program foo(Input, Output);

function soma( a, b : Integer) : Integer;
begin
    soma := a + b;
end;

var 
    a, b, tot: Integer;

begin
    readln(a);
    readln(b);
    tot := soma(a, b);
    writeln('SOMA = ', tot);
end.