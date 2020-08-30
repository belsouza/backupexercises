#include <stdio.h>
#include <stdlib.h>

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
} Agenda;


void learquivo();
void gravarquivo();
void nomedoarquivo();

int main(void)
{
	Agenda agenda;
	learquivo(agenda);
	gravarquivo();
}

void nomedoarquivo( char filename[] )
{
	printf("Entre com o nome do arquivo: ");
	gets(filename);
}


void learquivo( Agenda agendando )
{
	
	FILE *fp;
	int n, i, j;
	fp = fopen("ficha.txt", "r");
	if(fp == NULL)
	{
		printf("ERRO!");
		exit(1);
	}
	fscanf(fp, "%d", &n );
	printf("Ha %d registro(s)", n);
	fflush(stdin);
	
	for(i = 0; (i < n); i++)
	{
		fflush(stdin);	
			
		
		fflush(stdin);
		fscanf(fp, "%d  %d", &agendando.cpf.identificador, &agendando.cpf.digito);
		
		fflush(stdin);
		fscanf(fp, "%d  %d  %d", &agendando.nasc.dia, &agendando.nasc.mes, &agendando.nasc.ano);
		
		fflush(stdin);
		fscanf(fp, "%d", &agendando.telefone );
		
		fflush(stdin);
		fgets(agendando.email, sizeof(agendando.email), fp);
		
		fflush(stdin);
		fscanf(fp, "%d", &agendando.status);
		
		printf("\nNome: %s", agendando.nome);
		printf("\nCPF: %d  %d", agendando.cpf.identificador, agendando.cpf.digito);
		printf("\nData de Nascimento: %d  %d  %d", agendando.nasc.dia, agendando.nasc.mes, agendando.nasc.ano);
		printf("\nTelefone: %d", agendando.telefone );
		printf("\nEmail: %s", agendando.email);
		printf("\nStatus: %d", agendando.status);
	}
		
}

void gravarquivo( char filename[] )
{
	FILE *fp;
	int n;
	//fp = fopen("ficha.txt", "w");
	
}
