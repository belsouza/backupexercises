/*
Lista 4  exercicio 5
Criar um programa que exiba os N primeiros termos da seguinte série:
1,2,4,8,16,32,...
*/

#include <stdio.h>
//float eh melhor
int main(void)
{
	int i, n, lim = 1, j;	
	
	printf("Entre com o numero de termos: ");
	scanf("%d", &n);
	
	for(j = 1; j < n; j++)
	{
		lim = lim * 2; 
	}
	
	for(i = 1; i <= lim  ; i*=2)
	{ 
	     printf("%d ",  i ) ;
	}
	
	return 0;
}

