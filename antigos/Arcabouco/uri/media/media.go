package main

import(
	"C"
	"fmt"
)

var peso1 float64 = 3.5
var peso2 float64 = 7.5

func media( nota1 float64, nota2 float64 ) float64 {
	return ( (nota1 * peso1) + (nota2 * peso2)   ) / 11.0
}

func main(){
	var nota1, nota2 float64
	fmt.Scanf("%f\n", &nota1)
	fmt.Scanf("%f\n", &nota2)
	fmt.Printf("MEDIA = %.5f\n",  media(nota1, nota2))
}