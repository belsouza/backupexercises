/*
Questao 04
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exibematriz( int matriz[10][20] )
{
	int i, j;
	for(i = 0; j < 10; i++)
	{
		for(j = 0; j < 20; j++)
		{
			printf("%d ",matriz[i][j]);
		}
		printf("\n\n");
	}	
}



int primnamatriz( int matriz[10][20], int n, int *idx, int *idy )
{
	int i, j;
	for(i = 0; i < 10; i++ )
	{
		for(j = 0; j < 20; j++)
		{
			if(n == matriz[i][j])
			{
				*idx = i;
				*idy = j;
				return 0;
			}
		}
	}		
}

int quantasvezesestanamatriz( int matriz[10][20], int n )
{
	int i, j, cont = 0;
	for(i = 0; i < 10; i++ )
	{
		for(j = 0; j < 20; j++)
		{
			if(n == matriz[i][j])
			{
				cont++;
			}
		}
	}
	return cont;	
}

void exibeindices( int idx, int idy )
{
	if( (idx == -1 ) && (idy == -1) )
	{
		printf("\nO numero solicitado nao foi encontrado na matriz.");
	}
	else
	{
		printf("O numero foi encontrado nas posicoes %d e %d", idx, idy);
	}
}



int main(void)
{
	int x;
	int matriz[10][20] = {  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}	};
	int idx = -1, idy = -1 , cont;
	
	printf("\nEntre com o numero:");
	scanf("%d", &x);
		
	
	exibematriz( matriz );
	
	primnamatriz( matriz, x, &idx, &idy);
	cont = quantasvezesestanamatriz( matriz, x );
	printf("\nO elemento %d aparece %d vezes na matriz.", x, cont);
	exibeindices( idx, idy );	
	
}
