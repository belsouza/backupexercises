import Text.Printf
import System.IO

diferenca :: Integer -> Integer -> Integer -> Integer -> Integer
diferenca a b c d = ( a * b ) - ( c * d )

main = do
    a <- readLn
    b <- readLn
    c <- readLn
    d <- readLn
    let diff = diferenca a b c d :: Integer 
    printf "DIFERENCA = %d\n" diff