let pi = 3.141592;;
let round x = floor ( x +. 0.5);;


let x = float_of_string (read_line ());;
print_float (round (x /. pi));;
print_newline ();;

