/*
QUESTÃO 04:
Fazer uma função que armazene em um vetor os 50 primeiros termos da seguinte sequência:
S = 1, 2, 4, 7, 11, 16, ...
Nota: observem que a diferença entre o 1º e 2º elementos é igual a 1, entre o 2º e 3º é igual a 2, entre o 3º e o 4º é igual a 3, e assim sucessivamente.
*/

#include <stdio.h>

void seed (int *vet, int tam)
{
	int i, k = 1;
	for(i = 0; i < tam; i++)
	{
		k = k + i;
		vet[i] = k;
		printf("%d ", vet[i]);
		
	}
}

int main(void)
{
	unsigned int i;
    int vet[i];
	printf("Entre com o numero de elementos: ");
	scanf("%d", &i);
	seed(vet, i);
}
