/*
lista 1 questao 4
*/

#include <stdio.h>

int main(void)
{
	float saldo;
	printf ("Entre com o valor do salto: ");
	scanf("%f", &saldo );
	
	if (saldo < 1000.00)
	{
		printf ("\nNenhum credito. ");
	}
	else
	{
		if (saldo < 1499.99)
		{
			printf ("\nValor do credito: 20%% do saldo medio: R$  %.2f", saldo * 0.2 );
		}
		else
		{
			if (saldo < 2499.99)
			{
				printf ("\nValor do credito: 30%% do saldo medio: R$ %.2f", saldo * 0.3 );
			}
			else
			{
				printf ("\nValor do credito: 40%% do saldo medio: R$ %.2f", saldo * 0.4 );
			}
		}
	}
	
	return 0;
}
