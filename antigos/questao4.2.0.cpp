/*
Lista 4 exercicio 2

Desenvolver um programa que calcule a soma dos números de 1 a N, sendo N um número inteiro fornecido pelo usuário.

*/

#include <stdio.h>

int main(void)
{
	int i, n;
	int soma = 0;
	
	printf("Entre com o limite da soma: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		//printf("Soma (%d) = Soma (%d) + (%d)\n",soma, soma, i );
		soma = soma + i;
	}
	
	printf("A soma eh: %d", soma);
	return 0;
}
