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

void namefile( char *nomedoarquivo )
{
	printf("\nNome do arquivo: (com a extensao): ");
	gets(nomedoarquivo);	
}

void createfile()
{
	FILE *fp;
	Tficha registro;
	char nomedoarquivo[30];
	
	namefile(nomedoarquivo);
	fp = fopen(nomedoarquivo, "a");
	if(!fp)
	{
		printf("Erro de criacao do arquivo! A operacao sera encerrada.");
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
	scanf("%d", &registro.telefone);
	
	fflush(stdin);
	printf("Email: ");
	gets(registro.email);
	
	printf("Status: ");
	scanf("%d", &registro.status);
	
	fprintf(fp, "%s\n", registro.nome );
	fprintf(fp, "%d  %d\n", registro.cpf.base, registro.cpf.digito );
	fprintf(fp, "%d  %d  %d\n", registro.nasc.dia, registro.nasc.mes, registro.nasc.ano );
	fprintf(fp, "%d\n", registro.telefone );
	fprintf(fp, "%s\n", registro.email );
	fprintf(fp, "%s\n", registro.nome );
	fprintf(fp, "%d\n", registro.status );
	fprintf(fp, "\n\n");	
	
	fclose(fp);	
}


int main(void)
{	
	FILE *fp;
	Tficha registro;
	char nomedoarquivo[30];
	int i,cont;
	
	namefile(nomedoarquivo);
	fp = fopen(nomedoarquivo, "r");
	if(!fp)
	{
		printf("Erro de leitura do arquivo! A operacao sera encerrada.");
		return 1;
	}
	
	//Obtendo a primeira linha		
	fscanf(fp,"%d", &cont);
	printf("%d", cont);
	
	for(i = 5; i < 5+cont; i++ )
	{
		fgets(registro.nome, 40, fp);
		printf("%s", registro.nome);
	}
	
	
	fclose(fp);	
	
	
	

}
