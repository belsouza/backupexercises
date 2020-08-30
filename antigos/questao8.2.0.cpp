/*
QUESTAO 02:
Implementar uma funcao que, dado um vetor de reais, troque o 1„a e o 2„a elementos,
 em seguida o 3„a e o 4„a elementos e assim sucessivamente, ate se chegar ao final do vetor.
*/
//int a[17];
//size_t n = sizeof(a)/sizeof(a[0]);
#include <stdio.h>


void exibe (float *vet, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%.1f ", *(vet + i));
	}	
}

void troca (float *vet, int size)
{
	int i;
	float temp;
	i = 1;
	while( i <= size )
	{
		temp = vet[i-1];
		vet[i-1] = vet[i];
		vet[i] = temp;
		i+=2;
	}
}

int main(void)
{
	float vet[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
	troca(vet, 6);
	exibe(vet, 6);
}
