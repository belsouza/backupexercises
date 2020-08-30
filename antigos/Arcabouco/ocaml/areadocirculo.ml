(*
int         31-bit signed int (roughly +/- 1 billion) on 32-bit
            processors, or 63-bit signed int on 64-bit processors
float       IEEE double-precision floating point, equivalent to C's double
bool        A boolean, written either true or false
char        An 8-bit character
string      A string
unit        Written as ()
*)

let media a b = 
  (a +. b) /. 2.0 ;; (* O ponto e para operações em float . Ocaml não tem double.. é o float  *)

Printf.printf("Entre com o primeiro numero: ")
let num1 =  read_float();;

print_string("Entre com o segundo numero: ")
let num2 = read_float();;

let resultado = media num1 num2 ;;

print_string ("A=") ;;
print_float resultado ;;


