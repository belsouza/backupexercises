/*
QUESTÃO 05:
Fazer uma função que calcule o MMC (mínimo
múltiplo comum) entre dois números.
*/

#include <stdio.h>

int maior(int a, int b)
{
	if(a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int mmc(int a, int b)
{
	int i, j;
	j = maior(a, b);
	for(i = j; i < (a*b); i++)
	{
		if((i%a==0) && (i%b==0))
		{
			return i;
		}
	}	
}

int main(void)
{
	int a, b;
	printf("\nEntre com dois numeros: ");
	scanf("%d  %d", &a, &b);
	printf("\n%d", mmc(a, b));
	
}
