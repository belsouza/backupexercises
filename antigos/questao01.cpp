#include <stdio.h>

int fat( int n )
{
	int i, fat = 1;
	for(i = 2; i <= n; i++)
	{
		fat *= i;
	}
	return fat;
}

int prod( int n, int i)
{
	int j, ac, nprod = 1;
	for(j = 0; j < i; j++)
	{
		ac = (n - i);
		nprod = nprod * ac;
	}
	return nprod;
}

int somatorio( int n )
{
	int i, soma = 1, ant;
	for(i = 0; i < n; i++)
	{
		ant = prod( n, i )/ fat(i);
		soma = soma + ant;
	}
	return soma;
}

int main(void)
{
	int num, soma;
	printf("\nEntre com um numero: ");
	scanf("%d", &num);
	soma = somatorio( num );
	printf("\nO somatorio no numero %d eh %d\n",num, soma);
}


