/*
QUESTÃO 07:
Desenvolver uma função que remova determinado elemento (todas as suas ocorrências) de um vetor de float. Ao final, retornar o número de remoções realizadas.
*/

#include <stdio.h>

int questao7 (float v[], int *quant, float num)
{
	int i, cont = 0;
	while( i < *quant)
	{
		if(v[i] == num)
		{
			v[i] = v[*quant - 1];
			(*quant)--;
			cont++;
		}
		else
		{
			i++;
		}
	}
}

int main(void)
{
	int tam = 10, removidos;
	float num;
	float vetor[tam] = {5, 10, 5, 5, 1,10, 15, 5, 10, 2 };
	printf("Entre com o numero a ser removido: ");
	scanf("%f", &num);
	printf("Foram removidos %d numeros %.0f. ", removidos, num );
	
}







