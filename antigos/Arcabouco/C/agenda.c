#include <stdio.h>
#include <stdlib.h>

typedef struct cpf{
	int digitos[9];
	int verificador[2];
	char cpfnumero[12];
} CPF;

typedef struct data{
	int dia;
	int mes;
	int ano;
} Data;

typedef struct registro{
	
	char nome[100];
	CPF numero;
	Data nascimento;
	char email[100];
	int status;
} Registro;



void acessoregistro( Registro *pessoal )
{
	int i, j, tam;
	char temp;
	FILE *fp;
	fp = fopen("resource.txt","r");
	fscanf(fp,"%d",&tam);
	for(i = 0; i < tam; i++){
		
		fscanf(fp,"%s [^\n] ", pessoal[i].nome);
		fscanf(fp,"%s [^\n] ", pessoal[i].numero.cpfnumero);
		fscanf(fp,"%d%c%d%c%d", &pessoal[i].nascimento.dia, &temp, &pessoal[i].nascimento.mes, &temp, &pessoal[i].nascimento.ano );
		fscanf(fp,"%256[^/n]", pessoal[i].email);
		fscanf(fp,"%d",&pessoal[i].status);	
	}
}

void exibiregistro( Registro *pessoal)
{
	int i, j, tam = 3;
	for(i = 0; i < tam; i++)
	{
		printf("%s\n", pessoal[i].nome);
		printf("%s\n", pessoal[i].numero.cpfnumero);
		printf("%d  %d  %d\n", pessoal[i].nascimento.dia,pessoal[i].nascimento.mes, pessoal[i].nascimento.ano );
		printf("%s\n", pessoal[i].email);
		printf("%d\n", pessoal[i].status);
	}
}

int main()
{
	Registro pessoal[100];
	acessoregistro(pessoal);
	exibiregistro(pessoal);
	return 0;
}
