program bonus(Input,Output);

uses
    SysUtils;

function calculasalario( var salario: Double; var montante: Double) : Double;
var 
    poo : Double;

begin
    poo := (montante * 15.0) / 100.0;
    calculasalario := salario + poo;
end;

Var 
    nome : String;
    salario, montante, total: Double;

begin
    readLn(nome);
    readLn(salario);
    readLn(montante);
    total := calculasalario( salario, montante );
    writeln('TOTAL = R$ ', Format('%2f',[total]));

end.