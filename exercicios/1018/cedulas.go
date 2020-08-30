//1017

package main

import (
	"C"
	"fmt"
)

func main() {
	var n int32
	fmt.Scanf("%d\n", &n)

	fmt.Printf("%d nota(s) de R$ 100,00\n", n/100)
	n = n % 100
	fmt.Printf("%d nota(s) de R$ 50,00\n", n/50)
	n = n % 50
	fmt.Printf("%d nota(s) de R$ 20,00\n", n/20)
	n = n % 20
	fmt.Printf("%d nota(s) de R$ 10,00\n", n/10)
	n = n % 10
	fmt.Printf("%d nota(s) de R$ 5,00\n", n/5)
	n = n % 5
	fmt.Printf("%d nota(s) de R$ 2,00\n", n/2)
	n = n % 2
	fmt.Printf("%d nota(s) de R$ 1,00\n", n)
}
