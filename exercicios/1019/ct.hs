import Text.Printf

fool :: Integer -> Integer
fool x
    | x > 60 = fool (x `mod` 60)
    | otherwise = x `mod` 60


main = do
    x <- getLine
    let n = read x :: Integer 
    let s = fool n 
    let m = fool (n `div` 60)
    let h = fool (n `div` 3600)
    printf "%d:%d:%d\n" h m s