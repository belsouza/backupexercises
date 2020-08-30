/*
QUESTÃO 07:
Desenvolver uma função que remova determinado elemento (todas as suas ocorrências) de um vetor de float. Ao final, retornar o número de remoções realizadas.
*/
//Não tá certo :D

#include <stdio.h>

void gerar( int *vet, int size )
{
	int i;
	FILE *fp;
	fp = fopen("vetor.txt", "w+");
	if(fp)
	{
		for( i = 0; i <= size; i++)
		{
			fprintf(fp, "%.0f", vet[i]);
		}
		fclose( fp );
	}
	else
	{
		printf("\nNao foi possivel criar o arquivo designado.");
	}
}

int questao7 (float v[], int *quant, float num)
{
	//Movimento do ultimo para o primeiro - deslizamento
	int i, p,  cont = 0;
	while( i < *quant)
	{
		if(v[i] == num)
		{
			for(p = i+1; p < *quant; p++)
			{
				v[p-1] = v[p];
			}
			(*quant)--;
			cont++;
		}
		else
		{
			i++;
		}
	}
	return cont;
}

int main(void)
{
	int tam = 10;
	int removidos;
	float num;
	float vetor[tam] = {5, 10, 5, 5, 1,10, 15, 5, 10, 2 };
	printf("Entre com o numero a ser removido: ");
	scanf("%f", &num);
	removidos = questao7(vetor, &tam, num);
	printf("Foram removidos %d numeros %.0f. ", removidos, num );
	
}







