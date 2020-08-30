package main

import (
	"C"
	"fmt"
)

func areaCalc(raio float64) float64 {
	var pi float64 = 3.14159
	return (pi * raio * raio)
}

func main1002() {
	var raio, area float64
	fmt.Scanf("%g", &raio)
	area = areaCalc(raio)
	fmt.Printf("A=%.4f\n", area)
}

func main() {
	main1002()
}
