/*
QUESTÃO 04:
Fazer uma função que calcule o MDC (máximo
divisor comum) entre dois números.
*/

#include <stdio.h>

int menor(int a, int b)
{
	if(a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}


int mdc(int a, int b)
{
	int i, m;
	m = menor(a, b);
	for(i = m; i >= 1; i--)
	{
		if((a%i==0) && (b%i==0))
		{
			return i;
		}
	}
}

int main(void)
{
	int a, b;
	scanf("%d  %d", &a, &b);
	printf("\nMDC de %d e %d eh %d",a, b, mdc(a, b));
}
