let dpow a b = (a -. b) ** 2.0;;

let distanciadp xp1 yp1 xp2 yp2 = sqrt ((dpow xp2 xp1) +. (dpow yp2 yp1));;
    

let (xp1, yp1) = Scanf.scanf "%f  %f\n" (fun a b ->(a, b));;
let (xp2, yp2) = Scanf.scanf "%f  %f\n" (fun c d ->(c, d));;

let res = distanciadp xp1 yp1 xp2 yp2;;
Printf.printf "%.4f\n" res;;
  