#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reset(int v[], int tam)
{
	int i;
	for(i = 0; i < tam; i++)
	{
		v[i] = 0;
	}
}

void exibirplacar( int indiceA, int golsA, int golsB, int indiceB )
{
	printf("\n| Time %2d | %2d x %2d | Time: %2d |", indiceA, golsA, golsB, indiceB );
}

void aleatorio( int *p, int *q)
{
	srand(time(NULL));
	*p = rand()%10;
	*q = rand()%10;
}


void jogos( int v[], int size, int start )
{
	int i, j;	
	int placari, placarj;
	
	srand(time(NULL));
	for( i = start; i < (size+start); i++ )
	{           
		 for(j = start; j < (size+start); j++)
		{			
			placari = rand()%10;
			placarj = rand()%10;
			
			//aleatorio( &placarj, &placari);
			exibirplacar( i + 1, placarj, placari, i );
			
			if(i > j)
			{
				if( placari == placarj)
				{
					v[i] += 1;
					v[j] += 1;
				}
				
				if(placari > placarj)
				{
					v[i] += 3;
				}
				else
				{
					v[j] += 3;
				}				
			}			
	//	}
		printf("\n");
	}
}

int main(void)
{
	int i, tam = 32;
	int vet[tam];
	reset(vet, tam);
	
	for(i = 0; i < 8; i++)
	{
		jogos(vet, 4, 32);
	}
	
	
	for(i = 0; i < 32; i++)
	{
		printf("%d ", vet[i]);
	}
}
