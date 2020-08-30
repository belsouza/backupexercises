/*
QUESTÃO 05: Faça um programa que exiba na tela os 50 primeiros termos da seguinte série: 1, -2, 3, -4, 5, -6 ...
*/

#include <stdio.h>

int main (void)
{
	int i;
	for (i = 1; i <= 50; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d, ", i * (-1));
		}
		else
		{
			printf("%d, ", i);
		}
	}
	return 0;
}
