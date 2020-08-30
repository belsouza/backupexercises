let media x y = 
  ((x *. 3.5) +. (y *. 7.5)) /. 11.0 ;;

let notaA = read_float() ;;
let notaB = read_float() ;;
let media_num = media notaA notaB ;;
Printf.printf "MEDIA = %.5f\n"  media_num;;