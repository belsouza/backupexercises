/*
Programa converte um vetor de char numerico em  numeros.
Sem protecao de entrada de usuario
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void convertcharnumber( char *string, long long int *numero, int *verificador)
{
	int tam, i, temp, atual = 0;
	tam = strlen(string);
	
	for(i = 0; i < tam; i++)
	{
		//convert um char para int e atribui a variavel inteira temp
		temp = string[i] - '0';
		
		if(i < 9)
		{
			if(i == 0)
			{
				*numero = *numero + temp;
			}
			else
			{
				*numero = (*numero * 10) + temp;
			}
		}
		else
		{
			if(i == 9)
			{
				*verificador = *verificador + temp;
			}
			else
			{
				*verificador = (*verificador * 10) + temp;
			}
		}		
	}	
}

int main(void)
{
	char cpfnumber[11];	
	long long int numero = 0;
	int verificador = 0;
	
	printf("CPF number: ");
	gets(cpfnumber);
	convertcharnumber(cpfnumber, &numero, &verificador);	
	
	printf("\nNumero: %lld", numero);	
	printf("\nVerificador: %d", verificador);
	
	
}
