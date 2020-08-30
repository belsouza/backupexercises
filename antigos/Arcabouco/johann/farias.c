#include <stdio.h>
#include <stdlib.h>

typedef struct cpf
{
	char digitos[9];
	char verificador[2];
}CPF;

typedef struct nasc{
	int dia;
	int mes;
	int ano;
}Data;

typedef struct agenda{
	
	char nome[30];
	CPF numero;
	Data nasc;
	char email[30];
	int status;		
}Agenda;

void readstruct( Agenda *temp , int *tam){
	
	int i, j, k, num, trash;
	char bit;	
	FILE *fp;
	fp = fopen("agenda.txt","r");	
	fscanf(fp,"%d",&num);
			
	i = 0;
	while(!feof(fp)){
		fscanf(fp,"\n%[^\n]", temp[i].nome);
		fscanf(fp,"%s  %s\n", temp[i].numero.digitos, temp[i].numero.verificador);	
		fscanf(fp,"%d %c %d %c %d\n", &temp[i].nasc.dia, &bit, &temp[i].nasc.mes, &bit, &temp[i].nasc.ano);
		fscanf(fp,"%[^\n]", temp[i].email);
		fscanf(fp,"%d", &temp[i].status);
		fflush(stdout);
		i++;
	}
	
	*tam = (i - 1);		
}

void exibeAgenda( Agenda *temp, int tam )
{
	int i;
	for(i = 0; i < tam;i++)
	{		
		printf("%s\n", temp[i].nome);
		printf("%s %s\n",temp[i].numero.digitos, temp[i].numero.verificador);
		printf("%d / %d / %d\n", temp[i].nasc.dia, temp[i].nasc.mes, temp[i].nasc.ano);
		printf("%s\n", temp[i].email);
		printf("%d\n", temp[i].status);
		printf("\n");		
	}
}

void completeform( Agenda *temp, int tam )
{
    int i = tam+1;
	printf("\nNome: ");
	fflush(stdin);
    scanf("%[^\n]s", &temp[i].nome[0]);
    
    printf("CPF: ");
	fflush(stdin);	
	scanf("%s  %s", &temp[i].numero.digitos, &temp[i].numero.verificador);
	
	printf("Data de Nascimento: ");
	fflush(stdin);
	fscanf(stdin, "%d  %d  %d", &temp[i].nasc.dia, &temp[i].nasc.mes, &temp[i].nasc.ano  );
	
	printf("Email: ");
	fflush(stdin);
	scanf("%[^\n]s", &temp[i].email);
	
	temp[i].status = 0;	
	
}


int main(void)
{
	int size;
	Agenda user[100];
	readstruct(user, &size);
	//exibeAgenda(user, size);
	completeform(user,size);
	return 0;
}
