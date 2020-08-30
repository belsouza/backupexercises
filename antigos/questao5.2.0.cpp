/*
Lista 5 exercicio 2
QUESTÃO 02: Pede-se o desenvolvimento de um programa que leia n valores e determine o maior e o menor elementos do conjunto fornecido.

*/

#include <stdio.h>

int main(void)
{
	int i, n, num, maior = 0, menor = 0;
	
	printf("Entre com o numero de valores: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		fflush(stdin);
		printf("Entre com o %do numero: ", i);
		scanf("%d", &num);
		
		if(maior > 0 || menor < 0)
		{
			if(num > maior)
			{
				maior = num;
			}
			
			if(num < menor)
			{
				menor = num;
			}
		}
		else
		{
			maior = num;
			menor = num;
		}
	}
	
	printf("O maior numero informado eh: %d \n", maior);
	printf("O menor numero informado eh: %d \n", menor);
	return 0;
}
