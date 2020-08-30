import Prelude
import Text.Printf

distanciadp::Double -> Double -> Double -> Double -> Double
distanciadp xp1 yp1 xp2 yp2 = do
    let dp1 = ((xp2 - xp1) ** 2 ) + ((yp2 - yp1) ** 2)
    sqrt dp1

main::IO()
main = do
    line1 <- getLine
    let linha1 = words line1
        xp1 = read (linha1 !! 0) :: Double
        yp1 = read (linha1 !! 1) :: Double
    line2 <- getLine
    let linha2 = words line2
        xp2 = read (linha2 !! 0) :: Double
        yp2 = read (linha2 !! 1) :: Double

    let res = distanciadp xp1 yp1 xp2 yp2
    printf "%.4f\n" res

