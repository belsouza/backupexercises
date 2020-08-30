/*
Programa converte um vetor de char numerico em  numeros.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
	char cpfnumber[11];
	int tam, i, temp, atual = 0;
	long long int numero = 0;
	int verificador = 0;
	
	printf("CPF number: ");
	gets(cpfnumber);
	
	tam = strlen(cpfnumber);
	printf("\nSize: %d", tam );
	
	for(i = 0; i < tam; i++)
	{
		temp = cpfnumber[i] - '0';
	//	printf("\nTemp: %d", temp);
		
		if(i < 9)
		{
			if(i == 0)
			{
				numero = numero + temp;
			}
			else
			{
				numero = (numero * 10) + temp;
			}
		}
		else
		{
			if(i == 9)
			{
				verificador = verificador + temp;
			}
			else
			{
				verificador = (verificador * 10) + temp;
			}
		}
		
	}
	
	printf("\nNumero: %lld", numero);
	
	printf("\nVerificador: %d", verificador);
	
	
}
