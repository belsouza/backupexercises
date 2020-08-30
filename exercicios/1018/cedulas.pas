program dp;
Uses sysutils;
var
    n: integer;

begin
    readLn(n);    
    Writeln (Format('%d nota(s) de R$ 100,00', [n div 100]));
    n := n mod 100;
    Writeln (Format('%d nota(s) de R$ 50,00', [n div 50]));
    n := n mod 50;
    Writeln (Format('%d nota(s) de R$ 20,00', [n div 20]));
    n := n mod 20;
    Writeln (Format('%d nota(s) de R$ 10,00', [n div 10]));
    n := n mod 10;
    Writeln (Format('%d nota(s) de R$ 5,00', [n div 5]));
    n := n mod 5;
    Writeln (Format('%d nota(s) de R$ 2,00', [n div 2]));
    n := n mod 2;
    Writeln (Format('%d nota(s) de R$ 1,00', [n]));
    
end.