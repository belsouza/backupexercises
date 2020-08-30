/*
Lista 4 exercicio 6
Criar um programa que exiba os N primeiros termos da seguinte série:
1,2,8,64,1024,...
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, n;
	int r, sum;
	
	printf("Entre com a serie: ");
	scanf("%d", &n);
	
	sum = 0;
	for(i = 1; i <= n; i++)
	{
		
		r = pow(2, sum);		
		printf("%d ", r);
		sum = sum + i;		
	}
	
	return 0;
}
