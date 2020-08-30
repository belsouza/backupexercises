-- 1016
import Prelude
import Text.Printf
import System.IO

add :: Integer -> Integer
add x = x * 2

main :: IO()
main = do
    x <- readLn :: IO Integer    
    printf "%d minutos\n" (add x)

