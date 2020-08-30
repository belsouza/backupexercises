/*
Faça um função que, dada uma matriz M8×5 de reais, gere a matriz Mt, sua transposta.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void imprimirmatriz( int matr[8][5], int linhas, int cols )
{
	int i, j;
	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < cols; j++)
		{
			printf("%2d ", matr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}

void imprimirtransposta( int matr[5][8], int linhas, int cols )
{
	int i, j;
	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < cols; j++)
		{
			printf("%2d ", matr[i][j]);		
		}
		printf("\n");
	}
	printf("\n\n");	
}



void criartransposta( int matr[8][5], int linhas, int cols )
{
	int i, j, *p;
    int transposta[5][8];
    p = &transposta[0][0];
	
	for(i = 0; i < 8; i++)
	{
		for(j = 0; j < 5; j++)
		{
			  transposta[j][i] = matr[i][j];			
		}
	}
	
	imprimirtransposta(transposta, 5, 8);
}


int main(void)
{
	int i, j;
	int matriz[8][5];
	int transposta[5][8];
	
	
	srand(time(NULL));
	for(i = 0; i < 8; i++)
	{
		for(j = 0; j < 5; j++)
		{
			matriz[i][j] = rand()%100;						
		}
	}	
				
	imprimirmatriz(matriz, 8, 5);
	criartransposta(matriz, 8, 5);
	
	
}
