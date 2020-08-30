/*

Lista 1 exercicio 1

*/

#include <stdio.h>

int main(void)
{
	float cf, pd, imp;
	printf("\nEntre com o valor do custo de fabrica: ");
	scanf ("%f", &cf);
	printf("\nEntre com a porcentagem do distribuidor:  ");
	scanf ("%f", &pd);
	printf ("\nEntre com o valor dos impostos: ");
	scanf("%f", &imp);
	printf("O custo ao consumidor: %.2f", cf + (cf * pd/100) + imp  );
	return 0;
}
