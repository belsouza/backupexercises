let areadocirculo r = 3.14159 * r * r ;;

let raio = read_float();;
let area = (areadocirculo raio);;
Printf.printf "A=%.4f\n" area ;;