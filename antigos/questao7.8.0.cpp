/*
QUESTÃO 08:
Desenvolver uma função que exiba todos os
números primos inferiores a determinado valor
inteiro N.
*/

#include <stdio.h>

void leprimo(int n)
{
	int i,j, cont;
	for(i = 2; i < n; i++)
	{
		cont = 0;
		for(j = 1; j < i; j++)
		{
			if(i%j == 0)
			{
				cont++;
			}
		}
		
		if(cont == 2)
		{
			printf("%d ", i);
		}				
	}
}

int main()
{
	int a;
	printf("\nEntre com o numero: ");
	scanf("%d", &a);
	leprimo(a);
}
