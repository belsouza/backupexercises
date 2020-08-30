#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void formula(int **matrix, int n )
{
	int i, j, meio = n/2;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i == meio && j == meio)
			{
				matrix[i][j] = 1;
			}
		}
	}
}

void buildsearchmatrix( int n , int m ){
	
	int **matrix, i, j;	
	
	matrix = (int **) malloc(n * sizeof(int *));
	for(i = 0; i < n; i++)
	{
		matrix[i] = (int *) malloc(n * sizeof(int));
	}
	////////////////////////////////////////
	
	formula(matrix, n);
	
	/////////////////////////////////////////
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%02d  ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	/*
	for(i = 0; i < n; i++)
	{		
		int* currentCPT = matrix[i];
		free(currentCPT);		
	}*/
	
}


int main(void)
{
	int n, m;
	FILE *fp;
	fp = fopen("stdin.txt","r");
	fscanf(stdin,"%d  %d", &n, &m);
	buildsearchmatrix(n, m);	
	return 0;
}
