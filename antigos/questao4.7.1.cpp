/*
Lista 4 exercicio 7
QUESTÃO 07:
Desenvolver um programa no qual o usuário entre com vários números inteiros e positivos e imprima o produto dos números ímpares e a soma dos números pares
*/

#include <stdio.h>

int main(void)
{
	unsigned int num;
	char opcao;
	
	
	 //Corrigir .. tem 4 do whiles ;-;
	
	do	
		do //validando o numero. Enquanto o numero nao for positivo, uma msg de erro apareccera
		{
			printf("Entre com um numero: ");
			scanf("%d", &num);
			
			fflush(stdin);		
			printf("Deseja continuar (s/n)? ");
			scanf("%c", &opcao);
			opcao = toupper (opcao);
		}
		while((opcao != 'N') && (opcao != 'S'));
		
	while(opcao == 'S');
	
	
	printf("\nA soma dos numeros digitados eh: %d", soma);
	printf("\nO produto dos numeros digitados eh: %d", produto);
	return 0;
	
}
