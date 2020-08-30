let areadocirculo x =
  3.14159 *. x *. x;;

let raio = read_float();;
let area = areadocirculo raio;;
Printf.printf "A=%.4f\n" area ;;