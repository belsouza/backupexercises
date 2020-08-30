/*
Lista 4 exercicio 1
Dado um número inteiro N, fazer um programa que exiba os números pares iguais ou inferiores a N.

*/

#include <stdio.h>

int main(void)
{
	int i, n;
	printf("Entre com o valor limite de n:");
	scanf("%d", &n);
	for(i = 0; i <= n; i+=2)
	{
		printf("%d, ", i);
	}
	return 0;
}
