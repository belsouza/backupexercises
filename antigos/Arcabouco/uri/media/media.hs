import Text.Printf
import System.IO

pesoA = 3.5
pesoB = 7.5

medianum :: Double -> Double -> Double
medianum  notaA  notaB = ((notaA * pesoA) + (notaB * pesoB))/(pesoA + pesoB)

main = do
    notaA <- readLn
    notaB <- readLn
    let media = medianum notaA notaB :: Double
    printf "MEDIA = %.5f\n" media