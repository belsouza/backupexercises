package main

import (
	"C"
	"fmt"
)

func soma(a int32, b int32) int32 {
	return a + b
}

func main() {
	var a, b int32
	fmt.Scanf("%d\n", &a)

	fmt.Scanf("%d\n", &b)
	fmt.Printf("SOMA = %d\n", soma(a, b))
}
