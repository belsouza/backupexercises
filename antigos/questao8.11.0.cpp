/*
QUESTÃO 11:
Fazer um função que, dados dois vetores A e B com números inteiros, gerar o vetor C que consiste na intersecção dos dois primeiros.
*/
#include <stdio.h>

void intersec( int *vetA, int sizeA, int *vetB, int sizeB, int *vetC)
{
	int i, j, k, cont = 0;	
		
	for(i = 0; i < sizeA; i++)
	{
		for(j = 0; j < sizeB; j++)
		{
			if(vetB[j] == vetA[i])
			{
				vetC[cont] = vetB[j];
				cont++;
			}
		}
	}
	
	
	for(k = 0; k < cont; k++)
	{
		printf("%d ", vetC[k]);
	}

}

int main(void)
{
	int a = 10, b = 12;
	int vetA[a] = { 2, 25, 93, 32, 11, 23, 10, 5, 1, 31};
	int vetB[b] = { 13, 7, 1, 49, 23, 61, 84, 93, 100, 56, 2, 11};
	int vetC[a+b];
	
	intersec(vetA, a, vetB, b, vetC);
	
}
