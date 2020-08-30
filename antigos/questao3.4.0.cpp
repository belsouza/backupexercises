/*
QUESTÃO 04: Faça um programa que leia 300 números reais. Ao final, devem ser exibidas as seguintes informações:
a) A quantidade de valores negativos digitados;
b) A média dos valores positivos.

*/

#include <stdio.h>

int main (void)
{
	int i, negcont = 0, poscont = 0;
	int num = 5;
	int entrada;
	float somedia = 0;
	
	for (i = 0; i < num; i++)
	{
		printf ("Entre com  um numero: ");
		scanf("%d", &entrada);
		if(entrada < 0)
		{
			negcont = negcont + 1;
		}
		else
		{
			somedia = somedia + entrada;
			poscont = poscont + 1;
		}
		fflush(stdin);
	}
	printf("\nForam digitados %d numeros negativos", negcont);
	printf("\nA media dos numeros positivos eh: %.2f", somedia / poscont);
	
	return 0;	
}
