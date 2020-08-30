/*
QUESTÃO 01:
Desenvolver uma função que determine o número de ocorrências de um número inteiro x em um vetor A.
*/

#include <stdio.h>

void noc(int n, int *nc, int *vet)
{
	int i, temp = 0;
	for(i = 0; i <= sizeof(vet); i++ )
	{
		if(vet[i] == n)
		{
			temp = temp + 1;
		}
	}	
	*nc = temp;
}

int main(void)
{
	int n, nc;
	int vet[11] = { 2, 4, 6, 7, 6, 8, 2, 7, 2, 5, 1};
	printf("Entre com o inteiro: ");
	scanf("%d", &n);
	noc(n, &nc, vet);
	printf("\nHouve %d ocorrencias de %d.", nc, n);
}
