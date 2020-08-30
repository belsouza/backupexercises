/*
Calcular media de um aluno
*/

#include <stdio.h>

float mediaVal ( int n, int val[] )
{
	int i, soma = 0;
	float vtot;
	for(i = 0; i < n; i++)
	{
		soma = soma + val[i];
	}
	
	vtot = soma / (float)n;
	return vtot;
}

void main(void)
{
    	
}
