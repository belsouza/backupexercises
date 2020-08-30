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
}Tficha;


void input_data( FILE *fp )
{
	Tficha registro;
	int i, n;
	char opt;
	int status = 0;
	int insert = 0;
	
	printf("\nQuantos registros serao inseridos? ");
	fflush(stdin);
	scanf("%d", &n);
	fprintf(fp, "%d\n\n", n);
	
	while(status == 0 || insert == 0)
	{
		fflush(stdin);
		printf("\n\nNome: ");
		gets(registro.nome);
		
		fflush(stdin);
		printf("CPF: ");
		scanf("%d  %d", &registro.cpf.base, &registro.cpf.digito);
		
		fflush(stdin);
		printf("Data de Nascimento: ");
		scanf("%d  %d  %d", &registro.nasc.dia,&registro.nasc.mes, &registro.nasc.ano );
		
		fflush(stdin);
		printf("Telefone: ");
		scanf("%lli", &registro.telefone);
		
		fflush(stdin);
		printf("Email: ");
		gets(registro.email);
		
		fflush(stdin);
		printf("Status: ");
		scanf("%d", &registro.status);	
		
		fprintf(fp, "%s\n", registro.nome );
		fprintf(fp, "%d  %d\n", registro.cpf.base, registro.cpf.digito );
		fprintf(fp, "%d  %d  %d\n", registro.nasc.dia, registro.nasc.mes, registro.nasc.ano );
		fprintf(fp, "%lli\n", registro.telefone );
		fprintf(fp, "%s\n", registro.email );
		fprintf(fp, "%d\n", registro.status );
		fprintf(fp, "\n\n");
		
		printf("\nContinua? S/N? ");
	
		while (status == false)
		{
			fflush(stdin);
			scanf("%c", &opt);
			switch(opt)
			{
			case('s'):
			case('S'):			
				i++;
				status = 1;				
				break;
				
			case('n'):
			case('N'):
				printf("\nA insercao de dados foi interrompida.");
				status = 1;
				insert = 1;
				break;
				
			default:
				printf("\nNao entendi. Sim ou Nao?\n");				
			}
		}
	}
	
		
}



void atualizar_agenda()
{
	FILE *fp;
	char nomedoarquivo[20];
	printf("\nEntre com o nome da agenda a ser aberta: ");
	gets(nomedoarquivo);
	
	if(true) // Entra a condicional da funcao arquivo_existente, que esta na main manjoo
	{
		fp = fopen(nomedoarquivo, "a+");
		if(!fp)
		{
			printf("\nErro de abertura do arquivo. A aplicacao sera encerrada.");
			exit(1);			
		}	
		
		input_data(fp);
		fclose(fp);			
	}
	
}

int main(void)
{
	atualizar_agenda();
}
