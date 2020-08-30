let soma x y = x + y;;

(*
print_endline "Entre com o primeiro valor: ";;
let a = Scanf.scanf "%d" (fun x -> x);;
print_newline ();;

print_string "Entre com o segundo valor: ";;
let b = read_int();;
print_newline ();;


let resultado = soma a b;;
print_int resultado;;
*)

let a = read_int();;
let b = read_int();;
Printf.printf "X = %d\n" (soma a b );;