#include <stdio.h>

void resetvet( int vet[], int tam )
{
	int i;
	for(i = 0; i < tam; i++)
	{
		vet[i] = 0;
	}	
}

void printVet( int vet[], int tam )
{
	int i;
	for(i = 0; i < tam; i++)
	{
		printf("%d ", vet[i]);
	}
}


int main(void)
{
	int i, j, k;
	int vet[32];
	
	resetvet( vet, 32 );
	
	for (i = 0; i < 32; i+=4)
	{
		for(j = 0; j < 4; j++)
		{
			for( k = 0; k < 4; k++)
			{
				vet[i+j+k] = k + j;
			}
			
		}
	}
	
	printVet( vet, 32 );
	
}
