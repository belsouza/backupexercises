package main

import (
	"C"
	"fmt"
)

func bonus(salario float64, montante float64) float64 {
	return (salario + ((montante * 15) / 100))
}

func main() {
	var nome string
	var salario, montante float64

	fmt.Scan(&nome)
	fmt.Scan(&salario)
	fmt.Scan(&montante)
	fmt.Printf("TOTAL = R$ %.2f\n", bonus(salario, montante))
}

/*
func main() {
	var salario, montante float64
	reader := bufio.NewReader(os.Stdin)
	nome, _ := reader.ReadString('\n')
	fmt.Scanf("%f\n", &salario)
	fmt.Scanf("%f\n", &montante)
	fmt.Printf("TOTAL = R$ %.2f", bonus(salario, montante))
}

*/
