/*
Lista 4 exercicio 6
Criar um programa que exiba os N primeiros termos da seguinte série:
1,2,8,64,1024,...
*/

#include <stdio.h>

int main(void)
{
	int i, n;
	int termo, razao;
	
	printf("Entre com a serie: ");
	scanf("%d", &n);
	
	termo = 1;
	razao = 2;
	
	for(i = 1; i <= n; i++)
	{
		printf("%d ", termo);
		termo = termo * razao;
		razao *= 2;
	}
	
	return 0;
}
