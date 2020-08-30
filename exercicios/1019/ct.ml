let rec timming n =
  if n > 60 then timming (n mod 60)
  else n mod 60;;

let n = read_int();;
let s = timming n;;
let m = timming (n / 60);;
let h = timming (n / 3600);;
Printf.printf "%d:%d:%d\n" h m s;;