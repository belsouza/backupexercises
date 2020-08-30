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
	char numerodetelefone[12];
}Telefone;

typedef struct agenda{
	char nome[10];
	CPF document;
	Datanascimento data;
	Telefone dnum;
	int codigo;	
}Agenda;

void learquivo( Agenda **aux ){
	int i, num;
	Agenda *p = *aux;
	char trash;
	FILE *fp;
	fp = fopen("agenda.txt","r");
	fscanf(fp,"%d",&num);
	if(num == 0)
	{
		//Adiciona um registro
	}
	else
	{
		for(i = 0;i < num; i++)
		{
			fscanf(fp,"%s[^\n]",p[i].nome );
			fscanf(fp,"%d%d%d%d%d%d%d%d%d%c%d%d",&p[i].document.digitos[0], &p[i].document.digitos[1],&p[i].document.digitos[2],&p[i].document.digitos[3],&p[i].document.digitos[4],&p[i].document.digitos[5],&p[i].document.digitos[6],&p[i].document.digitos[7],&p[i].document.digitos[8],&p[i].document.digitos[9], &trash, &p[i].document.codigo[0], &p[i].document.codigo[1]  ) ;
			fscanf(fp,"")
		}
	}
}


