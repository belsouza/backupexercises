/*
QUESTÃO 07: Faça um programa que leia 150 números reais e, ao final, exiba:
a) A soma dos 50 primeiros;
b) menor número do 50° ao 100° valores fornecidos;
c) A média entre os últimos 50 valores.
*/

#include <stdio.h>

int main(void)
{
	int i, n;
	int num = 150; //Original: 150	
	int cont = 0;
	int soma = 0;
	int maior = 0;
	int somedia = 0;
	float media;
	
	i = 1;	
	while(i <= 150)
	{
		printf("\nEntre com um numero: ");
		scanf("%d", &n);
		
		if(i <= 50)
		{
			soma = soma + n;
		}
		else
		{
			if(i <= 100)
			{
				if(maior == 0)
				{
					maior = n;
				}
				else
				{
					if(maior > n)
					{
						maior == n;
					}
				}
			}
			else
			{
			    somedia = somedia + n;
				cont = cont + 1;	
			}
		}
	}
	
	media = somedia / cont;
	
	printf("\n******************************************\n");
	
	printf("\nA soma dos 50 primeiros eh: %d", soma);
	printf("\nO menor número do 50 ao 100 valores fornecidos eh: %d", maior);
	printf("\nA média entre os últimos 50 valores eh: %.2f", media);
	
	
	return 0;
}
