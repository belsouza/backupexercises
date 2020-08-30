#include <stdio.h>

void exibe( int vet[], int tam )
{
	int i;
	for(i = 0; i < tam; i++)
	{
		printf("%2d ", vet[i]);
	}
}

int estapresente(int numero, int tam, int destino[])
{
	int i;
	for(i = 0; i < tam; i++ )
	{
		if(numero == destino[i])
		{
			return 1;
		}
	}
	return 0;
}

int replaceit( int origem[], int destino[], int tamorigem, int *tamdestino)
{
	int i, j, cont = 1;
	for(i = 0; i < tamorigem; i++)
	{
		if(estapresente( origem[i], tamorigem, destino ) == 0)
		{
			destino[i] = origem[i];
			cont++;
		}
	}
	
	*tamdestino = cont;
}

int main(void)
{
	int tam = 7, tdest;
	int origem[tam] = {10, 5, 10, 8, 5, 3, 4};
	int destino[tam];
	replaceit( origem, destino, tam, &tdest );
	exibe(destino, tdest );
	
}

