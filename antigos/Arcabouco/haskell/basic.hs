import Text.Printf

main = do
    a <- readLn
    b <- readLn
    let x = a + b :: Int
    printf "X = %d\n" x