/*
Lista 4  exercicio 5
Criar um programa que exiba os N primeiros termos da seguinte série:
1,2,4,8,16,32,...
*/

#include <stdio.h>

int main(void)
{
	int i, n, lim = 1, j;	
	
	printf("Entre com o numero de termos: ");
	scanf("%d", &n);
	
 termo = a1;
	for(i = 1; i <= n  ; i++)
	{ 
	     printf("%d ",  termo ) ;
	     termo = termo * 2;
	}
	
	return 0;
}

