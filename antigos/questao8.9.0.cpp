/*
QUESTÃO 09:
Implementar a função de inserção de determinado elemento em um vetor ordenado crescentemente (dica: utilizar a função do item 08 para auxiliar).
*/

#include <stdio.h>


int poscrescente ( float *vet, float x)
{
	int i = 0;
	while(vet[i] <= x)
	{
		if(vet[i] == x)
		{
			return i;
		}
		i++;
	}	
	return i;
}


void insert ( float *vet, float n , int pos,  int size )
{
	int i, j, k;
	float temp[size+1];
	i = j = 0;
	while ( i < pos )
	{
		temp[j] = vet[i];
		j++;	
		i++;
	}
	
	if( j == pos )
	{
		if(n != vet[i])
		{
			temp[j] = n;
			j++;
		}	
	}
			
	while(j < (size+1))
	{
		temp[j] = vet[i];
		j++;
		i++;
	}
	
	for(k = 0; k <= (size); k++)
	{
		printf("%.0f ", temp[k]);
	}	
	
}


int main(void)
{
	float x;
	int size = 15;
	float vet[size] = {1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 15, 19, 20, 21};	
	int num;
	
	printf("Entre com o numero x: ");
	scanf("%f", &x);
	num = poscrescente(vet, x);	
	printf("O numero %.0f esta na posicao %d.\n", x, num);
	insert( vet, x, num, size );	
}

