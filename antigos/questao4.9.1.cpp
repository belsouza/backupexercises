/*
Lista 4 exercicio 9
QUESTÃO 09:
Escrever um programa que encontre o quinto número maior que 1000, cuja divisão por 11 tenha resto 5.
*/

#include <stdio.h>

int main(void)
{
	int cont = 0;
	int numero = 1001;
	do{
		numero++;
		if(numero%11==5)
		{
			cont++;
		}		
	}		
	while(cont < 5);
	
	printf("Resposta = %d", numero);
	return 0;
}


