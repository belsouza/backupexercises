/*
Lista 5 exercicio 3
QUESTÃO 03: Implementar um programa que calcule o valor de baseexpoente, onde base e expoente são números inteiros dados pelo usuário.
*/

#include <stdio.h>

int main(void)
{
	int i, j, base, expoente;
	int total = 1;
	
	printf("Entre com a base: ");
	scanf("%d", &base);
	
	printf("Entre com o expoente: ");
	scanf("%d", &expoente);
	
	for(i = 0; i < expoente; i++)
	{
		total = total * base;
	}
	
	
	printf("\n%d ^ %d = %d", base, expoente, total);
}
