#include <stdio.h>

int main(void)
{
	int n, i, ant, pos, temp,  soma = 0;
	printf("Entre com um numero: ");
	scanf("%d", &n);
	
	i = 1;
	while(i < 10*n)
	{		
		ant = n%i;
		pos = n%(i * 10);
		temp = (pos - ant)/i;
		soma = (10 * soma) + temp;	
		i*=10;	
	}
	
	printf("\n%d", soma/10);
}
