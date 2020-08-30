/*
QUESTÃO 06: Faça um programa que leia um número N inteiro, menor do que 20 (se for maior ou igual a 20, o programa deve exibir uma mensagem de erro).
 Após isso, o programa deve imprimir os números no intervalo de 1 a 99 cujos algarismos somem N.
*/

#include <stdio.h>

int main (void)
{
	int i, num;
	int soma = 0;
	
	printf("Entre com um numero: ");
	scanf("%d", &num);
	
	if (num >= 20)
	{
		printf("Erro! Digite um numero de um a 20");
	}
	else
	{
		for (i = 1; i <= 99; i++)
		{			
			if(soma == num)
			{
				break;
			}
			else
			{
				printf("%d\n", i );
				soma = soma + i;
			}
		}
	}
	return 0;
	
}
