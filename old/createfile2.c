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


void cpfground( int *base, int *digito );
int firstline();

void createfile()
{
	FILE *fp, *sp;
	Tficha registro;
	char nomedoarquivo[30], lines[100];
	int num, i;
	int status = 0, suboption = 0, count = 0; //booleanos... ;-;
	
	printf("\nAgenda a ser aberta: ");	
	
	fflush(stdin);
	gets(nomedoarquivo);
	
	// Contar a primeira linha !!!! Ela precisará ser atualizada!!!!
	
	fp = fopen(nomedoarquivo, "r+");
	if(!fp)
	{
		printf("Erro de leitura do arquivo! A operacao sera encerrada.");
		exit(1);
	}
	
	// Esse é o primeiro scanf  e vai ler a primeira linha do arquivo - contem o numero de registros.. só isso.
	fscanf(fp, "%d", &num);
	fclose(fp);	
	
	//Aqui entra o programa que le o arquivo e ve quantos registros tem nele.
	
	i = 1;
	while(status == 0)	
	{
		sp = fopen(nomedoarquivo, "a");
		if(!sp)
		{
			printf("Erro de abertura do arquivo! A operacao sera encerrada.");
			exit(2);
		}
		
		num = num + 1;
		printf("\n\n**************** Registro %d *****************\n\n", num);		
		fprintf(sp, "%d\n", num); //num foi obtido na leitura anterior. Esta linha eh pra ser sobrescrita - e o ponteiro esta no i = 1 ( linha 1 )
		
		// ********************** entrada de dados ************************
		
		fflush(stdin);
		printf("Nome: ");
		gets(registro[i].nome);
		
		printf("CPF: ");
		cpfground( &registro[i].cpf.base,  &registro[i].cpf.digito );
		//scanf("%d  %d", &registro.cpf.base, &registro.cpf.digito);
		
		printf("Data de Nascimento: ");
		scanf("%d  %d  %d", &registro[i].nasc.dia,&registro[i].nasc.mes, &registro[i].nasc.ano );
		
		printf("Telefone: ");
		scanf("%lli", &registro[i].telefone);
		
		fflush(stdin);
		printf("Email: ");
		gets(registro[i].email);
		
		printf("Status: ");
		scanf("%d", &registro[i].status);
		
		fprintf(sp, "%s\n", registro[i].nome );
		fprintf(sp, "%d  %d\n", registro[i].cpf.base, registro[i].cpf.digito );
		fprintf(sp, "%d  %d  %d\n", registro[i].nasc.dia, registro[i].nasc.mes, registro[i].nasc.ano );
		fprintf(sp, "%lli\n", registro[i].telefone );
		fprintf(sp, "%s\n", registro[i].email );
		fprintf(sp, "%d\n", registro[i].status );
		fprintf(sp, "\n\n");		
		
		
		// ********************** entrada de dados ************************
		
		
		if(fclose(sp) != EOF )
		{
			printf("\n\nO %d registro foi adicionado com sucesso.\nDeseja continuar adicionando? S/N? \nOpcao: ", num);
			fflush(stdin);
			while ((suboption == 0) || (count == 0))
			{
				fflush(stdin);			
				suboption = getch();
				if(suboption == 110 || suboption == 78) //nao
				{
					printf("\nVoce escolheu sair. ");
					status = 1;
					count = 1;
				}
				else
				{
					if(suboption == 115 || suboption == 83) // sim
					{
						printf("\nInserindo mais um registro: ");
						count = 1;																				
					}
					else
					{
						printf("\nNao entendi esta opcao! Tente de novo: S/N?"); //Repete ate que digita a resposta certa
						suboption = 0;						
					}
				}
			}
			count = 0;	// Não tirar. É o RESET e impede o repetimento do codigo. Se tirar, vai dar ruim.. mesmo!			
			i++;
			
		}
		else
		{
			printf("\nOps! Houve algum erro. O arquivo nao foi gravado com sucesso.");
			exit(2);
		}
					
	}
	
	
	
}

int main(void)
{
	createfile();
}

int firstline()
{
	
}

void cpfground( int *base, int *digito )
{
	int status = 0, i = 1;
	int c = 0, temp;
	*digito = *base = 0;
	
	while((c != 13) && (i <= 11))
	{
		c = getch();
		putchar(c);
		temp = (c) - '0';
		
		//variaveis
		if(i <= 9)
		{
			if(i == 0)
			{
				*base = *base + temp; //primeiro digito - unidade
			}
			else
			{
				*base = (*base * 10) + temp; //os outros digitos sao multiplos de 10: dezena, centenas, etc.
			}
		}
		else
		{
			if(i == 10)
			{
				*digito = *digito + temp; //primeiro digito - unidade
			}
			else
			{
				*digito = (*digito * 10) + temp; //os outros digitos sao multiplos de 10: dezena, centenas, etc.
			}
		}
		
		//fim variaveis
		
		//Pontos
		if((i%3 == 0) && (i < 9))
		{
			putchar('.');
		}
		if((i%3 == 0) && (i >= 9))
		{
			putchar('-');
		}
		//Fim pontos	
		i++;	
	}
	printf("\n");
}

