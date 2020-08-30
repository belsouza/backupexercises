#include <stdio.h>

/*
Desenvolver uma função recursiva
que exiba todos os múltiplos do número N,
inferiores ao valor V.
*/

int multiplo(int n, int v)
{
	if(n < v)
	{		
		printf("%d ", n);						
		return (multiplo (n + n, v));
	}
	else
	{
		return 1;
	}
}

int main(void)
{
	int n, v, num;
	scanf("%d  %d", &n, &v);
	num = multiplo(n, v);
	return 0;
}
	

