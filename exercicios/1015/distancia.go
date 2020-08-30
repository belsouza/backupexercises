package main

import (
	"fmt"
	"math"
)

func distancia(xp1 float64, yp1 float64, xp2 float64, yp2 float64) float64 {
	var cog float64 = math.Pow((xp2-xp1), 2) + math.Pow((yp2-yp1), 2)
	return (math.Sqrt(cog))
}

func main() {
	var xp1, yp1, xp2, yp2, res float64
	fmt.Scanf("%f  %f\n", &xp1, &yp1)
	fmt.Scanf("%f  %f\n", &xp2, &yp2)
	res = distancia(xp1, yp1, xp2, yp2)
	fmt.Printf("%.4f\n", res)
}
