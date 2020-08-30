/*
Implementar uma função que, dado um
número inteiro n, e o intervalo definido pelos
números a e b, determine quantos valores do
intervalo possuem divisores (sendo estes
diferentes de 1) que também sejam divisores
de n.
Exemplo:
n = 6
a = 10 e b = 20
Resposta = 7 (pois os números 10, 12, 14,
15, 16, 18 e 20 possuem divisores em
comum com o número 6).
*/

#include <stdio.h>

int intervalo(int n, int a, int b);
int main(void)
{
	int n, inf, sup;
	printf("\nEntre com o numero: ");
	scanf("%d", &n);
	printf("\nEntre com os limites inferior e superior, respectivamente: ");
	scanf("%d  %d", &inf, &sup);
	printf("\n%d", intervalo(n, inf, sup));
}

int intervalo(int n, int a, int b)
{
	int i, j;
	int cont = 0, resp = 0;
	
	for(i = a; i <= b; i++)
	{
		cont = 0;
		for(j = 2; j <= n; j++)
		{
			if((n%j==0) && (i % j==0))
			{
				cont++;
			}
		}
		
		if(cont != 0)
		{
			resp++;
		}
	}
	return resp;
}
