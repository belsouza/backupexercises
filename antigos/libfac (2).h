/*
Biblioteca usuario
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Exibe um determinado array
void exibe( float *vet, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%.0f ", vet[i]);
	}
}

//Retorna a posicao de um determinado numero n em um vetor v
int pos(float *vetor, float numero, int ordem,  int tamanho)
{
	int i, cont = 0;
	for(i = 0; i <= tamanho; i++ )
	{
		if(vetor[i]==numero)
		{
			cont++;
			if(cont == ordem)
			{
				return i;
			}
		}		
	}
}

//Criação de um vetor através de valores dados pelo usuario.
void inputfloatvetor( int size )
{
	int i; 
	float num;
	float str[size];
	for( i = 0; i <= size; i++)
	{
		printf("\nEntre com o valor de posicao %d: ", i);
		scanf("%f", &num );
		str[i] = num;
		fflush(stdin);
	}
}

void seedvet( float *vet, int size )
{
	int i;	
	float r;
	for(i = 0; i <= size; i++)
	{	
		srand(time(NULL)); 	
		vet[i] = rand();
	}
	
}



