#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cpf{
	int digitos[9];
	int codigo[2];
}CPF;

typedef struct dnasc{
	int dia;
	int mes;
	int ano;
	char datadenascimento[10];
}Datanascimento;

typedef struct telefone{
	int cod;
	int numerodetelefone[12];
}Telefone;

typedef struct agenda{
	char nome[10];
	CPF document;
	Datanascimento data;
	Telefone dnum;
	int codigo;	
}Agenda;

int main(void){
	Agenda p[100];
	learquivo( p );
}
