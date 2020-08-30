/*
QUESTÃO 03:
Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci.
*/

#include <stdio.h>

//1, 1, 2, 3, 5, 8, 13, 21, 34
int fibonacci(int n)
{
	int i, a, b, c;
	for(i = 1; i <= n; i++)
	{		
		if((n == 1) || (n == 2))
		{
			return 1;
		}
		else
		{
			a = b = 1;
			for(i = 3; i <= n; i++)
			{
				c = a + b;
				a = b;
				b = c;
			}
		}		
	}
	return c;
	
}

int main(void)
{
	int num;
	printf("\nEntre com o enesimo: ");
	scanf("%d",&num );
	printf("\n%d",fibonacci( num ) );
}
