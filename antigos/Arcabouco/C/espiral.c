#include <stdio.h>
#include <stdlib.h>

//sentido 1 = baixo
//sentido 2 = esquerda
//sentido 3 = cima
//sentido 4 = direita


void preencherespiraltabuada( int **m, int tam )
{
	int i, j, cont = 0;
	for(i = 0; i < tam; i++){
		for(j = 0; j < tam; j++){
			*(*(m + i) + j ) = (i + 1) * (j + 1);
		}
	}
}

void preencherespiral( int **vet, int r )
{	
	int i, j, k, l, m, n, ix, in, cont = 0;
	i = j = (r / 2);
	ix = 1;
	for(cont = 1; cont < r*r; )
	{
					
		for(k = 0; k < ix; k++)
		{
			if(i >= 0 && j >= 0 && i < r && j < r){
				
				*(*(vet + i) + j) = cont;
				//vet[i][j] = cont;
				//printf("%d %d - %d\n", i, j, cont);
				cont++;
				j = j + 1;
			}			
		}
		
		for(l = 0; l < ix; l++)
		{
			if(i >= 0 && j >= 0 && i < r && j < r){
				*(*(vet + i) + j) = cont;
				//vet[i][j] = cont;
				//printf("%d %d - %d\n", i, j, cont);
				cont++;
				i = i + 1;
			}
		}
			
		ix += 1;		
		
		for(m = 0; m < ix; m++)
		{
			if(i >= 0 && j >= 0 && i < r && j < r){
				*(*(vet + i) + j) = cont;
				//vet[i][j] = cont;
				//printf("%d %d - %d\n", i, j, cont);
				cont++;
				j = j - 1;
			}			
		}
		
		for(n = 0; n < ix; n++){
			
			if(i >= 0 && j >= 0 && i < r && j < r){	
			*(*(vet + i) + j) = cont;		
			//vet[i][j] = cont;
			//printf("%d %d - %d\n", i, j, cont);
			cont++;
			i = i - 1;
			}			
		}
		
		ix++;		
	}				
}


void exibir(int **matriz, int tam)
{
	int i, j;
	for(i = 0; i < tam; i++)
	{
		for(j = 0; j < tam; j++)
		{
			printf("%2d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void preencher(int **matriz, int tam )
{
	int i, j;
	for(i = 0; i < tam; i++)
	{
		for(j = 0; j < tam; j++)
		{
			matriz[i][j] = 0;
		}
	}
}

int main(void)
{
	int **matriz, i ,size;
	printf("Entre com o tamanho: ");
	scanf("%d", &size);
	
	
	matriz = (int **) malloc( size * sizeof(int **));
	for(i = 0; i < size; i++){
		matriz[i] = (int *) malloc( size * sizeof(int));
	}		
	preencher(matriz, size);
	exibir(matriz, size);
	preencherespiral(matriz, size);
	exibir(matriz,size);
	return 0;
}
