//1017

package main

import (
	"C"
	"fmt"
)

func main() {
	var ql, v, th float32
	fmt.Scanf("%f\n", &th)
	fmt.Scanf("%f\n", &v)
	ql = (th * v) / 12.0
	fmt.Printf("%.3f\n", ql)
}
