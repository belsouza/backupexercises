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
			printf("\n %d", i);
		}
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
	
	correcao(n, inf, sup);
}
