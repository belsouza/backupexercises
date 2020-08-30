/*
QUESTÃO 07:
Desenvolver uma função que remova determinado elemento (todas as suas ocorrências) de um vetor de float. Ao final, retornar o número de remoções realizadas.
*/

#include <stdio.h>

int removedor (float *vet, float el, int tam)
{
	int i, j = 0, cont = 0;
	float rec[tam];
	
		
	for(i = 0; i<= tam; i++)
	{
		if(vet[i] != el)
		{
			rec[j] = vet[i];
			j++;
		}
		else
		{
			cont++;
		}
	}
	
	return  cont;
}

void removedor2 (float *vet, float *alt, float el, int tam)
{
	int i, j = 0, cont = 0;
	float rec[tam];
	
		
	for(i = 0; i< tam; i++)
	{
		if(vet[i] != el)
		{
			rec[j] = vet[i];
			printf("%.0f ", rec[j]);
			j++;
		}
		else
		{
			cont++;
		}
	}
	*alt = *rec;	
}

void exibe( float *vet, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%.0f ", vet[i]);
	}
}

void gerar( float *vet, int size )
{
	int i;
	FILE *fp;
	fp = fopen("vetor.txt", "w+");
	if(fp)
	{
		for( i = 0; i < size; i++)
		{
			fprintf(fp, " | %.0f | ", vet[i]);
		}
		fclose( fp );
	}
	else
	{
		printf("\nNao foi possivel criar o arquivo designado.");
	}
}

int main(void)
{
	int tam = 10, removidos;
	float num;
	float vetor[tam] = {5, 10, 5, 5, 1,10, 15, 5, 10, 2 };
	float removido[tam];
	printf("Entre com o numero a ser removido: ");
	scanf("%f", &num);
	removidos = removedor(vetor, num, tam);
	printf("Foram removidos %d numeros %.0f. \n\n", removidos, num );
	removedor2(vetor, removido, num, tam);
	gerar(vetor, tam);
}







