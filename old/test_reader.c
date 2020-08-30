#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 150

typedef struct cpf
{
	int identificador;
	int digito;
	
} TCPF;

typedef struct data
{
	int dia;
	int mes;
	int ano;
} DNasc;

typedef struct agenda
{
	char nome[50];
	TCPF cpf;
	DNasc nasc;
	int telefone;
	char email[50];
	int status;	
} MyAgenda;

int main(void)
{
	int opt;
	bool status = false;
	printf("Continua? S/N? ");
	
	while (status == false)
	{
		opt = getchar();
		switch(opt)
		{
		case('s'):
		case('S'):
			printf("Sim");
			status = true;
			break;
			
		case('n'):
		case('N'):
			printf("No");
			status = true;
			break;
			
		default:
			printf("\nNao entendi. Sim ou Nao?\n");
			opt = getchar();
		}
	}
	
	
}

