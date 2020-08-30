package main

import (
	"C"
	"fmt"
)

var peso1 float64 = 2.0
var peso2 float64 = 3.0
var peso3 float64 = 5.0

func media(nota1 float64, nota2 float64, nota3 float64) float64 {
	return ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3)
}

func main() {
	var nota1, nota2, nota3 float64
	fmt.Scanf("%f\n", &nota1)
	fmt.Scanf("%f\n", &nota2)
	fmt.Scanf("%f\n", &nota3)
	fmt.Printf("MEDIA = %.1f\n", media(nota1, nota2, nota3))
}
