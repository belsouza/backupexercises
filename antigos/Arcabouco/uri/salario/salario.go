package main

import (
	"C"
	"fmt"
)

type Salario struct {
	num, horas int32
	sal        float64
}

func calculasalario(horas int32, sal float64) float64 {
	return (float64(horas) * sal)
}

func main() {
	var foo Salario
	fmt.Scanf("%d\n", &foo.num)
	fmt.Scanf("%d\n", &foo.horas)
	fmt.Scanf("%g\n", &foo.sal)

	fmt.Printf("NUMBER = %d\nSALARY = U$ %.2f\n", foo.num, calculasalario(foo.horas, foo.sal))
}
