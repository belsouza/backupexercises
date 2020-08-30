#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct data
{
	int dia;
	int mes;
	int ano;
} DNasc;

typedef struct agenda
{
	char nome[50];
	int cpf;
	DNasc nasc;
	int telefone;
	char email[50];
	int status;	
} Agenda;

void ler_agenda()
{
	FILE *fp;
	int i;
	char nome[40];
	int cpf;
	int datadenascimento;
	int telefone;
	char email[50];
	int status;
	
//	char *result;	
	char nomedoarquivo[40];
	
	fflush(stdin);
	printf("\nEntre com o nome do arquivo que deseja ser aberto:(com a extensao)): ");
	scanf("%s", nomedoarquivo);
	
	
	fp = fopen(nomedoarquivo,"r");
	
	if(!fp)
	{
		printf("Ops! Erro de abertura do arquivo! A aplicacao sera encerrada!");
		exit(EXIT_FAILURE);
	}
	
	while(!feof(fp))
	{	
		 fgets (fileText, 100, fp);
	}
	fclose(fp);
}

int main(void)
{
	int opt;
	printf("\nSelecione a operacao desejada:\n1- Nova agenda\n2- Ler Agenda\n ");
	scanf("%d", &opt);
	switch(opt)
	{
		case 1:
			printf("\nCriar nova agenda");
			break;
		
		case 2:
			printf("\nLer Agenda");
			ler_agenda();
			break;
			
		default:
			printf("\nOpção não reconhecida");
	}
		
}
