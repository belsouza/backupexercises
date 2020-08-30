/*
Lista 2 exercicio 4
*/

#include <stdio.h>

int main(void)
{
	float per, ql, pl;
	printf ("\nEntre com a distancia percorrida: ");
	scanf ("%f", &per); 
	
	printf ("\nEntre com a distancia percorrida com apenas um litro: (km/l) ");
	scanf ("%f", &ql);
	
	printf ("\nEntre com o preco do litro: ");
	scanf ("%f", &pl);
	
	printf ("\n\nQuantidade de combustivel consumido: %.2f; ",per / ql );
	printf ("\nCusto total de combustivel: %.2f", per * pl);
	return 0;
}
