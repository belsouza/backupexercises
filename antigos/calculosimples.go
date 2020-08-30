package main

import (
	"C"
	"fmt"
)

func calcular(p2 int, p3 float32, b2 int, b3 float32) float32 {

	return ((float32(p2) * p3) + (float32(b2) * b3))
}

func main() {
	var p1, p2, b1, b2 int
	var p3, b3, resultado float32
	fmt.Scanf("%d  %d  %f\n", &p1, &p2, &p3)
	fmt.Scanf("%d  %d  %f\n", &b1, &b2, &b3)
	resultado = calcular(p2, p3, b2, b3)
	fmt.Printf("VALOR A PAGAR: R$ %.2f\n", resultado)
}
