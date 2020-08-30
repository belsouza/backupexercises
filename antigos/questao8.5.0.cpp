/*
QUESTÃO 05:
Elaborar uma função que, dado um conjunto de 300 valores inteiros, distribua-os em 2 vetores conforme forem pares ou ímpares.
*/

#include <stdio.h>

void distribuir( int n, int *vetpar, int *vetimpar )
{
	int i, j = 0, k = 0;
	for(i = 0; i <= n; i++)
	{
		if((i%2==0))
		{
			vetpar[j] = i;			
			j++;
		}
		else
		{
			vetimpar[k] = i;		
			k++;
		}
	}
}

void exibirvetor( int *vet, int size )
{
	int i;
	for(i = 0; i <size; i++)
	{
		printf("%d ", vet[i] );
	}
}


int main(void)
{
	int tot = 300;
	int vetA[tot/2];
	int vetB[tot/2];
	distribuir( tot, vetA, vetB);
	exibirvetor(vetA, tot/2);
	printf("************");
	exibirvetor(vetB, tot/2);
}
