/*
Lista 4 exercicio 3

Fazer um programa que exiba todos os divisores de um número fornecido pelo usuário.
*/

#include <stdio.h>

int main(void)
{
	int i, n;
	printf ("Entre com um numero para conhecer os seus divisores: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		if((n%i) == 0)
		{
			printf("%d,", i);
		}
	}
	
	return 0;
}
