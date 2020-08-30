import Text.Printf
import System.IO
import Prelude

fafoo :: Integer -> Double -> Double
fafoo a b = do
        let x = fromInteger a :: Double
        let y = b :: Double
        x * y

main = do
    a <- readLn :: IO Integer
    
    b <- readLn :: IO Integer
    c <- readLn :: IO Double

    let foo = fafoo b c :: Double
    printf "NUMBER = %d\n" a
    printf "SALARY = U$ %.2f\n" foo