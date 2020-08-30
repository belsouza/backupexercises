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
		}
	}
}

int main(void)
{
	int i, tam = 12;
	int vet[tam];
	reset(vet, tam);
	
	
	jogos(vet, 4, 7);
	
	for(i = 0; i < tam; i++)
	{
		printf("%d ", vet[i]);
	}
}
