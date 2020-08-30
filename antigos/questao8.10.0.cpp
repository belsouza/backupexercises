/*
QUESTÃO 10:
Fazer um função que, dados dois vetores A e B com números inteiros, gerar o vetor C que consiste na união dos dois primeiros.
Nota: considerar que não existe repetição no conjunto A, nem no conjunto B.
*/

#include <stdio.h>

void pesquisar();


void concat( int *vetA, int sizeA, int *vetB, int sizeB, int *vetC)
{
	int i, j, k, cont;
	cont = sizeA + sizeB;
	i = j = 0;
	while( i < sizeA )
	{
		vetC[i] = vetA[i];
		i++;
	}	
	
	while( j < sizeB )
	{
		vetC[i] = vetB[j];
		i++;
		j++;
	}	
	
	for(k = 0; k < cont; k++)
	{
		printf("%d ", vetC[k]);
	}

}

int main(void)
{
	int a = 10, b = 12;
	int vetA[a] = { 2, 25, 12, 32, 16, 72, 10, 5, 1, 31};
	int vetB[b] = { 13, 7, 8, 49, 23, 61, 84, 93, 100, 56, 57, 11};
	int vetC[a+b];
	
	concat(vetA, a, vetB, b, vetC);
	
}
