let media x y z= 
  ((x *. 2.0) +. (y *. 3.0) +. (z *. 5.0)) /. (10.0) ;;

let notaA = read_float() ;;
let notaB = read_float() ;;
let notaC = read_float() ;;
let media_num = media notaA notaB notaC;;
Printf.printf "MEDIA = %.1f\n"  media_num;;