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
	int num = 5; //Original: 150	
	int cont = 0;
	int soma = 0;
	int menor = 0;
	int somedia = 0;
	float media;
	
	//50, 100, 150
	//pra num = 50; num * 1, num * 2, num * 3
	
	for(i = 1; i <= (num*3); i++)	// i <= 150
	{
		printf("\nEntre com o %do numero: ", i);
		scanf("%d", &n);
		
		if(i <= num)
		{
			soma = soma + n;
		}
		else
		{
			if(i <= (num*2))
			{
				if(menor == 0)
				{
					menor = n;
				}
				else
				{
					if(n < menor)
					{
						menor = n;
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
	
	media = somedia/cont;
	
	printf("\n******************************************\n");
	
	printf("\nA soma dos %d primeiros eh: %d",num,  soma);
	printf("\nO menor numero do %d ao %d valores fornecidos eh: %d", num, num*2,  menor);
	printf("\nA média entre os últimos %d valores eh: %.2f",num,  media);
	

	return 0;
}
