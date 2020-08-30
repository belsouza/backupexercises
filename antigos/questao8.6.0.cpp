/*
QUESTÃO 06:
Faça uma função que, dado um vetor de reais, altere todas as ocorrências do número A pelo número B.
*/

#include <stdio.h>

void troca( float *vet, float ant, float dep, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		if(vet[i] == ant)
		{
			vet[i] = dep;
		}
	}
}

void exibe( float *vet, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%.0f ", vet[i]);
	}
}

int main(void)
{
	float a, b;
	float vetA[10] = { 2, 3, 5, 4, 5, 1, 2, 1, 1, 2};
	printf("\nNumero a ser substituido: ");
	scanf("%f", &a);
	printf("\nNumero Substituto: ");
	scanf("%f", &b);
	troca(vetA, a, b, 10);
	exibe(vetA, 10);
	
	
}
