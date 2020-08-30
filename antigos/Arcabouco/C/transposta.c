#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
QUESTÃO 01:
Faça um função que, dada uma matriz M8×5 de reais, gere a matriz Mt, sua transposta.
*/

void exibir( float **matriz, int linhas, int colunas ){
	int i, j;
	for(i = 0; i < linhas; i++)	{
		for(j = 0; j < colunas; j++){
			printf("%.2f ", matriz[i][j]);
		}
		printf("\n");
	}
}

void matriz( float ***transposta, int *lt, int *ct,  float **origem , int linhas, int colunas ){
	
	int i, j, k, l, ld, cd;
	float **destino;
	ld = colunas;
	cd = linhas;
	
	destino = (float **) malloc(ld * sizeof(float *));
	for(i = 0; i < ld; i++){
		destino[i] = (float *) malloc(cd * sizeof(float));
	}
	
	for(i = 0; i < ld; i++)	{
		for(j = 0; j < cd; j++){
			destino[i][j] = origem[j][i];
		}		
	}	
	
	*transposta = destino;
	*lt = colunas;
	*ct = linhas;	
}

int main(void){
	
	int i, j, l = 8, c = 5, lt, ct;
	float **transposta, **origem;
	origem = (float **) malloc(l * sizeof(float *));
	for(i = 0; i < l; i++){
		origem[i] = (float *) malloc(c * sizeof(float));		
	}
	
	srand(time(NULL));
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){			
			origem[i][j] = (float) ( rand() % 10 );
		}
	}
	
	printf("\nMatriz selecionada: \n");
	exibir(origem, l, c);
	
	printf("\nMatriz transposta: \n");
	matriz(&transposta, &lt, &ct, origem, l, c);
	exibir(transposta, lt, ct);
		
	return 0;
	
}

