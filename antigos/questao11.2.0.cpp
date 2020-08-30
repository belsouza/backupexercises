/*
Desenvolver uma função que, dada uma matriz M15×20, determine se um número X se encontra na linha L da matriz.
*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//NÂAAAAOOOOOOOOOOOOOO
int search( int matriz[15][20], int x)
{
	int i, j;
	for(i = 0; i < 15; i++)
	{
		for(j = 0; j < 20; j++)
		{
			if(x == matriz[i][j])
			{
				return 1;
			}			
		}
	}
	
	return 0;
}

void alimentador( int matriz[15][20] )
{
	int i, j;
	srand(time(NULL));
	for(i = 0; i < 15; i++)
	{
		for(j = 0; j < 20; j++)
		{
			matriz[i][j] = rand()%100;			
		}		
	}
	
}

void exibirmatriz( int matriz[15][20] )
{
	int i, j;
	
	printf("\n\n");
	for(i = 0; i < 15; i++)
	{
		for(j = 0; j < 20; j++)
		{
			printf("%3d ", matriz[i][j]);			
		}
	}

}

int main(void)
{
	int x;
	int matriz[15][20];
	alimentador( matriz );
	printf("Entre com um numero: ");
	scanf("%d", &x);
    search( matriz, x );
	exibirmatriz( matriz );
}

