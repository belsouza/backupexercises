
let meusalario salario montante = 
    salario +. ((montante *. 15.0) /.100.0);;

let nome = read_line();;    
let salario = float_of_string ( read_line() );;
let montante = float_of_string( read_line() );;

let resultado = meusalario salario montante;;
Printf.printf "TOTAL = R$ %.2f\n" ( resultado ) ;;

