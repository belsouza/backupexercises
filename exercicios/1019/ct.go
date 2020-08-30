//1017

package main

import (
	"C"
	"fmt"
)

func retime(n int32) int32 {
	if n > 60 {
		return retime(n % 60)
	} else {
		return (n % 60)
	}
}

func main() {
	var n, s, m, h int32
	fmt.Scanf("%d\n", &n)

	s = retime(n)
	m = retime(n / 60)
	h = retime(n / 3600)

	fmt.Printf("%d:%d:%d\n", h, m, s)
	n = n % 100

}
