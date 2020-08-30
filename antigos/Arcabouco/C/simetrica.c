#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exibir( int **matriz, int linhas, int colunas )
{
	int i, j;
	
	printf("\n");
	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < colunas; j++)
		{
			printf("%2d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void seed(int ***m, int linhas, int colunas)
{
	int **matriz, i, j;
	matriz = (int **) malloc( linhas * sizeof(int *));
	for(i = 0; i < colunas; i++){
		matriz[i] = (int *) malloc( colunas * sizeof(int));
	}
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++)
		{
			printf("Elemento [%d][%d]: ", i, j);
			fflush(stdin);
			scanf("%d", &matriz[i][j]);
		}
	}	
	
	*m = matriz;
}

int simetria( int **matrA, int linhas, int colunas )
{
	int i, j, cont = 0;
	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < colunas; j++)
		{
			if(matrA[i][j] != matrA[j][i])
			{
				cont++;
			}
		}
	}
	
	if(cont > 0)
	{
		return 0;
	}
	
	return 1;
}

int validamatriz( int *linhas, int *colunas )
{
	int x, y;
	x = *linhas;
	y = *colunas;
	
	if(x != y)
	{
		do{
			printf("Dados invalidos. A quantidade de linhas deve ser igual a de colunas. ");
			printf("\nQuantidade de linhas e colunas: ");
			fflush(stdin);
			scanf("%d  %d", &x, &y);
		}
		while(x != y);
	}	
	
	*linhas = x;
	*colunas = y;
}

int main(void)
{
	int **matA, l, c;
	printf("Quantidade de linhas e colunas: ");
	scanf("%d  %d", &l, &c);
	
	validamatriz(&l, &c);
	
	seed(&matA, l, c);
	exibir(matA, l, c);	
	
	if(simetria(matA, l, c))
	{
		printf("A matriz eh simetrica.");
	}
	else
	{
		printf("A matriz nao eh simetrica.");
	}
	
	return 0;
}



