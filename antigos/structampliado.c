#include <stdio.h>
#include <stdlib.h>

typedef struct data
{
	int dia;
	int mes;
	int ano;
}Tdata;

typedef struct tipocpf
{
	int base;
	int digito;
} Tcpf;

typedef struct ficha
{
	char nome[40];
	Tcpf cpf;
	Tdata nasc;
	int telefone;
	char email[40];
	int status;
}Tficha;



void addRegistro()
{
	FILE *fp;
	Tficha people = { "Kevin Bacon", 56589866, 11, 23, 11, 1658, 36987885, "malasemalca@tymail.com", 0};
	
	fp = fopen("ficha.txt", "w+");
	if(!fp)
	{
		printf("Erro de abertura do arquivo.");
		exit(1);
	}
	fprintf(fp,"%s\n\r", people.nome);
	fprintf(fp,"%d  %d\n\r", people.cpf.base, people.cpf.digito);
	fprintf(fp,"%d  %d  %d\n\r", people.nasc.dia, people.nasc.mes, people.nasc.ano);
	fprintf(fp,"%d\n\r", people.telefone);
	fprintf(fp,"%s\n\r", people.email);
	fprintf(fp,"%d\n\r", people.status);
	
}

int main(void)
{
	addRegistro();	
}
