import Text.Printf
import System.IO
import Prelude

calcular :: Int -> Double -> Int -> Double -> Double
calcular npecas1 valor1 npecas2 valor2 = do
    let a1 = fromIntegral npecas1 :: Double

    let b1 = fromIntegral npecas2 :: Double
    (a1 * valor1) + (b1 * valor2)

main = do
    linha <- getLine
    let lista =  words linha
        a = read (lista !! 0) :: Int
        b = read (lista !! 1) :: Int
        c = read (lista !! 2) :: Double
    segundalinha <- getLine
    let segundalista = words segundalinha
        d = read ( segundalista !! 0) :: Int
        e = read ( segundalista !! 1) :: Int
        f = read ( segundalista !! 2) :: Double

    let foo = calcular b c e f
    
    printf "VALOR A PAGAR: R$ %.2f\n" foo

