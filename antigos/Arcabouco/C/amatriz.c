/*Desenvolver uma funcao que gere a seguinte matriz M5„e5:
*/

#include <stdio.h>
#include <stdlib.h>

void exibir( int **matr, int linhas, int colunas ){
	
	int i, j;
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("%2d ", matr[i][j]);
		}
		printf("\n");
	}	
}

void matriz( int ***matr, int linhas, int colunas ){
	int **matriz, i, j;
	matriz = (int **) malloc (linhas * sizeof(int *));
	for(i = 0; i < colunas; i++){
		matriz[i] = (int *) malloc( colunas * sizeof(int ));
	}
	
	for(i = 0; i < linhas; i++ )
	{
		for(j = 0; j < colunas; j++)
		{
			matriz[i][j] = (i + j) + 1;
		}
	}
	
	*matr = matriz;	
}


int main(void){
	
	int **matr, l = 5, c = 5;
	matriz(&matr, l, c);
	exibir(matr, l, c);
	return 0;	
}
