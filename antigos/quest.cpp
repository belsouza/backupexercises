/*
//soma = (temp * 10) /i;  - imprime 3

*/
#include <stdio.h>

int main(void)
{
	int n, i, ant, num,  soma = 0;
	printf("Entre com um numero: ");
	scanf("%d", &n);
	
	for(i = 10; i <= 10*n; i*=10)
	{
		ant = n % (i / 10);
		num = n % i;
		soma = (soma * 10) + (num / (i / 10));	
	}
	
	printf("\n%d", soma);
}

