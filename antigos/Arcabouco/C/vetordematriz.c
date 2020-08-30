#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exibir( int matriz[10][8], int linhas, int colunas )
{
	int i, j;
	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < colunas; j++)
		{
			printf("%3d ", matriz[i][j]);
		}
		printf("\n");
	}
}

void semear(int mat[10][8], int lin, int col )
{
	int i, j, k;
	
	srand(time(NULL));
	for(i = 0; i < lin; i++)
	{
		for(j = 0; j < col; j++)
		{
			mat[i][j] = rand()%100;
		}
	}
}

void zerarvetor( int vet[], int tam )
{
	int i;
	for(i = 0; i < tam; i++)
	{
		vet[i] = 0;
	}
}

void exibirvetor( int vet[], int tam )
{
	int i;
	
	for(i = 0; i < tam*(tam / 2); i++)
	{
		printf("*");
	}
	printf("\n");
	
	for(i = 0; i < tam; i++)
	{
		printf("%2d ", vet[i]);
	}
}

void completarvetor( int matr[10][8], int vet[] )
{
	int i, j, k;
	for(k = 0; k < 8; k++)
	{
		for(i = 0; i < 10; i++){
			for(j = 0; j < 8; j++)
			{
				if(j == k)
				{
					vet[k] = vet[k] + matr[i][j];
				}				
			}
		}
	}	
}

int main(void)
{
	int matriz[10][8], vet[8];
	semear(matriz, 10, 8);
	zerarvetor(vet, 8);	
	exibir(matriz, 10, 8);
	completarvetor(matriz, vet);
	exibirvetor(vet, 8);
	return 0;
	
}
