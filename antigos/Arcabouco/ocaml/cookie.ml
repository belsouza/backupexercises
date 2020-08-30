(*
# input_line ;;
# input ;;
# output ;;
# read_line ;;
# read_int ;;
# read_float ;;
# print_string ;;
# print_newline ;;
# print_endline ;;
*)

let readme = "liseez-moi";;
print_string readme;;

print_string "\n";;

let moo = 5;;
print_int moo;;
print_string "\n";;

(* Comentarios *)
let floatman = 3.6999;;
print_float floatman;;
print_string "\n";;

let f x y = x + y;;
let foo = f 15 45;;
print_int foo;;
print_string "\n";;

let jooojoo =
  let x = 2 + 9 in
  let y = x + 9 in
  y + 10;;

print_int jooojoo;;
print_string "\n";;

let yogurte = function(a, b, c) -> a * b * c;;
let morango = yogurte(66, 98, 100);;
print_int morango;;
print_string "\n";;

let rec fact n =
  if n <= 1 
    then 1
  else
    n * fact (n - 1);;

let mangoo = fact 4;;
print_int mangoo;;
print_string "\n";;

let um  = 9;;
let dois () = um + 3;;
let tres n = print_int(n + (dois ()));;

let o = dois ();;
print_int o;;

tres 6;;
print_string "\n";;

(*  Mudando variaveis  *)

let opp = ref 3;;
opp := 65536;; (* O valor de opp foi mudado para 65536 *)
!opp;; (* Sintaxe para se obter o valor de opp*)
opp := !opp + 1;;
print_int !opp;;
print_string "\n";;


