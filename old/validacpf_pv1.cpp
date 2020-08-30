/*
Programa converte um vetor de char numerico em  numeros.
Sem protecao de entrada de usuario
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void convertcharnumber( char *string, long long int *numero, int *verificador)
{
	int tam, i, temp;
	int pd, sd, somapd = 0, somasd = 0, counterpd, countersd;
		
	tam = strlen(string);
	counterpd = 2; // começa do verificador que eh a segunda casa
	countersd = 2; // pega o primeiro verificador
	
	for(i = tam; i >= 0; i--)
	{
		//convert um char para int e atribui a variavel inteira temp
		
		temp = string[i] - '0';		
			
		//Digitos normais (o else do anterior)
		if(i < 8  && i >= 0 )
		{
			//printf("\nTempN: %d + (%d * %d) ", somapd, temp, counterpd);
			somapd = somapd + (temp * counterpd); // retira 1 igual ao tam... os dois sao iguais
			counterpd++;
		}		
		
		
		if(i < 10  && i >= 0 )
		{
			//printf("\nTempN: %d + (%d * %d) ", somasd, temp, countersd);
			somasd = somasd + (temp * countersd); // retira 1 igual ao tam... os dois sao iguais
			countersd++;
		}
			
	}
	
	pd = (somapd * 10) % 11;
	sd = (somasd * 10) % 11;
	
	// 52998224725
	printf("\nPD: %d", pd); // 2
	printf("\nSD: %d", sd); // 5
}

int main(void)
{
	char cpfnumber[11];	
	long long int numero = 0;
	int verificador = 0;
	
	printf("CPF number: ");
	gets(cpfnumber);
	convertcharnumber(cpfnumber, &numero, &verificador);	
	
//	printf("\nNumero: %lld", numero);	
//	printf("\nVerificador: %d", verificador);
	
	
}
