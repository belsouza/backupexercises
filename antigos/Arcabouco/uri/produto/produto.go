package main

import (
	"C"
	"fmt"
)

func produto(a int32, b int32) int32 {
	return (a * b)
}

func main() {
	var a, b int32
	fmt.Scanf("%d\n", &a)
	fmt.Scanf("%d\n", &b)
	fmt.Printf("PROD = %d\n", produto(a, b))
}
