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
	for(i = n; i > 0; i++)
	{
		if(i%2==0)
		{
			printf("%d, ", i);
		}	
	}
	return 0;
}
