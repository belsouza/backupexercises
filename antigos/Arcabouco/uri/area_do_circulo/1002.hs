
{- 
add :: Integer -> Integer -> Integer   --function declaration 
add x y =  x + y                       --function definition 

main = do 
    putStrLn "The addition of the two numbers is:"  
    print(add 2 5)    --calling a function 

-}

{-
import Text.Printf

calcularea :: Double -> Double
calcularea a = 3.1419 ** a ** a

main = do
    input1 <- getLine
    let x = (read input1 :: Double)
    let a = calcularea x
    printf "%.4f\n" a
-}

import Text.Printf
import System.IO

calcularea :: Double -> Double
calcularea a = 3.14159 * a * a

main = do
    x <- readLn    
    let a = calcularea x :: Double
    printf "A=%.4f\n" a