import Text.Printf

main = do
    x <- getLine
    let n = read x :: Integer
    printf "%d nota(s) de R$ 100,00\n" (n `div` 100)
    n <- return( n `mod` 100)
    printf "%d nota(s) de R$ 50,00\n" (n `div` 50)
    n <- return( n `mod` 50)
    printf "%d nota(s) de R$ 20,00\n" (n `div` 20)
    n <- return( n `mod` 20)
    printf "%d nota(s) de R$ 10,00\n" (n `div` 10)
    n <- return( n `mod` 10)
    printf "%d nota(s) de R$ 5,00\n" (n `div` 5)
    n <- return( n `mod` 5)
    printf "%d nota(s) de R$ 2,00\n" (n `div`2)
    n <- return( n `mod` 2)
    printf "%d nota(s) de R$ 1,00\n" (n)


{-
main = do
    temp <- getLine
    let n = read temp :: Integer
    let g1 = n `mod` 100
    printf "%d notas de 100\n" (n `div` 100)
    let g2 = g1 `mod` 50
    printf "%d notas de 50\n" (g1 `div` 50)
    let g3 = g2 `mod` 20
    printf "%d notas de 20\n" (g2 `div` 20)
    let g4 = g3 `mod` 10
    printf "%d notas de 10\n" (g3 `div` 10)
    let g5 = g4 `mod` 5
    printf "%d notas de 5\n" (g4 `div` 5)
    let g6 = g5 `mod` 2
    printf "%d notas de 2\n" (g5 `div` 2)

    printf "%d notas de 1\n"  (g6)  
    -}
    