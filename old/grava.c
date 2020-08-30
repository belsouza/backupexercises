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

void namefile( char *nomedoarquivo )
{
	printf("\nNome do arquivo: (com a extensao): ");
	gets(nomedoarquivo);	
}

void readfile()
{
	FILE *fp;
	Tficha registro[100];
	char nomedoarquivo[30];
	int i,cont;
	
	namefile(nomedoarquivo);
	fp = fopen(nomedoarquivo, "r");
	if(!fp)
	{
		printf("Erro de leitura do arquivo! A operacao sera encerrada.");
		exit(1);
	}
	
	//Obtendo a primeira linha		
	
	fflush(stdin);
	fscanf(fp, "%d", &cont);
	
	for(i = 0; i < cont; i++ )
	{
		fscanf(fp, " %[^\n]s*c", &registro[i].nome );
		fscanf(fp, "%d %d", &registro[i].cpf.base, &registro[i].cpf.digito );
		fscanf(fp, "%d  %d  %d", &registro[i].nasc.dia, &registro[i].nasc.mes, &registro[i].nasc.ano );
		fscanf(fp, "%lli", &registro[i].telefone );
		fscanf(fp, "%s", &registro[i].email );
		fscanf(fp, "%d\n", &registro[i].status );
		
		printf("Verificacao: ---> %p", registro);
		
		printf("%s\n", registro[i].nome);
		printf("%d %d\n",registro[i].cpf.base, registro[i].cpf.digito );
		printf("%d  %d  %d\n", registro[i].nasc.dia, registro[i].nasc.mes, registro[i].nasc.ano );
		printf("%d\n", registro[i].telefone );
		printf("%s\n", registro[i].email );
		printf("%d\n\n", registro[i].status );		
	}	
	
	fclose(fp);	
}

void atualizafile()
{
	FILE *fp;
	Tficha registro;
	char nomedoarquivo[30];
	int num;
		
	namefile(nomedoarquivo);
	fp = fopen(nomedoarquivo, "a");
	if(!fp)
	{
		printf("Erro de abertura do arquivo! A operacao sera encerrada.");
		exit(1);
	}	

	//Aqui entra o programa que le o arquivo e ve quantos registros tem nele.
	
	fflush(stdin);
	printf("Nome: ");
	gets(registro.nome);
	
	printf("CPF: ");
	scanf("%d  %d", &registro.cpf.base, &registro.cpf.digito);
	
	printf("Data de Nascimento: ");
	scanf("%d  %d  %d", &registro.nasc.dia,&registro.nasc.mes, &registro.nasc.ano );
	
	printf("Telefone: ");
	scanf("%lli", &registro.telefone);
	
	fflush(stdin);
	printf("Email: ");
	gets(registro.email);
	
	printf("Status: ");
	scanf("%d", &registro.status);
	
	fprintf(fp, "%s\n", registro.nome );
	fprintf(fp, "%d  %d\n", registro.cpf.base, registro.cpf.digito );
	fprintf(fp, "%d  %d  %d\n", registro.nasc.dia, registro.nasc.mes, registro.nasc.ano );
	fprintf(fp, "%lli\n", registro.telefone );
	fprintf(fp, "%s\n", registro.email );
	fprintf(fp, "%d\n", registro.status );
	fprintf(fp, "\n\n");	
	
	fclose(fp);	
}

void createfile()
{
	FILE *fp;
	Tficha registro;
	char nomedoarquivo[30];
	int num;
		
	namefile(nomedoarquivo);
	fp = fopen(nomedoarquivo, "a");
	if(!fp)
	{
		printf("Erro de criacao do arquivo! A operacao sera encerrada.");
		exit(1);
	}
	
	fprintf(fp, "1\n\n");
	//Aqui entra o programa que le o arquivo e ve quantos registros tem nele.
	
	fflush(stdin);
	printf("Nome: ");
	gets(registro.nome);
	
	printf("CPF: ");
	scanf("%d  %d", &registro.cpf.base, &registro.cpf.digito);
	
	printf("Data de Nascimento: ");
	scanf("%d  %d  %d", &registro.nasc.dia,&registro.nasc.mes, &registro.nasc.ano );
	
	printf("Telefone: ");
	scanf("%lli", &registro.telefone);
	
	fflush(stdin);
	printf("Email: ");
	gets(registro.email);
	
	printf("Status: ");
	scanf("%d", &registro.status);
	
	fprintf(fp, "%s\n", registro.nome );
	fprintf(fp, "%d  %d\n", registro.cpf.base, registro.cpf.digito );
	fprintf(fp, "%d  %d  %d\n", registro.nasc.dia, registro.nasc.mes, registro.nasc.ano );
	fprintf(fp, "%lli\n", registro.telefone );
	fprintf(fp, "%s\n", registro.email );
	fprintf(fp, "%d\n", registro.status );
	fprintf(fp, "\n\n");	
	
	fclose(fp);	
}


int main(void)
{	
	char n;
	int x;
	printf("Bem vindo ao demolidor!\nEntre com a opcao desejada: ");
	n = getchar();
	x = (int)n;
	if( x == 2)
	{
		printf("Boa!");
	}
	
	
	
}
