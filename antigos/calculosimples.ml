let example_fixed_len = "11 22 33";;
let parse ex = 
    Scanf.sscanf ex "%d  %d  %f" (fun a b c -> [a],[b],[c]);;
    
let m = parse example_fixed_len;;



(*

 let parse ex = Scanf.sscanf ex "%2s%3s%2s%2s%2s%4s%1s%1s%1s" (fun a b c d e f g h i -> (a,b,c,d,e,f,g,h,i));;
let scan_int () = Scanf.scanf " %d" (fun x -> x);;
let x = scan_int();;

let kks () = Scanf.bscanf Scanf.Scanning.stdin " %d" (fun x -> x);;
let i = kks();;

let_ = Printf.printf "Hello %d %d\n" i x;;

let line1 = Printf.sprintf "%s" docs_num in
let lines = List.map (fun i -> Printf.sprintf "%s\n" i) list_output in
line1 ^ String.concat "" lines


let hard_parse ex = (
(String.sub ex 0 2),
(String.sub ex 2 3),
(String.sub ex 5 2),
(String.sub ex 7 2),
(String.sub ex 9 2),
(String.sub ex 11 4),
(String.sub ex 15 1),
(String.sub ex 16 1),
(String.sub ex 17 1) );;
hard_parse example_fixed_len;;
*)

