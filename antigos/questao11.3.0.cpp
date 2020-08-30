/*
Desenvolver uma funcao que gere a seguinte matriz M5„e5:

*/


#include <stdio.h>


void exibematriz( int matriz[5][5] )
{
	int i, j;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; i++)
		{
			printf("%2d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}

void geramatriz( int v[5][5] )
{
	int i, j;
	for(i = 0, j = 1; i < 5; i++, j++)
	{
		v[i][j] = i + j;	
	}	
}

int main(void)
{
	int mat[5][5];
	
	geramatriz( mat );
	exibematriz( mat );
}
