#include <stdio.h>

// ****** STRUCT ********
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

// **** END STRUCT *******

void insereDados( Tficha registro, int *i )
{
	fflush(stdin);
	printf("Nome: ");
	scanf("%s", &registro[*i].nome);
	
	printf("CPF: ");
	scanf("%d  %d", &registro[*i].cpf.base, &registro[*i].cpf.digito);
	
	printf("Data de Nascimento: ");
	scanf("%d  %d  %d", &registro[*i].nasc.dia,&registro[*i].nasc.mes, &registro[*i].nasc.ano );
	
	printf("Telefone: ");
	scanf("%lli", &registro[*i].telefone);
	
	fflush(stdin);
	printf("Email: ");
	gets(registro[*i].email);
	
	printf("Status: ");
	scanf("%d", &registro[*i].status);	
}

void gravaArquivo( Tficha registro, char *nomedoarquivo, int *num )
{
	FILE *sp;
	sp = fopen(nomedoarquivo, "w+");
	int i, temp;
	
	fseek(sp, 0, SEEK_SET);
	temp = *num;
	
	fprintf(sp, "%d\n\n", temp );
	
	for(i = 0; i < temp; i++)
	{
		fprintf(sp, "%s\n", registro[i].nome );
		fprintf(sp, "%d  %d\n", registro[i].cpf.base, registro[i].cpf.digito );
		fprintf(sp, "%d  %d  %d\n", registro[i].nasc.dia, registro[i].nasc.mes, registro[i].nasc.ano );
		fprintf(sp, "%lli\n", registro[i].telefone );
		fprintf(sp, "%s\n", registro[i].email );
		fprintf(sp, "%d\n", registro[i].status );
		fprintf(sp, "\n");
	}
	
	fclose(sp);	
}


void lerArquivo( Tficha registro, char *nomedoarquivo, int *num ) // sendo que num eh o numero de registros
{
	// **** LER ********
	FILE *fp;		
	int i, temp, cont = 0;
	
	fp = fopen(nomedoarquivo, "r+");
	fseek(fp, 0, SEEK_SET);
	// abrir o arquivo e jogar o conteudo da memoria, porcausa do primeiro elemento
	// que precisa ser sobrescrito. 
	
	//Lendo o arquivo e jogando para a estrutura
	
	fscanf(fp, "%d", &temp);	
	*num = temp;
	
	for(i = 0; i < temp; i++)	
	{	
		fscanf(fp, " %[^\n]s*c", &registro[i].nome );
		fscanf(fp, "%d %d", &registro[i].cpf.base, &registro[i].cpf.digito );
		fscanf(fp, "%d  %d  %d", &registro[i].nasc.dia, &registro[i].nasc.mes, &registro[i].nasc.ano );
		fscanf(fp, "%lli", &registro[i].telefone );
		fscanf(fp, "%s", &registro[i].email );
		fscanf(fp, "%d", &registro[i].status );
		cont++;
	}
	
	if( temp != cont )
	{
		printf("\nAcerto: ");
		*num = cont;
	}	
	
	printf("\nTemp: %d e Cont %d\n", temp, cont);
	
	fclose(fp);	
}
	
//    Inserindo usuario na marra. 
void inserir_usuario()	
{
	Tficha registro;
	char nomedoarquivo[20] = "banana.txt";
	int i, num;
	
	lerArquivo(registro, nomedoarquivo, &num ); //obtem o arquivo. Já que o append nao sobrescreve, escreveremos um novo
	// Os dois aqui sao concomitantes
	//num = num + 1;
	insereDados( registro, &num ); // coloca na proxima posicao. 
	gravaArquivo( registro, nomedoarquivo, &num );
	
	printf("%d", num);
}	
	

int main(void)
{
	inserir_usuario();
}
