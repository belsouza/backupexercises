program produto(Input, Output);

function produto( a , b : Integer) : Integer;
begin
    produto := a * b;
end;

var 
    a, b : Integer;

begin

    readLn(a);
    readLn(b);
    writeln('PROD = ', produto(a, b));

end.