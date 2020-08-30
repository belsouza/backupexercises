
let calculafoo (x : int) (y : float) : float =
    ( float_of_int x ) *. y;;

let num = read_int();;
let b = read_int();;
let c = read_float();;
let foo = calculafoo b c;;
Printf.printf "NUMBER = %d\nSALARY = U$ %.2f\n" num foo;;