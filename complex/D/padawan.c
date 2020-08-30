#include <stdio.h>
#include <stdlib.h>

void buildsearchmatrix( int n , int m ){
	int **matrix, i, j;
	matrix = (int **) malloc(n * sizeof(int *));
	for(i = 0; i < n; i++)
	{
		matrix[i] = (int *) malloc(n * sizeof(int));
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			matrix[i][j] = i + j;
		}
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%02d  ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
}


int main(void)
{
	int n, m;
	FILE *fp;
	fp = fopen("stdin.txt","r");
	while(fscanf(fp,"%d  %d", &n, &m) != EOF){
		buildsearchmatrix(n, m);
	}
	return 0;
}
