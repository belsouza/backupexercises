-- 1017
import Prelude
import Text.Printf
import System.IO

litros :: Double -> Double -> Double
litros v th = (v * th) / 12.0

main :: IO()
main = do
    th <- readLn :: IO Double
    v <- readLn :: IO Double
    printf "%.3f\n" (litros v th)

