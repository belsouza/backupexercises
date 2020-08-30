#include <stdio.h>
#include <stdlib.h>

//sentido 1 = baixo
//sentido 2 = esquerda
//sentido 3 = cima
//sentido 4 = direita

int sentido = 1;
int cont = 1;

void populate( int i, int j, int n ){
	int i;
	if(cont < 5)
	{
		for(i = 0; i < n; i++)
		{
			printf("%d%d ", i, j);
		}
	}
	
}


void preencherespiral( int*** matriz, int tam )
{
	int i, j, r, **mat, met;
	mat = *matriz;
	met = tam/2;
	i = met;
	j = met;
	

}



void exibir(int **matriz, int tam)
{
	int i, j;
	for(i = 0; i < tam; i++)
	{
		for(j = 0; j < tam; j++)
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void preencher(int **matriz, int tam)
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

void buildit( int*** mat, int tam )
{
	int **foo, i, j;
	foo = (int ** ) malloc(tam * sizeof(int*));
	for(i = 0; i < tam; i++)
	{
		foo[i] = (int *) malloc(tam * sizeof(int));
	}	
	preencher(foo,tam);	
	*mat = foo;
}

int main(void)
{
 	int** matriz, tam = 3;
 	buildit(&matriz, tam);
 	exibir(matriz, tam);
 	preencherespiral(&matriz, tam);
 	exibir(matriz, tam);
	return 0;
}
