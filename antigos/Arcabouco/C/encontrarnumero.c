/*
Desenvolver uma função que, dada uma matriz M15×20, determine se um número X se encontra na linha L da matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void exibir( int **matriz, int linhas, int colunas )
{
	int i, j;
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf(" %2d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int encontrado( int **matriz, int linhas, int colunas, int numerox, int linhax ){
	int j;
	for(j = 0; j < colunas; j++){
		if(numerox == matriz[linhax-1][j]){
			return (j+1);
		}
	}
	return 0;
}

void seed( int ***matriz, int linhas, int colunas ){
	int i, j;
	int **temp;
	temp = (int **) malloc( linhas * sizeof(int *));
	for(i = 0; i < colunas; i++){
		temp[i] = (int *) malloc( colunas * sizeof( int ));
	}
	
	srand(time(NULL));
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			temp[i][j] = rand() % 100;
		}
	}
	
	*matriz = temp;	
}

int main(void){
	int i, j, l = 15, c = 20, x, y, pos;
	int **matriz;
	seed(&matriz, l, c);
	exibir(matriz, l, c);
	
	printf("\nNumero a ser encontrado: ");
	scanf("%d", &x);
	
	printf("\nLinha a ser procurada: (1 a 20): ");
	scanf("%d", &y);
	
	//encontrado( int **matriz, int linhas, int colunas, int numerox, int linhax )
	pos = encontrado(matriz, l, c, x, y);
	if(pos != 0)
	{
		printf("O numero %d foi encontrado na coluna %d\n", x, pos );
	}
	else{
		printf("O numero %d nao foi encontrado" , x);
	}
	return 0;
}

