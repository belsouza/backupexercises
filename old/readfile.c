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
	long long int telefone;
	char email[40];
	int status;
}Tficha[100];


void readfile()
{
	FILE *fp;
	Tficha registro;
	char nomedoarquivo[30];
	char temp[100];
	int status = 0;
	int num, i;
	
	printf("\nAgenda a ser aberta: ");	
	gets(nomedoarquivo);
	
	fp = fopen(nomedoarquivo, "r");
	if(!fp)
	{
		printf("Erro de criacao do arquivo! A operacao sera encerrada.");
		exit(1);
	}	
	
	i = 0;
	while(!feof(fp))
	{
		if(i == 0)
		{
			fscanf(fp, "%d", &num);					
		}
		else
		{
			fscanf(fp, " %[^\n]s*c", &registro[i].nome );
			fscanf(fp, "%d %d", &registro[i].cpf.base, &registro[i].cpf.digito );
			fscanf(fp, "%d  %d  %d", &registro[i].nasc.dia, &registro[i].nasc.mes, &registro[i].nasc.ano );
			fscanf(fp, "%lli", &registro[i].telefone );
			fscanf(fp, "%s", &registro[i].email );
			fscanf(fp, "%d\n", &registro[i].status );
			
			printf("\nRegistro: %d\n", i);
			printf("Nome: %s\n", registro[i].nome);
			printf("CPF: %d %d\n",registro[i].cpf.base, registro[i].cpf.digito );
			printf("Data de Nascimento: %d  %d  %d\n", registro[i].nasc.dia, registro[i].nasc.mes, registro[i].nasc.ano );
			printf("Telefone: %d\n", registro[i].telefone );
			printf("Email: %s\n", registro[i].email );
			printf("Status: %d\n\n", registro[i].status );	
		}		
		i++;
	}	
	
	fclose(fp);	
}

int main(void)
{
	readfile();
}
