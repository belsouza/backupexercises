let temp = read_int();;
let n = ref temp;;
Printf.printf "%d nota(s) de R$ 100,00\n" ((!n) / 100);;
n := !n mod 100;;
Printf.printf "%d nota(s) de R$ 50,00\n" ((!n) / 50);;
n := !n mod 50;;
Printf.printf "%d nota(s) de R$ 20,00\n" ((!n) / 20);;
n := !n mod 20;;
Printf.printf "%d nota(s) de R$ 10,00\n" ((!n) / 10);; 
n := !n mod 10;;
Printf.printf "%d nota(s) de R$ 5,00\n" ((!n) / 5);;
n := !n mod 5;;
Printf.printf "%d nota(s) de R$ 2,00\n" ((!n) / 2);;
n := !n mod 2;;
Printf.printf "%d nota(s) de R$ 1,00\n" (!n);;

