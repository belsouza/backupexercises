/*
Lista 4 exercicio 7
QUESTÃO 07:
Desenvolver um programa no qual o usuário entre com vários números inteiros e positivos e imprima o produto dos números ímpares e a soma dos números pares
*/

#include <stdio.h>

int main(void)
{
	int i, n, cont, soma = 0, produto = 1;
	printf("Com quantos numeros vc quer comecar? ");
	scanf("%d", &cont);
	
	for(i = 1; i <= cont; i++)
	{
		printf("\nEntre com o %do inteiro: ", i);
		scanf("%d", &n);
		
		if(n % 2 == 0) // eh par
		{
			soma = soma + n;
		}
		else //eh impar
		{
			produto = produto * n;
		}		
	}
	
	printf("\nA soma dos numeros digitados eh: %d", soma);
	printf("\nO produto dos numeros digitados eh: %d", produto);
	return 0;
	
}
