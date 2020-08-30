#include <stdio.h>

int main(void)
{
	int n, digit, ant = -9999;
	int condicao = 0;
	
	printf("Entre com um numero: ");
	scanf("%d", &n);
		
	while (n > 0)
	{
		digit = n % 10;
		if (digit == ant)
		{
			condicao = condicao + 1;
			printf("\nSituacao: %d e %d", digit, ant);
		}
		printf("\n%d", digit);				
		ant = digit;		
		n = n / 10;
	}
	
	if(condicao > 0)
	{
		printf("\nNumero com repeticoes simultaneas");
	}
	
		
}
