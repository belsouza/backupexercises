program dp;
Uses sysutils;
var
    th, v, ql: double;

begin
    readLn(th);
    readLn(v);
    ql := (th * v) / 12.0;
    writeln (Format('%.3f', [ql]));
end.