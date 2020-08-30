{-# LANGUAGE FlexibleInstances #-}

import Text.Printf
import System.IO

soma :: Integer -> Integer -> Integer
soma x y = x + y

main = do
    x <- readLn
    y <- readLn
    let resultado = soma x y :: Integer
    printf "SOMA = %d\n" resultado
