/*
Desenvolver uma função que exiba os múltiplos de N 
compreendidos no intervalo definido por A e B
*/

#include <stdio.h>

void correcao(int n, int a, int b)
{
	int i;
	for(i = a; i <= b; i++)
	{
		if(i % n == 0)
		{
			printf("\n *** %d", i);
		}
	}
}

void interMulti(int n, int inf, int sup)
{
	int i, alf = 1;
	for(i = 1; alf < sup; i++)
	{
		if(alf > inf)
		{
			printf("\n%d", alf);
		}
		alf = n * i;
	}
}

int main(void)
{
	int sup, inf, n;
	
	printf("\nNumero: ");
	scanf("%d", &n);
	
	printf("\nLimite inferior: ");
	scanf("%d", &inf);
	
	printf("\nLimite superior: ");
	scanf("%d", &sup);
	
	interMulti(n, inf, sup);
	
	correcao(n, inf, sup);
}
