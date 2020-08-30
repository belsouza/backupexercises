#include <stdio.h>

int fatorial(int n)
{
	if(n > 0)
	{
		return (n * fatorial(n - 1));
	}
	else
	{
		return 1;
	}
}

int main(void)
{
	int n;
	printf("Entre com um numero: ");
	scanf("%d", &n);
	printf("O fatorial do numero eh: %d\n", fatorial(n));
	return 0;
}
