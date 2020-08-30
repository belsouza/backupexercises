program foo(Input,Output);

uses
    SysUtils;

function foo(var x: Integer; var y: Double) : Double;
begin
    foo := x * y;
end;

var 
    num, horas : Integer;
    valorhora, resultado : Double;

begin
    readLn(num);
    readLn(horas);
    readLn(valorhora);
    resultado := foo(horas, valorhora);
    writeln ('NUMBER = ',num);
    writeln ('SALARY = U$ ',Format('%.2f',[resultado]));
end.