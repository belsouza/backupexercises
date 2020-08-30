import Text.Printf
import System.IO
import Prelude

meubonus :: Double -> Double -> Double
meubonus salario montante = do
    salario + (( montante * 15) / 100 )

main = do

    a <- getLine :: IO String
    b <- readLn :: IO Double
    c <- readLn :: IO Double
    let x = meubonus b c
    printf "TOTAL = R$ %.2f\n" x