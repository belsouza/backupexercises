import Text.Printf
import System.IO

produto :: Integer -> Integer -> Integer
produto a b = a * b

main = do
    x <- readLn
    y <- readLn
    let prod = produto x y :: Integer
    printf "PROD = %d\n" prod