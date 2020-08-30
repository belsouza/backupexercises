/*Questão 03 [3,0 pontos]: Desenvolver um programa que
permaneça lendo valores até que o número 0 seja fornecido.
A sua execução deve exibir, para cada número digitado (excluindo o 0),
o número de vezes que apareceu, em sequência, como ilustrado no
exemplo abaixo: 
 
1   1   6   6   6   2   1  1  1  4  4  3  3  3  3  2  2  0 
 
Saída do programa:
1 – 2 vez(es)
6 – 3 vez(es)
2 – 1 vez(es)
1 – 3 vez(es)
4 – 2 vez(es)
3 – 4 vez(es)
2 – 2 vez(es)*/
#include<stdio.h>

int main()
{
	int contnumero=0;
	float numero,numeroant;

	do
	{
		printf("Insira o numero: ");
		scanf("%f",&numero);
		
		if(contnumero==0)
		{
			numeroant=numero;
		}
		
		if(numeroant==numero)
		{
			contnumero++;
		}
		else
		{
			printf("%.0f - %d vez(es).\n",numeroant,contnumero);
			numeroant=numero;
			contnumero=1;
		}

	}while(numero!=0);
}


