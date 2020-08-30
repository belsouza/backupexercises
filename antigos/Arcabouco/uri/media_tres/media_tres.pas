program foo(Input, Output);

uses
    SysUtils;

function media( notaA: Double; notaB: Double; notaC: Double) : Double;
var
    pesoA : Double;
    pesoB : Double;
    pesoC : Double;

begin
    pesoA := 2.0;
    pesoB := 3.0;
    pesoC := 5.0;
    media := ((notaA * pesoA) + (notaB * pesoB) + (notaC * pesoC)) / (pesoA + pesoB + pesoC);
end;

var 
    notaA : Double;
    notaB : Double;
    notaC : Double;
    fullmedia : Double;    

begin
    readLn(notaA);
    readLn(notaB);
    readLn(notaC);
    fullmedia := media(notaA, notaB, notaC);    
    writeLn('MEDIA = ', Format('%.1f', [fullmedia]) );
end.
