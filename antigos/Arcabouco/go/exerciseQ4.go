package main

import (
	"C"
	"bufio"
	"fmt"
	"os"
)

func helloChange() {
	s := "Hello"           // string
	c := []rune(s)         // converte para runa
	c[0] = 'c'             // muda o char individual
	s2 := string(c)        // muda para string novamente
	fmt.Printf("%s\n", s2) // exibe
}

func infiniteinpoot() {
	counts := make(map[string]int)
	input := bufio.NewScanner(os.Stdin)
	for input.Scan() {
		counts[input.Text()]++
	}
	// NOTE: ignoring potential errors from input.Err()
	for line, n := range counts {
		if n > 1 {
			fmt.Printf("%d\t%s\n", n, line)
		}
	}
}

type Person struct {
	name string
	age int
}
func Set(i interface{}) {
	switch i.(type) {
	case *Person:
	r := reflect.ValueOf(i)
	r.Elem(0).Field(0).SetString("
	Albert Einstein")
	}
}


	

func main() {
	
}
