/*
QUESTÃO 09:
Implementar a função de inserção de determinado elemento em um vetor ordenado crescentemente (dica: utilizar a função do item 08 para auxiliar).
*/

#include <stdio.h>

int questao8( float v[], int quant, float x)
{
	int i;
	for( i = 0; i < quant; i++)
	{
		if(v[i] == x)
		{
			return i;
		}
		else
		{
			if(v[i] > x)
			{
				return i;
			}
		}
	}
	return quant;
}

//quant vai mudar e por isso vai por referencia
int inserir( float v[], int cap, int *quant, float num)
{
	if(*quant == cap)
	{
		return 0;
	}
	else
	{
		pos = questao8(v, *quant, num);
		for( i = (*quant-1); i >= pos; i--)
		{
			v[i+1] = v[i];
		}
		v[pos] = num;
		(*quant)++;
		return 1;
	}
}


int main(void)
{
	
}

