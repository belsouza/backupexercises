import Text.Printf
import System.IO

pesoA = 2.0
pesoB = 3.0
pesoC = 5.0

medianum :: Double -> Double -> Double -> Double
medianum  notaA  notaB  notaC = ((notaA * pesoA) + (notaB * pesoB) + (notaC * pesoC)) / (pesoA + pesoB + pesoC);

main = do
    notaA <- readLn
    notaB <- readLn
    notaC <- readLn
    let media = medianum notaA notaB notaC :: Double
    printf "MEDIA = %.1f\n" media