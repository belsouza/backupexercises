/*
Lista 4 exercicio 6
Criar um programa que exiba os N primeiros termos da seguinte série:
1,2,8,64,1024,...
*/

#include <stdio.h>

int main(void)
{
	int i, n;
	int r = 1, sum, j;
	
	printf("Entre com a serie: ");
	scanf("%d", &n);
	
	sum = 0;
	for(i = 1; i <= n; i++)
	{
		//Calculo da potencia de 2 -> 
		for(j = 1; j < i; j++)
		{
			r = r * 2;
		}
		printf("%d ", r);
		sum = sum + i;		
	}
	
	return 0;
}
