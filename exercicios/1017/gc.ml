let th = read_float();;
let v = read_float();;
let litros = fun  x  y -> (x *. y) /. 12.0;;
let ql = litros th v;;
Printf.printf "%.3f\n" ql;;