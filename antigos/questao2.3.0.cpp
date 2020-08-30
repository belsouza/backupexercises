/*
Lista 2 exercicio 3

*/

#include <stdio.h>

int main(void)
{
	float preco, pv, pp, pcj;
	printf ("Entre com o preco: ");
	scanf ("%f", &preco );
	
	pv = preco * 0.9;
	pp = preco / 5;
	pcj = (preco * 1.2)/10;
	
	printf ("\n\nValor com desconto de 10%% a vista: %.2f; ", pv);
	printf ("\nValor parcelado em 5x sem juros: 5x de %.2f; ", pp);
	printf ("\nValor parcelado em 10x com 20%% de acrecimo: 10x de %.2f; ", pv);
	return 0;
}
