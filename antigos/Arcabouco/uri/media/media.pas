program foo(Input, Output);

uses
    SysUtils;

function media( notaA: Double; notaB: Double) : Double;
var
    pesoA : Double;
    pesoB : Double;

begin
    pesoA := 3.5;
    pesoB := 7.5;
    media := ((notaA * pesoA) + (notaB * pesoB)) / (pesoA + pesoB);
end;

var 
    notaA : Double;
    notaB : Double;
    fullmedia : Double;    

begin
    readLn(notaA);
    readLn(notaB);
    fullmedia := media(notaA, notaB);    
    writeLn('MEDIA = ', Format('%.5f', [fullmedia]) );
end.
